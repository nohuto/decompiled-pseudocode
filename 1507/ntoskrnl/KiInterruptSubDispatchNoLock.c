/*
 * XREFs of KiInterruptSubDispatchNoLock @ 0x140183E70
 * Callers:
 *     KiInterruptDispatchNoLock @ 0x140184440 (KiInterruptDispatchNoLock.c)
 *     KiInterruptDispatchNoEOI @ 0x140184B80 (KiInterruptDispatchNoEOI.c)
 * Callees:
 *     EtwGetInterruptTimeStamp @ 0x1400A3EB0 (EtwGetInterruptTimeStamp.c)
 *     PerfInfoLogInterrupt @ 0x1400A3F90 (PerfInfoLogInterrupt.c)
 *     KiCallInterruptServiceRoutine @ 0x140101210 (KiCallInterruptServiceRoutine.c)
 *     KiEndThreadAccountingPeriod @ 0x140102C70 (KiEndThreadAccountingPeriod.c)
 *     KiEntropyQueueDpc @ 0x140128F10 (KiEntropyQueueDpc.c)
 */

unsigned __int8 __fastcall KiInterruptSubDispatchNoLock()
{
  __int64 v0; // rbp
  __int64 v1; // rsi
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // rcx
  unsigned __int64 v4; // rax
  unsigned int EntropyCount; // r11d
  unsigned int *v6; // r10
  __int64 CurrentThread; // r8
  __int64 v8; // rax
  __int64 v9; // rdx
  unsigned __int64 v10; // rdx
  int v11; // ecx
  bool v12; // zf
  unsigned __int8 result; // al
  int v14; // edx

  CurrentIrql = KeGetCurrentIrql();
  __writecr8(*(unsigned __int8 *)(v1 + 93));
  *(_BYTE *)(v0 - 87) = CurrentIrql;
  *(_DWORD *)(v0 - 96) = 0;
  CurrentPrcb = KeGetCurrentPrcb();
  if ( ++CurrentPrcb->NestingLevel == 1 )
  {
    v4 = __rdtsc();
    EntropyCount = CurrentPrcb->EntropyTimingState.EntropyCount;
    v6 = &CurrentPrcb->EntropyTimingState.Buffer[(unsigned __int16)(EntropyCount & 0x7FF) >> 5];
    *v6 = v4 ^ __ROR4__(*v6, 5);
    CurrentPrcb->EntropyTimingState.EntropyCount = ++EntropyCount;
    if ( (EntropyCount & 0x3FF) == 0 )
      *(_DWORD *)(v0 - 96) = 1;
    CurrentThread = (__int64)CurrentPrcb->CurrentThread;
    v8 = v4 - CurrentPrcb->StartCycles;
    *(_QWORD *)(CurrentThread + 72) += v8;
    v9 = *(unsigned int *)(CurrentThread + 80);
    CurrentPrcb->StartCycles += v8;
    v10 = v8 + v9;
    v11 = v10;
    if ( HIDWORD(v10) )
      v11 = -1;
    *(_DWORD *)(CurrentThread + 80) = v11;
    if ( (*(_BYTE *)(CurrentThread + 2) & 0x3E) != 0 )
      KiEndThreadAccountingPeriod((__int64)KeGetCurrentPrcb(), CurrentThread, v8);
  }
  _enable();
  if ( *(_DWORD *)(v0 - 96) )
    KiEntropyQueueDpc((__int64)KeGetCurrentPrcb());
  *(_QWORD *)(v1 + 136) = v0 - 128;
  v12 = (WORD2(PerfGlobalGroupMask) & 0x4000) == 0;
  *(_BYTE *)(v0 + 243) = (WORD2(PerfGlobalGroupMask) & 0x4000) != 0;
  if ( !v12 )
    EtwGetInterruptTimeStamp(v0 - 128);
  result = KiCallInterruptServiceRoutine(v1, 0);
  if ( *(_BYTE *)(v0 + 243) )
  {
    v14 = result;
    BYTE1(v14) = *(_BYTE *)(v1 + 88);
    result = PerfInfoLogInterrupt(v1, v14, v0 - 128);
  }
  _disable();
  return result;
}
