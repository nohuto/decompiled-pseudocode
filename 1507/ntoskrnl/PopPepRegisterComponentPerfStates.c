/*
 * XREFs of PopPepRegisterComponentPerfStates @ 0x14023C334
 * Callers:
 *     PopFxRegisterComponentPerfStates @ 0x1406B43E8 (PopFxRegisterComponentPerfStates.c)
 * Callees:
 *     ExpWaitForSpinLockSharedAndAcquire @ 0x140033D90 (ExpWaitForSpinLockSharedAndAcquire.c)
 *     ExpAcquireSpinLockSharedAtDpcLevelInstrumented @ 0x140264154 (ExpAcquireSpinLockSharedAtDpcLevelInstrumented.c)
 *     ExpReleaseSpinLockSharedFromDpcLevelInstrumented @ 0x140264230 (ExpReleaseSpinLockSharedFromDpcLevelInstrumented.c)
 */

__int64 __fastcall PopPepRegisterComponentPerfStates(__int64 a1, unsigned int a2, __int64 a3)
{
  _DWORD *v3; // rbx
  __int64 v4; // rbp
  unsigned __int8 CurrentIrql; // r14
  signed __int32 v8; // ett
  __int64 result; // rax
  void *retaddr; // [rsp+38h] [rbp+0h]

  v3 = (_DWORD *)(a1 + 64);
  v4 = 200LL * a2;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    ExpAcquireSpinLockSharedAtDpcLevelInstrumented(a1 + 64);
  }
  else
  {
    _m_prefetchw(v3);
    v8 = *v3 & 0x7FFFFFFF;
    if ( v8 != _InterlockedCompareExchange(v3, v8 + 1, v8) )
      ExpWaitForSpinLockSharedAndAcquire(v3);
  }
  *(_BYTE *)(a1 + v4 + 360) = 1;
  *(_QWORD *)(a1 + v4 + 200) = a3;
  if ( (a3 & 2) != 0 )
    *(_BYTE *)(a1 + 164) = 1;
  if ( (a3 & 4) != 0 )
    *(_BYTE *)(a1 + 165) = 1;
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
  {
    ExpReleaseSpinLockSharedFromDpcLevelInstrumented(v3, retaddr);
  }
  else
  {
    _InterlockedAnd(v3, 0xBFFFFFFF);
    _InterlockedDecrement(v3);
  }
  result = CurrentIrql;
  __writecr8(CurrentIrql);
  return result;
}
