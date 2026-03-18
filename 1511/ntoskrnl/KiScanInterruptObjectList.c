/*
 * XREFs of KiScanInterruptObjectList @ 0x140154E30
 * Callers:
 *     KiChainedDispatch @ 0x140154BE0 (KiChainedDispatch.c)
 * Callees:
 *     KiEndThreadAccountingPeriod @ 0x14007BD20 (KiEndThreadAccountingPeriod.c)
 *     PerfInfoLogInterrupt @ 0x1400D1A20 (PerfInfoLogInterrupt.c)
 *     EtwGetInterruptTimeStamp @ 0x1400D1B80 (EtwGetInterruptTimeStamp.c)
 *     KiEntropyQueueDpc @ 0x1400EA588 (KiEntropyQueueDpc.c)
 *     KiCallInterruptServiceRoutine @ 0x1400F6730 (KiCallInterruptServiceRoutine.c)
 *     KiDispatchPassiveInterrupts @ 0x1401C9E00 (KiDispatchPassiveInterrupts.c)
 */

char __fastcall KiScanInterruptObjectList(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rbp
  __int64 v5; // rsi
  __int64 v6; // rax
  struct _KPRCB *CurrentPrcb; // rcx
  unsigned __int64 v8; // rax
  unsigned int EntropyCount; // r11d
  unsigned int *v10; // r10
  __int64 CurrentThread; // r8
  __int64 v12; // rdx
  unsigned __int64 v13; // rdx
  int v14; // ecx
  __int64 v15; // r12
  bool v16; // zf
  int v17; // edi
  __int64 v18; // r12
  unsigned __int64 v19; // rcx
  unsigned __int64 v20; // rcx
  int v21; // edx
  unsigned __int8 v23; // [rsp+20h] [rbp-28h]

  LOBYTE(v6) = KeGetCurrentIrql();
  __writecr8(*(unsigned __int8 *)(v5 + 92));
  *(_BYTE *)(v4 - 87) = v6;
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
    v6 = v8 - CurrentPrcb->StartCycles;
    *(_QWORD *)(CurrentThread + 72) += v6;
    v12 = *(unsigned int *)(CurrentThread + 80);
    CurrentPrcb->StartCycles += v6;
    v13 = v6 + v12;
    v14 = v13;
    if ( HIDWORD(v13) )
      v14 = -1;
    *(_DWORD *)(CurrentThread + 80) = v14;
    if ( (*(_BYTE *)(CurrentThread + 2) & 0x3E) != 0 )
      LOBYTE(v6) = KiEndThreadAccountingPeriod((__int64)KeGetCurrentPrcb(), CurrentThread, v6, a4);
  }
  _enable();
  if ( *(_DWORD *)(v4 - 96) )
    LOBYTE(v6) = KiEntropyQueueDpc((__int64)KeGetCurrentPrcb());
  v15 = v5 + 8;
  v16 = (WORD2(PerfGlobalGroupMask) & 0x4000) == 0;
  *(_BYTE *)(v4 + 243) = (WORD2(PerfGlobalGroupMask) & 0x4000) != 0;
  if ( !v16 )
    LOBYTE(v6) = EtwGetInterruptTimeStamp(v4 - 128);
  while ( 2 )
  {
    v17 = 0;
    do
    {
      v18 = v15 - 8;
      if ( (*(_DWORD *)(v18 + 104) & 1) != 0 )
      {
        v23 = 0;
      }
      else
      {
        v19 = *(unsigned __int8 *)(v18 + 93);
        if ( !(_BYTE)v19 )
        {
          LOBYTE(v6) = KiDispatchPassiveInterrupts(v18);
          goto LABEL_26;
        }
        if ( (_BYTE)v19 != *(_BYTE *)(v5 + 92) )
          __writecr8(v19);
        LOBYTE(v6) = KiCallInterruptServiceRoutine(v18, 1);
        v23 = v6;
        v20 = *(unsigned __int8 *)(v5 + 92);
        if ( (_BYTE)v20 != *(_BYTE *)(v18 + 93) )
          __writecr8(v20);
      }
      if ( *(_BYTE *)(v4 + 243) )
      {
        v21 = v23;
        BYTE1(v21) = *(_BYTE *)(v18 + 88);
        PerfInfoLogInterrupt(v18, v21, v4 - 128);
        LOBYTE(v6) = EtwGetInterruptTimeStamp(v4 - 128);
      }
      if ( v23 )
      {
        if ( *(_WORD *)(v18 + 108) != 1 )
          goto LABEL_26;
        ++v17;
      }
      v15 = *(_QWORD *)(v18 + 8);
    }
    while ( v15 != v5 + 8 );
    if ( v17 )
      continue;
    break;
  }
LABEL_26:
  _disable();
  return v6;
}
