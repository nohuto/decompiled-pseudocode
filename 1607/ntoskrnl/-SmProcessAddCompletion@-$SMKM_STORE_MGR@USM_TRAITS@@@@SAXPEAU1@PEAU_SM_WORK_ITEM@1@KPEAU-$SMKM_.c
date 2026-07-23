/*
 * XREFs of ?SmProcessAddCompletion@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAU_SM_WORK_ITEM@1@KPEAU?$SMKM_STORE@USM_TRAITS@@@@J@Z @ 0x14011B4AC
 * Callers:
 *     ?SmIoCtxWorkItemComplete@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAKPEAU_ST_WORK_ITEM_HDR@@PEAU1@PEAU?$SMKM_STORE@USM_TRAITS@@@@J@Z @ 0x14011B110 (-SmIoCtxWorkItemComplete@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAKPEAU_ST_WORK_ITEM_HDR@@PEAU1@PEAU-$SM.c)
 * Callees:
 *     ?SmFeAddComplete@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAT_SM_PAGE_KEY@@KKK@Z @ 0x14011B544 (-SmFeAddComplete@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAT_SM_PAGE_KEY@@KKK@Z.c)
 */

_UNKNOWN **__fastcall SMKM_STORE_MGR<SM_TRAITS>::SmProcessAddCompletion(int a1, __int64 a2, int a3, _DWORD *a4, int a5)
{
  _UNKNOWN **result; // rax
  unsigned int v6; // edi
  __int64 v8; // r8
  int v9; // esi
  int v10; // ebx
  int v12; // edx
  int v13; // edi
  _UNKNOWN *retaddr; // [rsp+38h] [rbp+0h] BYREF

  result = &retaddr;
  v6 = *(_DWORD *)(a2 + 8);
  v8 = *(_QWORD *)(a2 + 32);
  v9 = 0;
  v10 = *(_DWORD *)(a2 + 24);
  v12 = a5;
  v13 = (v6 >> 3) & 0x7FFFFFF;
  *(_DWORD *)v8 = a5;
  if ( v12 >= 0 && (*a4 & 0x100) != 0 )
    *(_QWORD *)(v8 + 8) |= 1uLL;
  if ( v13 )
  {
    a5 = v10;
    result = (_UNKNOWN **)SMKM_STORE_MGR<SM_TRAITS>::SmFeAddComplete(a1, (unsigned int)&a5, v13, (_DWORD)a4, v12 >= 0);
    v12 = -1073741823;
  }
  if ( v13 != a3 )
  {
    a5 = v13 + v10;
    LOBYTE(v9) = v12 >= 0;
    return (_UNKNOWN **)SMKM_STORE_MGR<SM_TRAITS>::SmFeAddComplete(a1, (unsigned int)&a5, a3 - v13, (_DWORD)a4, v9);
  }
  return result;
}
