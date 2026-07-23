/*
 * XREFs of CmpDeleteHive @ 0x14010C288
 * Callers:
 *     CmpDereferenceHive @ 0x1403FB910 (CmpDereferenceHive.c)
 *     CmpUnlockHashEntry @ 0x140436D90 (CmpUnlockHashEntry.c)
 *     CmpDoParseKey @ 0x140452BE0 (CmpDoParseKey.c)
 * Callees:
 *     ExDeleteResourceLite @ 0x14010C7A0 (ExDeleteResourceLite.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     CmpUnlockHiveList @ 0x1405183C8 (CmpUnlockHiveList.c)
 *     CmpLockHiveListExclusive @ 0x1405193C8 (CmpLockHiveListExclusive.c)
 *     HvFreeDirtyData @ 0x14051A35C (HvFreeDirtyData.c)
 *     CmpDeleteKcbCache @ 0x14051A3AC (CmpDeleteKcbCache.c)
 */

__int64 __fastcall CmpDeleteHive(__int64 a1)
{
  _QWORD *v1; // rdi
  __int64 v3; // rcx
  _QWORD *v4; // rax
  void *v5; // rcx
  void *v6; // rcx
  void *v7; // rcx

  v1 = (_QWORD *)(a1 + 2728);
  if ( (_QWORD *)*v1 != v1 )
  {
    CmpLockHiveListExclusive();
    v3 = *v1;
    v4 = (_QWORD *)v1[1];
    if ( *(_QWORD **)(*v1 + 8LL) != v1 || (_QWORD *)*v4 != v1 )
      __fastfail(3u);
    *v4 = v3;
    *(_QWORD *)(v3 + 8) = v4;
    CmpUnlockHiveList();
  }
  *(_DWORD *)a1 = -1160724768;
  HvFreeDirtyData(a1);
  CmpDeleteKcbCache(a1);
  ExDeleteResourceLite(*(PERESOURCE *)(a1 + 2848));
  v5 = *(void **)(a1 + 2832);
  if ( v5 )
    ExFreePoolWithTag(v5, 0);
  v6 = *(void **)(a1 + 3016);
  if ( v6 )
    ExFreePoolWithTag(v6, 0x624E4D43u);
  v7 = *(void **)(a1 + 3032);
  if ( v7 )
    ExFreePoolWithTag(v7, 0);
  return CmpFree(a1, 6056LL);
}
