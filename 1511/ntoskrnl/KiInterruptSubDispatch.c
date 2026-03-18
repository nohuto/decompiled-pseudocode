/*
 * XREFs of KiInterruptSubDispatch @ 0x140155000
 * Callers:
 *     KiInterruptDispatch @ 0x140155360 (KiInterruptDispatch.c)
 * Callees:
 *     KiEndThreadAccountingPeriod @ 0x14007BD20 (KiEndThreadAccountingPeriod.c)
 *     PerfInfoLogInterrupt @ 0x1400D1A20 (PerfInfoLogInterrupt.c)
 *     EtwGetInterruptTimeStamp @ 0x1400D1B80 (EtwGetInterruptTimeStamp.c)
 *     KiEntropyQueueDpc @ 0x1400EA588 (KiEntropyQueueDpc.c)
 *     KiCallInterruptServiceRoutine @ 0x1400F6730 (KiCallInterruptServiceRoutine.c)
 */

void __fastcall KiInterruptSubDispatch(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rbp
  __int64 v5; // rsi
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // rcx
  unsigned __int64 v8; // rax
  unsigned int EntropyCount; // r11d
  unsigned int *v10; // r10
  __int64 CurrentThread; // r8
  __int64 v12; // rax
  __int64 v13; // rdx
  unsigned __int64 v14; // rdx
  int v15; // ecx
  bool v16; // zf
  unsigned __int8 v17; // al
  int v18; // edx

  CurrentIrql = KeGetCurrentIrql();
  __writecr8(*(unsigned __int8 *)(v5 + 93));
  *(_BYTE *)(v4 - 87) = CurrentIrql;
  *(_DWORD *)(v4 - 96) = 0;
  CurrentPrcb = KeGetCurrentPrcb();
  if ( ++CurrentPrcb->NestingLevel == 1 )
  {
    v8 = __rdtsc();
    EntropyCount = CurrentPrcb->EntropyTimingState.EntropyCount;
    v10 = &CurrentPrcb->EntropyTimingState.Buffer[(unsigned __int16)(EntropyCount & 0x7FF) >> 5];
    *v10 = v8 ^ __ROR4__(*v10, 5);
    CurrentPrcb->EntropyTimingState.EntropyCount = ++EntropyCount;
    if ( (EntropyCount & 0x3FF) == 0 )
      *(_DWORD *)(v4 - 96) = 1;
    CurrentThread = (__int64)CurrentPrcb->CurrentThread;
    v12 = v8 - CurrentPrcb->StartCycles;
    *(_QWORD *)(CurrentThread + 72) += v12;
    v13 = *(unsigned int *)(CurrentThread + 80);
    CurrentPrcb->StartCycles += v12;
    v14 = v12 + v13;
    v15 = v14;
    if ( HIDWORD(v14) )
      v15 = -1;
    *(_DWORD *)(CurrentThread + 80) = v15;
    if ( (*(_BYTE *)(CurrentThread + 2) & 0x3E) != 0 )
      KiEndThreadAccountingPeriod((__int64)KeGetCurrentPrcb(), CurrentThread, v12, a4);
  }
  _enable();
  if ( *(_DWORD *)(v4 - 96) )
    KiEntropyQueueDpc((__int64)KeGetCurrentPrcb());
  *(_QWORD *)(v5 + 136) = v4 - 128;
  v16 = (WORD2(PerfGlobalGroupMask) & 0x4000) == 0;
  *(_BYTE *)(v4 + 243) = (WORD2(PerfGlobalGroupMask) & 0x4000) != 0;
  if ( !v16 )
    EtwGetInterruptTimeStamp(v4 - 128);
  v17 = KiCallInterruptServiceRoutine(v5, 1);
  if ( *(_BYTE *)(v4 + 243) )
  {
    v18 = v17;
    BYTE1(v18) = *(_BYTE *)(v5 + 88);
    PerfInfoLogInterrupt(v5, v18, v4 - 128);
  }
  _disable();
}
