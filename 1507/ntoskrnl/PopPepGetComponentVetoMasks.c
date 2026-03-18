/*
 * XREFs of PopPepGetComponentVetoMasks @ 0x14023B47C
 * Callers:
 *     PopFxTraceDeviceRegistration @ 0x1405AC94C (PopFxTraceDeviceRegistration.c)
 * Callees:
 *     ExpWaitForSpinLockSharedAndAcquire @ 0x140033D90 (ExpWaitForSpinLockSharedAndAcquire.c)
 *     ExpAcquireSpinLockSharedAtDpcLevelInstrumented @ 0x140264154 (ExpAcquireSpinLockSharedAtDpcLevelInstrumented.c)
 *     ExpReleaseSpinLockSharedFromDpcLevelInstrumented @ 0x140264230 (ExpReleaseSpinLockSharedFromDpcLevelInstrumented.c)
 */

char __fastcall PopPepGetComponentVetoMasks(__int64 a1, unsigned int a2, __int64 a3)
{
  __int64 v3; // rbx
  __int64 v4; // rbp
  _DWORD *v6; // rdi
  unsigned __int8 CurrentIrql; // r15
  signed __int32 v9; // ett
  bool v10; // r14
  void *retaddr; // [rsp+38h] [rbp+0h]

  v3 = 0LL;
  v4 = 200LL * a2;
  v6 = (_DWORD *)(a1 + 64);
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    ExpAcquireSpinLockSharedAtDpcLevelInstrumented(v6);
  }
  else
  {
    _m_prefetchw(v6);
    v9 = *v6 & 0x7FFFFFFF;
    if ( v9 != _InterlockedCompareExchange(v6, v9 + 1, v9) )
      ExpWaitForSpinLockSharedAndAcquire(v6);
  }
  v10 = *(_DWORD *)(a1 + 160) == 2;
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
  {
    ExpReleaseSpinLockSharedFromDpcLevelInstrumented(v6, retaddr);
  }
  else
  {
    _InterlockedAnd(v6, 0xBFFFFFFF);
    _InterlockedDecrement(v6);
  }
  __writecr8(CurrentIrql);
  if ( v10 )
  {
    if ( *(_DWORD *)(a1 + v4 + 364) )
    {
      do
      {
        *(_DWORD *)(a3 + 4 * v3) = *(_DWORD *)(*(_QWORD *)(a1 + v4 + 368) + 24 * v3 + 16);
        v3 = (unsigned int)(v3 + 1);
      }
      while ( (unsigned int)v3 < *(_DWORD *)(a1 + v4 + 364) );
    }
    LOBYTE(v3) = 1;
  }
  return v3;
}
