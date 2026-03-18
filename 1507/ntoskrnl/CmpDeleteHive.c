/*
 * XREFs of CmpDeleteHive @ 0x1400D2458
 * Callers:
 *     CmpDereferenceHive @ 0x140447BD4 (CmpDereferenceHive.c)
 *     CmpKcbCacheLookup @ 0x1404993B0 (CmpKcbCacheLookup.c)
 *     CmpParseKey @ 0x1404BEE10 (CmpParseKey.c)
 *     CmpUnlockHashEntry @ 0x1404C8730 (CmpUnlockHashEntry.c)
 * Callees:
 *     ExDeleteResourceLite @ 0x1400F29E0 (ExDeleteResourceLite.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     HvFreeDirtyData @ 0x14044C574 (HvFreeDirtyData.c)
 *     CmpUnlockHiveList @ 0x1404EA638 (CmpUnlockHiveList.c)
 *     CmpLockHiveListExclusive @ 0x1404EA688 (CmpLockHiveListExclusive.c)
 *     CmpDeleteKcbCache @ 0x1404EAB90 (CmpDeleteKcbCache.c)
 */

__int64 __fastcall CmpDeleteHive(__int64 a1)
{
  _QWORD *v1; // rdi
  __int64 v3; // rcx
  _QWORD *v4; // rax
  void *v5; // rcx

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
  return CmpFree(a1, 6056LL);
}
