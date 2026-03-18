/*
 * XREFs of ?BTreeIteratorAttachEx@?$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@@@SAPEAUNODE@?$B_TREE_HEADER@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@?$ST_STORE@USM_TRAITS@@@@@@PEAUITERATOR@1@PEAU1@@Z @ 0x140251048
 * Callers:
 *     ?StDmEtwPageRundown@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@@Z @ 0x14025458C (-StDmEtwPageRundown@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@@Z.c)
 * Callees:
 *     ?NpLeafRefInternal@NP_CONTEXT@@SAPEAXPEAUNP_CTX@1@PEAPEAXK@Z @ 0x1402514A8 (-NpLeafRefInternal@NP_CONTEXT@@SAPEAXPEAUNP_CTX@1@PEAPEAXK@Z.c)
 */

__int64 __fastcall B_TREE<_SM_PAGE_KEY,ST_STORE<SM_TRAITS>::_ST_PAGE_ENTRY,4096,NP_CONTEXT>::BTreeIteratorAttachEx(
        _QWORD *a1,
        _QWORD *a2)
{
  void *v2; // r8
  struct NP_CONTEXT::NP_CTX *v4; // rdi

  v2 = (void *)*a2;
  *a1 = 0LL;
  a1[1] = 0LL;
  if ( v2 )
  {
    if ( *((_BYTE *)v2 + 3) )
    {
LABEL_10:
      *a1 = v2;
      a1[1] = v2;
      return (__int64)v2;
    }
    v4 = (struct NP_CONTEXT::NP_CTX *)(a2 + 2);
    while ( 1 )
    {
      if ( **(_DWORD **)v4 == -1 || *((_BYTE *)v2 + 2) != 2 )
      {
        v2 = (void *)*((_QWORD *)v2 + 1);
      }
      else
      {
        v2 = NP_CONTEXT::NpLeafRefInternal(v4, (void **)v2 + 1, 2u);
        if ( !v2 )
          return -1LL;
      }
      if ( *((_BYTE *)v2 + 3) )
        goto LABEL_10;
    }
  }
  return (__int64)v2;
}
