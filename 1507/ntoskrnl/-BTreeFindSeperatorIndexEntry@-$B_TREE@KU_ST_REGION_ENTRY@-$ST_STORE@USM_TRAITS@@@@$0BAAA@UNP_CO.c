/*
 * XREFs of ?BTreeFindSeperatorIndexEntry@?$B_TREE@KU_ST_REGION_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@@@SAKPEAUSEARCH_RESULT@1@KPEAUPATH_ENTRY@1@@Z @ 0x14013A9AC
 * Callers:
 *     ?BTreeDeleteEx@?$B_TREE@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@?$SMKM_STORE_MGR@USM_TRAITS@@@@$0BAAA@UB_TREE_DUMMY_NODE_POOL@@@@SAJPEAU1@PEAUSEARCH_RESULT@1@@Z @ 0x14013CFB0 (-BTreeDeleteEx@-$B_TREE@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@-$SMKM_STORE_MGR@USM_TRAITS@@@@$0BAA.c)
 *     ?BTreeDeleteEx@?$B_TREE@KU_ST_REGION_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@@@SAJPEAU1@PEAUSEARCH_RESULT@1@@Z @ 0x140142BCC (-BTreeDeleteEx@-$B_TREE@KU_ST_REGION_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@@@SAJPEA.c)
 *     ?BTreeChangeKey@?$B_TREE@KU_ST_REGION_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@@@SAKPEAU1@PEAUSEARCH_RESULT@1@K@Z @ 0x14014339C (-BTreeChangeKey@-$B_TREE@KU_ST_REGION_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@@@SAKPE.c)
 *     ?BTreeFindLeafSiblingEx@?$B_TREE@KU_ST_REGION_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@@@SAPEAUNODE@?$B_TREE_HEADER@KU_ST_REGION_ENTRY@?$ST_STORE@USM_TRAITS@@@@@@PEAU1@PEAUSEARCH_RESULT@1@K@Z @ 0x140250F30 (-BTreeFindLeafSiblingEx@-$B_TREE@KU_ST_REGION_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall B_TREE<unsigned long,ST_STORE<SM_TRAITS>::_ST_REGION_ENTRY,4096,NP_CONTEXT>::BTreeFindSeperatorIndexEntry(
        __int64 a1,
        int a2,
        __int64 a3)
{
  unsigned __int64 i; // r9

  for ( i = *(_QWORD *)a1 + 16 * (*(unsigned int *)(a1 + 24) - 2LL); i >= *(_QWORD *)a1; i -= 16LL )
  {
    if ( a2 )
    {
      if ( *(_QWORD *)(i + 8) < *(_QWORD *)i + 16 * ((unsigned __int64)(unsigned __int16)**(_DWORD **)i + 1) )
      {
        *(_OWORD *)a3 = *(_OWORD *)i;
        return 1LL;
      }
    }
    else if ( *(_QWORD *)(i + 8) > (unsigned __int64)(*(_QWORD *)i + 16LL) )
    {
      *(_QWORD *)a3 = *(_QWORD *)i;
      *(_QWORD *)(a3 + 8) = *(_QWORD *)(i + 8) - 16LL;
      return 1LL;
    }
  }
  return 0LL;
}
