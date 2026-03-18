/*
 * XREFs of CmpFindSubKeyByNumber @ 0x1404386C0
 * Callers:
 *     CmDeleteLayeredKey @ 0x1401B5DB0 (CmDeleteLayeredKey.c)
 *     CmpFindSubKeyByNumberEx @ 0x140438CE0 (CmpFindSubKeyByNumberEx.c)
 *     CmpEnumerateLayeredKey @ 0x1405FED24 (CmpEnumerateLayeredKey.c)
 *     CmpDoAccessCheckOnSubtree @ 0x140602464 (CmpDoAccessCheckOnSubtree.c)
 *     CmpClearKeyAccessBits @ 0x140603774 (CmpClearKeyAccessBits.c)
 *     CmpCopySyncTree2 @ 0x140608240 (CmpCopySyncTree2.c)
 *     CmpPreserveSystemHiveData @ 0x140609150 (CmpPreserveSystemHiveData.c)
 *     CmpSyncSubKeysAfterDelete @ 0x140609C5C (CmpSyncSubKeysAfterDelete.c)
 *     CmpMarkAllChildrenDirty @ 0x14060A860 (CmpMarkAllChildrenDirty.c)
 *     CmpUpdateParentForEachSon @ 0x14060B25C (CmpUpdateParentForEachSon.c)
 *     CmpDeleteTree @ 0x14060E1E8 (CmpDeleteTree.c)
 *     CmpFindDrivers @ 0x1407B03C8 (CmpFindDrivers.c)
 *     CmSelectQualifiedInstallLanguage @ 0x1407B06B0 (CmSelectQualifiedInstallLanguage.c)
 * Callees:
 *     CmpDoFindSubKeyByNumber @ 0x140438510 (CmpDoFindSubKeyByNumber.c)
 */

__int64 __fastcall CmpFindSubKeyByNumber(__int64 a1, _DWORD *a2, unsigned int a3, _DWORD *a4)
{
  unsigned int v4; // eax
  unsigned int v6; // esi
  __int64 v8; // rdx
  _WORD *v9; // rax
  int v11; // [rsp+48h] [rbp+10h] BYREF
  int v12; // [rsp+4Ch] [rbp+14h]

  v4 = a2[5];
  v11 = -1;
  v12 = 0;
  v6 = a3;
  *a4 = -1;
  if ( a3 >= v4 )
  {
    if ( *(_DWORD *)(a1 + 192) <= 1u )
      return 0LL;
    v6 = a3 - v4;
    if ( a3 - v4 >= a2[6] )
      return 0LL;
    v8 = (unsigned int)a2[8];
  }
  else
  {
    v8 = (unsigned int)a2[7];
  }
  v9 = (_WORD *)(*(__int64 (__fastcall **)(__int64, __int64, int *))(a1 + 8))(a1, v8, &v11);
  if ( v9 )
  {
    *a4 = CmpDoFindSubKeyByNumber(a1, v9, v6);
    (*(void (__fastcall **)(__int64, int *))(a1 + 16))(a1, &v11);
    return 0LL;
  }
  return 3221225626LL;
}
