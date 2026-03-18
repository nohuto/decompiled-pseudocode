/*
 * XREFs of PopPepGetDeviceVetoMasks @ 0x14023B684
 * Callers:
 *     PopFxTraceDeviceRegistration @ 0x1405AC94C (PopFxTraceDeviceRegistration.c)
 * Callees:
 *     ExpWaitForSpinLockSharedAndAcquire @ 0x140033D90 (ExpWaitForSpinLockSharedAndAcquire.c)
 *     ExpAcquireSpinLockSharedAtDpcLevelInstrumented @ 0x140264154 (ExpAcquireSpinLockSharedAtDpcLevelInstrumented.c)
 *     ExpReleaseSpinLockSharedFromDpcLevelInstrumented @ 0x140264230 (ExpReleaseSpinLockSharedFromDpcLevelInstrumented.c)
 */

char __fastcall PopPepGetDeviceVetoMasks(__int64 a1, __int64 a2)
{
  _DWORD *v3; // rbx
  char v5; // di
  unsigned __int8 CurrentIrql; // r15
  signed __int32 v7; // ett
  bool v8; // r14
  void *retaddr; // [rsp+38h] [rbp+0h]

  v3 = (_DWORD *)(a1 + 64);
  v5 = 0;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    ExpAcquireSpinLockSharedAtDpcLevelInstrumented(a1 + 64);
  }
  else
  {
    _m_prefetchw(v3);
    v7 = *v3 & 0x7FFFFFFF;
    if ( v7 != _InterlockedCompareExchange(v3, v7 + 1, v7) )
      ExpWaitForSpinLockSharedAndAcquire(v3);
  }
  v8 = *(_DWORD *)(a1 + 160) == 2;
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
  {
    ExpReleaseSpinLockSharedFromDpcLevelInstrumented(v3, retaddr);
  }
  else
  {
    _InterlockedAnd(v3, 0xBFFFFFFF);
    _InterlockedDecrement(v3);
  }
  __writecr8(CurrentIrql);
  if ( v8 )
  {
    v5 = 1;
    *(_QWORD *)a2 = *(_QWORD *)(a1 + 144);
    *(_DWORD *)(a2 + 8) = *(_DWORD *)(a1 + 152);
  }
  return v5;
}
