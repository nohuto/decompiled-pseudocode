/*
 * XREFs of CmpDeleteHive @ 0x140002C90
 * Callers:
 *     CmpDereferenceHive @ 0x1403DCA48 (CmpDereferenceHive.c)
 *     CmpUnlockHashEntry @ 0x1403FB980 (CmpUnlockHashEntry.c)
 *     CmpParseKey @ 0x1404014E0 (CmpParseKey.c)
 *     CmpKcbCacheLookup @ 0x140407660 (CmpKcbCacheLookup.c)
 *     CmpUnlockHashEntryByIndex @ 0x140499A00 (CmpUnlockHashEntryByIndex.c)
 * Callees:
 *     ExDeleteResourceLite @ 0x14000D800 (ExDeleteResourceLite.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 *     CmpDeleteKcbCache @ 0x1403BA36C (CmpDeleteKcbCache.c)
 *     HvFreeDirtyData @ 0x1403BA3D4 (HvFreeDirtyData.c)
 *     CmpUnlockHiveList @ 0x1403BAB54 (CmpUnlockHiveList.c)
 *     CmpLockHiveListExclusive @ 0x1403BABA4 (CmpLockHiveListExclusive.c)
 */

__int64 __fastcall CmpDeleteHive(__int64 a1)
{
  _QWORD *v1; // rdi
  __int64 v3; // rcx
  _QWORD *v4; // rax
  void *v5; // rcx
  void *v6; // rcx

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
  ExFreePoolWithTag(*(PVOID *)(a1 + 2832), 0);
  v5 = *(void **)(a1 + 3016);
  if ( v5 )
    ExFreePoolWithTag(v5, 0x624E4D43u);
  v6 = *(void **)(a1 + 3032);
  if ( v6 )
    ExFreePoolWithTag(v6, 0);
  return CmpFree(a1, 6056LL);
}
