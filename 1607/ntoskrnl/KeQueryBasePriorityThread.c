/*
 * XREFs of KeQueryBasePriorityThread @ 0x1400F4760
 * Callers:
 *     NtQueryInformationThread @ 0x1404FCA40 (NtQueryInformationThread.c)
 * Callees:
 *     ExAcquireSpinLockSharedAtDpcLevel @ 0x14001D8E0 (ExAcquireSpinLockSharedAtDpcLevel.c)
 *     KeYieldProcessorEx @ 0x14002E830 (KeYieldProcessorEx.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x1400E8250 (ExReleaseSpinLockSharedFromDpcLevel.c)
 */

__int64 __fastcall KeQueryBasePriorityThread(__int64 a1)
{
  __int64 v2; // rbp
  unsigned __int8 CurrentIrql; // r14
  unsigned int v4; // ebx
  char v5; // al
  int v7; // [rsp+40h] [rbp+8h] BYREF

  v2 = *(_QWORD *)(a1 + 544);
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  ExAcquireSpinLockSharedAtDpcLevel((PEX_SPIN_LOCK)(v2 + 64));
  v7 = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 64), 0LL) )
  {
    do
      KeYieldProcessorEx(&v7);
    while ( *(_QWORD *)(a1 + 64) );
  }
  v4 = *(char *)(a1 + 563) - *(char *)(v2 + 444);
  v5 = *(_BYTE *)(a1 + 645);
  if ( v5 )
    v4 = 16 * v5;
  *(_QWORD *)(a1 + 64) = 0LL;
  ExReleaseSpinLockSharedFromDpcLevel((PEX_SPIN_LOCK)(v2 + 64));
  __writecr8(CurrentIrql);
  return v4;
}
