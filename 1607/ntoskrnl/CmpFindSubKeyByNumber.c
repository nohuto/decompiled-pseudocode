/*
 * XREFs of CmpFindSubKeyByNumber @ 0x140437590
 * Callers:
 *     CmDeleteLayeredKey @ 0x1401B5C94 (CmDeleteLayeredKey.c)
 *     CmpFindSubKeyByNumberEx @ 0x140437BB0 (CmpFindSubKeyByNumberEx.c)
 *     CmpEnumerateLayeredKey @ 0x1405FEDD8 (CmpEnumerateLayeredKey.c)
 *     CmpDoAccessCheckOnSubtree @ 0x140602518 (CmpDoAccessCheckOnSubtree.c)
 *     CmpClearKeyAccessBits @ 0x140603828 (CmpClearKeyAccessBits.c)
 *     CmpCopySyncTree2 @ 0x1406082F4 (CmpCopySyncTree2.c)
 *     CmpPreserveSystemHiveData @ 0x140609204 (CmpPreserveSystemHiveData.c)
 *     CmpSyncSubKeysAfterDelete @ 0x140609D10 (CmpSyncSubKeysAfterDelete.c)
 *     CmpMarkAllChildrenDirty @ 0x14060A914 (CmpMarkAllChildrenDirty.c)
 *     CmpUpdateParentForEachSon @ 0x14060B310 (CmpUpdateParentForEachSon.c)
 *     CmpDeleteTree @ 0x14060E29C (CmpDeleteTree.c)
 *     CmpFindDrivers @ 0x1407B03C8 (CmpFindDrivers.c)
 *     CmSelectQualifiedInstallLanguage @ 0x1407B06B0 (CmSelectQualifiedInstallLanguage.c)
 * Callees:
 *     CmpDoFindSubKeyByNumber @ 0x1404373E0 (CmpDoFindSubKeyByNumber.c)
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
