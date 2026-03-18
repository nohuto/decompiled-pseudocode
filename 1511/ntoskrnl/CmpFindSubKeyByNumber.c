/*
 * XREFs of CmpFindSubKeyByNumber @ 0x140523D14
 * Callers:
 *     CmpClearKeyAccessBits @ 0x1403B5728 (CmpClearKeyAccessBits.c)
 *     CmpSyncSubKeysAfterDelete @ 0x14050EF5C (CmpSyncSubKeysAfterDelete.c)
 *     CmpCopySyncTree2 @ 0x14050F068 (CmpCopySyncTree2.c)
 *     CmpDeleteTree @ 0x14050FC98 (CmpDeleteTree.c)
 *     CmpDoAccessCheckOnSubtree @ 0x1405E30DC (CmpDoAccessCheckOnSubtree.c)
 *     CmpUpdateParentForEachSon @ 0x1405E457C (CmpUpdateParentForEachSon.c)
 *     CmpPreserveSystemHiveData @ 0x1405E8C58 (CmpPreserveSystemHiveData.c)
 *     CmSelectQualifiedInstallLanguage @ 0x14075424C (CmSelectQualifiedInstallLanguage.c)
 *     CmpFindDrivers @ 0x140754D08 (CmpFindDrivers.c)
 * Callees:
 *     CmpDoFindSubKeyByNumber @ 0x1403FD290 (CmpDoFindSubKeyByNumber.c)
 */

__int64 __fastcall CmpFindSubKeyByNumber(__int64 a1, _DWORD *a2, unsigned int a3, _DWORD *a4)
{
  _WORD *v4; // rsi
  unsigned int v6; // ebx
  unsigned int v7; // eax
  __int64 v9; // rdx
  _WORD *v10; // rax
  unsigned int v11; // ebx
  int v13; // [rsp+40h] [rbp+18h] BYREF

  v4 = 0LL;
  v13 = -1;
  *a4 = -1;
  v6 = a3;
  v7 = a2[5];
  if ( a3 < v7 )
  {
    v9 = (unsigned int)a2[7];
LABEL_3:
    v10 = (_WORD *)(*(__int64 (__fastcall **)(__int64, __int64, int *))(a1 + 8))(a1, v9, &v13);
    v4 = v10;
    if ( !v10 )
      return (unsigned int)-1073741670;
    *a4 = CmpDoFindSubKeyByNumber(a1, v10, v6);
    goto LABEL_5;
  }
  if ( *(_DWORD *)(a1 + 192) > 1u )
  {
    v6 = a3 - v7;
    if ( a3 - v7 >= a2[6] )
      return 0;
    v9 = (unsigned int)a2[8];
    goto LABEL_3;
  }
LABEL_5:
  v11 = 0;
  if ( v4 )
    (*(void (__fastcall **)(__int64, int *))(a1 + 16))(a1, &v13);
  return v11;
}
