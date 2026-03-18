/*
 * XREFs of CmpUnJoinClassOfTrust @ 0x1401B47B0
 * Callers:
 *     CmpLoadKeyCommon @ 0x140087994 (CmpLoadKeyCommon.c)
 *     CmpInitializeHive @ 0x14047F184 (CmpInitializeHive.c)
 *     CmLoadKey @ 0x14049C9B4 (CmLoadKey.c)
 *     CmUnloadKey @ 0x14049F858 (CmUnloadKey.c)
 *     CmShutdownSystem @ 0x1405FC64C (CmShutdownSystem.c)
 *     CmReplaceKey @ 0x1405FE0FC (CmReplaceKey.c)
 *     CmpResolveHiveLoadConflict @ 0x1405FF120 (CmpResolveHiveLoadConflict.c)
 *     CmpDestroyTemporaryHive @ 0x14060D2A0 (CmpDestroyTemporaryHive.c)
 * Callees:
 *     CmpUnlockHiveList @ 0x14049FFBC (CmpUnlockHiveList.c)
 *     CmpLockHiveListExclusive @ 0x1404A0FBC (CmpLockHiveListExclusive.c)
 */

void __fastcall CmpUnJoinClassOfTrust(__int64 a1)
{
  _QWORD *v1; // rbx
  __int64 v2; // rcx
  _QWORD *v3; // rax

  v1 = (_QWORD *)(a1 + 5368);
  if ( (_QWORD *)*v1 != v1 )
  {
    CmpLockHiveListExclusive();
    v2 = *v1;
    v3 = (_QWORD *)v1[1];
    if ( *(_QWORD **)(*v1 + 8LL) != v1 || (_QWORD *)*v3 != v1 )
      __fastfail(3u);
    *v3 = v2;
    *(_QWORD *)(v2 + 8) = v3;
    CmpUnlockHiveList();
  }
}
