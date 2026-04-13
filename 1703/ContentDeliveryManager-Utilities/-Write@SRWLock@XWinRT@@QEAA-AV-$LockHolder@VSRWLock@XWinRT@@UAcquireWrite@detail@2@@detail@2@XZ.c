/*
 * XREFs of ?Write@SRWLock@XWinRT@@QEAA?AV?$LockHolder@VSRWLock@XWinRT@@UAcquireWrite@detail@2@@detail@2@XZ @ 0x180054EBC
 * Callers:
 *     ?Force@?$NaiveSplitView@W4WindowPosition@ContentManagement@@IU?$DefaultEqualityPredicate@W4WindowPosition@ContentManagement@@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@W4WindowPosition@ContentManagement@@@4567@U?$DefaultLifetimeTraits@I@4567@U?$HashMapOptions@W4WindowPosition@ContentManagement@@IU?$DefaultLifetimeTraits@W4WindowPosition@ContentManagement@@@Internal@Collections@Foundation@Windows@@$0A@$00$0A@@4567@@Internal@Collections@Foundation@Windows@@AEAAJXZ @ 0x18005EABC (-Force@-$NaiveSplitView@W4WindowPosition@ContentManagement@@IU-$DefaultEqualityPredicate@W4Windo.c)
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
