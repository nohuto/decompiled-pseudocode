/*
 * XREFs of CmpFindSubKeyByNumber @ 0x1404C7350
 * Callers:
 *     CmpFindSubKeyByNumberEx @ 0x1404C6BB0 (CmpFindSubKeyByNumberEx.c)
 *     CmpCopySyncTree2 @ 0x1405850E0 (CmpCopySyncTree2.c)
 *     CmpClearKeyAccessBits @ 0x14058ECA8 (CmpClearKeyAccessBits.c)
 *     CmpDoAccessCheckOnSubtree @ 0x140659598 (CmpDoAccessCheckOnSubtree.c)
 *     CmpUpdateParentForEachSon @ 0x14065B4C4 (CmpUpdateParentForEachSon.c)
 *     CmpPreserveSystemHiveData @ 0x140660170 (CmpPreserveSystemHiveData.c)
 *     CmpSyncSubKeysAfterDelete @ 0x140660848 (CmpSyncSubKeysAfterDelete.c)
 *     CmpDeleteTree @ 0x14066483C (CmpDeleteTree.c)
 *     CmpFindDrivers @ 0x1407BB424 (CmpFindDrivers.c)
 *     CmSelectQualifiedInstallLanguage @ 0x1407BB6E8 (CmSelectQualifiedInstallLanguage.c)
 * Callees:
 *     CmpDoFindSubKeyByNumber @ 0x1404C2B50 (CmpDoFindSubKeyByNumber.c)
 */

__int64 __fastcall CmpFindSubKeyByNumber(__int64 a1, _DWORD *a2, unsigned int a3, _DWORD *a4)
{
  unsigned int v4; // eax
  unsigned int v6; // esi
  _WORD *v8; // rdi
  int v10; // [rsp+40h] [rbp+18h] BYREF

  v4 = a2[5];
  v10 = -1;
  v6 = a3;
  *a4 = -1;
  if ( a3 >= v4 )
  {
    if ( *(_DWORD *)(a1 + 192) <= 1u )
      return 0LL;
    v6 = a3 - v4;
    if ( a3 - v4 >= a2[6] )
      return 0LL;
    v8 = (_WORD *)(*(__int64 (__fastcall **)(__int64, _QWORD, int *))(a1 + 8))(a1, (unsigned int)a2[8], &v10);
    if ( v8 )
    {
LABEL_3:
      *a4 = CmpDoFindSubKeyByNumber(a1, v8, v6);
      (*(void (__fastcall **)(__int64, int *))(a1 + 16))(a1, &v10);
      return 0LL;
    }
    return 3221225626LL;
  }
  else
  {
    v8 = (_WORD *)(*(__int64 (__fastcall **)(__int64, _QWORD, int *))(a1 + 8))(a1, (unsigned int)a2[7], &v10);
    if ( v8 )
      goto LABEL_3;
    return 3221225626LL;
  }
}
