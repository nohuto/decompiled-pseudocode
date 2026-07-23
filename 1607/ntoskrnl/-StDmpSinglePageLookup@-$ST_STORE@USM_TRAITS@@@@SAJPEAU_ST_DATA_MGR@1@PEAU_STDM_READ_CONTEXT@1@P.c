/*
 * XREFs of ?StDmpSinglePageLookup@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_STDM_READ_CONTEXT@1@PEAU_ST_IO_PARAMS@1@PEAPEAU_ST_PAGE_RECORD@1@@Z @ 0x14011CFD8
 * Callers:
 *     ?StDmpSinglePageRetrieve@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_STDM_READ_CONTEXT@1@PEAU_ST_IO_PARAMS@1@PEAXPEAU_ST_PAGE_LOCATION@1@@Z @ 0x14011D340 (-StDmpSinglePageRetrieve@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_STDM_READ_CONTEXT@1.c)
 * Callees:
 *     ?BTreeSearchResultDeref@?$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@U?$B_TREE_KEY_COMPARATOR@T_SM_PAGE_KEY@@@@@@SAXPEAU1@PEAUSEARCH_RESULT@1@@Z @ 0x1400045D8 (-BTreeSearchResultDeref@-$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@.c)
 *     ?BTreeSearchKey@?$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@U?$B_TREE_KEY_COMPARATOR@T_SM_PAGE_KEY@@@@@@SAJPEAU1@T_SM_PAGE_KEY@@PEAUSEARCH_RESULT@1@@Z @ 0x14011B91C (-BTreeSearchKey@-$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONT.c)
 *     SmHpIdGetChunk @ 0x14011C410 (SmHpIdGetChunk.c)
 *     ?BTreeFindNextEntry@?$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@U?$B_TREE_KEY_COMPARATOR@T_SM_PAGE_KEY@@@@@@SAPEAU_ST_PAGE_ENTRY@?$ST_STORE@USM_TRAITS@@@@PEAU1@PEAUSEARCH_RESULT@1@@Z @ 0x14011D800 (-BTreeFindNextEntry@-$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_.c)
 */

__int64 __fastcall ST_STORE<SM_TRAITS>::StDmpSinglePageLookup(__int64 a1, __int64 a2, _DWORD *a3, __int64 *a4)
{
  __int64 v5; // rbx
  _DWORD *NextEntry; // rax
  _DWORD *v10; // rdx
  __int64 result; // rax
  int v12; // eax
  __int64 v13; // rax

  v5 = *(_QWORD *)(a2 + 24);
  if ( (unsigned __int8)*a3 && *(_DWORD *)(a2 + 40) == *(_DWORD *)(*(_QWORD *)(a1 + 800) + 5876LL) )
  {
    NextEntry = (_DWORD *)B_TREE<_SM_PAGE_KEY,ST_STORE<SM_TRAITS>::_ST_PAGE_ENTRY,4096,NP_CONTEXT,B_TREE_KEY_COMPARATOR<_SM_PAGE_KEY>>::BTreeFindNextEntry(
                            a1,
                            *(_QWORD *)(a2 + 24));
    v10 = NextEntry;
    if ( NextEntry == (_DWORD *)-1LL )
      return 3221225478LL;
    if ( !NextEntry || *NextEntry != a3[4] )
      return 3221226021LL;
    goto LABEL_14;
  }
  if ( (*(_BYTE *)(v5 + 32) & 1) == 0 )
    B_TREE<_SM_PAGE_KEY,ST_STORE<SM_TRAITS>::_ST_PAGE_ENTRY,4096,NP_CONTEXT,B_TREE_KEY_COMPARATOR<_SM_PAGE_KEY>>::BTreeSearchResultDeref(
      (__int64 *)a1,
      *(_QWORD *)(a2 + 24));
  *(_DWORD *)(v5 + 32) |= 1u;
  result = B_TREE<_SM_PAGE_KEY,ST_STORE<SM_TRAITS>::_ST_PAGE_ENTRY,4096,NP_CONTEXT,B_TREE_KEY_COMPARATOR<_SM_PAGE_KEY>>::BTreeSearchKey(
             (char **)a1,
             a3[4],
             v5);
  if ( (int)result >= 0 )
  {
    *(_DWORD *)(a2 + 40) = *(_DWORD *)(*(_QWORD *)(a1 + 800) + 5876LL);
    v12 = *(_DWORD *)(v5 + 24);
    if ( v12 == -1 || !v12 )
      v13 = v5 + 8;
    else
      v13 = *(_QWORD *)v5 + 16LL * (unsigned int)(v12 - 1);
    v10 = *(_DWORD **)(v13 + 8);
LABEL_14:
    *a4 = SmHpIdGetChunk((_DWORD *)(a1 + 192), v10[1]);
    return 0LL;
  }
  return result;
}
