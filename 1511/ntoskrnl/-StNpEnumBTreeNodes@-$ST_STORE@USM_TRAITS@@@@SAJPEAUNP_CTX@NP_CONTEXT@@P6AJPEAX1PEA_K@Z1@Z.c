/*
 * XREFs of ?StNpEnumBTreeNodes@?$ST_STORE@USM_TRAITS@@@@SAJPEAUNP_CTX@NP_CONTEXT@@P6AJPEAX1PEA_K@Z1@Z @ 0x140206CF0
 * Callers:
 *     <none>
 * Callees:
 *     ?BTreeWalkPostOrderInternal@?$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@@@SAJPEAU1@PEAUNODE@?$B_TREE_HEADER@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@?$ST_STORE@USM_TRAITS@@@@@@PEAU_SINGLE_LIST_ENTRY@@P6AJPEAX3PEA_K@Z3PEAPEAU23@@Z @ 0x140202194 (-BTreeWalkPostOrderInternal@-$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0B.c)
 */

__int64 __fastcall ST_STORE<SM_TRAITS>::StNpEnumBTreeNodes(
        __int64 *a1,
        __int64 (__fastcall *a2)(_QWORD, _QWORD, _QWORD),
        __int64 a3)
{
  __int64 v3; // r9
  __int64 result; // rax
  __int64 v6; // rcx
  _OWORD *v7; // rdx
  _QWORD *v8; // [rsp+40h] [rbp+8h] BYREF
  __int64 v9; // [rsp+58h] [rbp+20h] BYREF

  v3 = *a1;
  result = 0LL;
  v8 = 0LL;
  v9 = 0LL;
  if ( *(_DWORD *)(v3 + 96) )
  {
    v6 = v3 - 848;
    v7 = *(_OWORD **)(v3 - 848);
    if ( !v7 )
      return result;
  }
  else
  {
    v6 = v3 - 776;
    v7 = *(_OWORD **)(v3 - 776);
    if ( !v7 )
      return result;
  }
  return B_TREE<_SM_PAGE_KEY,ST_STORE<SM_TRAITS>::_ST_PAGE_ENTRY,4096,NP_CONTEXT>::BTreeWalkPostOrderInternal(
           v6,
           v7,
           &v8,
           a2,
           a3,
           (__int64)&v9);
}
