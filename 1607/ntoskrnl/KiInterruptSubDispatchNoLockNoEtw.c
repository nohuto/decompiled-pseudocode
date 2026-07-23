/*
 * XREFs of KiInterruptSubDispatchNoLockNoEtw @ 0x14015F700
 * Callers:
 *     KiInterruptDispatchNoLockNoEtw @ 0x14015FF60 (KiInterruptDispatchNoLockNoEtw.c)
 * Callees:
 *     KiCallInterruptServiceRoutine @ 0x14000BE60 (KiCallInterruptServiceRoutine.c)
 *     KiEntropyQueueDpc @ 0x1400A8F04 (KiEntropyQueueDpc.c)
 *     KiEndThreadAccountingPeriod @ 0x1400D05F0 (KiEndThreadAccountingPeriod.c)
 */

char __fastcall KiInterruptSubDispatchNoLockNoEtw()
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
  char result; // al

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
  result = KiCallInterruptServiceRoutine(v1, 0);
  _disable();
  return result;
}
