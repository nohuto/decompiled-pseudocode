/*
 * XREFs of ?Write@SRWLock@XWinRT@@QEAA?AV?$LockHolder@VSRWLock@XWinRT@@UAcquireWrite@detail@2@@detail@2@XZ @ 0x180048A0C
 * Callers:
 *     ?Force@?$NaiveSplitView@PEAUHSTRING__@@PEAVTargetedContentValue@TargetedContent@ContentManagement@@U?$DefaultEqualityPredicate@PEAUHSTRING__@@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@6789@U?$DefaultLifetimeTraits@PEAVTargetedContentValue@TargetedContent@ContentManagement@@@6789@U?$HashMapOptions@PEAUHSTRING__@@PEAVTargetedContentValue@TargetedContent@ContentManagement@@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@Internal@Collections@Foundation@Windows@@$0A@$00$0A@@6789@@Internal@Collections@Foundation@Windows@@AEAAJXZ @ 0x180051220 (-Force@-$NaiveSplitView@PEAUHSTRING__@@PEAVTargetedContentValue@TargetedContent@ContentManagemen.c)
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
