/*
 * XREFs of ?Write@SRWLock@XWinRT@@QEAA?AV?$LockHolder@VSRWLock@XWinRT@@UAcquireWrite@detail@2@@detail@2@XZ @ 0x18001D084
 * Callers:
 *     ?Force@?$NaiveSplitView@PEAUHSTRING__@@PEAUIInspectable@@U?$DefaultEqualityPredicate@PEAUHSTRING__@@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@4567@U?$DefaultLifetimeTraits@PEAUIInspectable@@@4567@U?$HashMapOptions@PEAUHSTRING__@@PEAUIInspectable@@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@Internal@Collections@Foundation@Windows@@$0A@$00$0A@@4567@@Internal@Collections@Foundation@Windows@@AEAAJXZ @ 0x1800177FC (-Force@-$NaiveSplitView@PEAUHSTRING__@@PEAUIInspectable@@U-$DefaultEqualityPredicate@PEAUHSTRING.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall XWinRT::SRWLock::Write(RTL_SRWLOCK *a1, __int64 a2)
{
  *(_QWORD *)a2 = a1;
  AcquireSRWLockExclusive(a1);
  *(_DWORD *)(a2 + 8) = 0;
  return a2;
}
