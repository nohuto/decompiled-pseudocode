/*
 * XREFs of ?SmProcessAddCompletion@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAU_SM_WORK_ITEM@1@KPEAU?$SMKM_STORE@USM_TRAITS@@@@J@Z @ 0x14010D658
 * Callers:
 *     ?SmIoCtxWorkItemComplete@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAKPEAU_ST_WORK_ITEM_HDR@@PEAU1@PEAU?$SMKM_STORE@USM_TRAITS@@@@J@Z @ 0x14010D2C0 (-SmIoCtxWorkItemComplete@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAKPEAU_ST_WORK_ITEM_HDR@@PEAU1@PEAU-$SM.c)
 * Callees:
 *     ?SmFeAddComplete@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAT_SM_PAGE_KEY@@KKK@Z @ 0x14010D6FC (-SmFeAddComplete@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAT_SM_PAGE_KEY@@KKK@Z.c)
 */

__int64 __fastcall SMKM_STORE_MGR<SM_TRAITS>::SmProcessAddCompletion(int a1, __int64 a2, int a3, _DWORD *a4, int a5)
{
  unsigned int v5; // edi
  __int64 v7; // r8
  int v8; // esi
  int v10; // ebx
  int v11; // r14d
  int v12; // edx
  int v13; // edi
  __int64 result; // rax

  v5 = *(_DWORD *)(a2 + 8);
  v7 = *(_QWORD *)(a2 + 32);
  v8 = 0;
  v10 = *(_DWORD *)(a2 + 24);
  v11 = a4[1120] & 0x1F;
  v12 = a5;
  v13 = (v5 >> 3) & 0x7FFFFFF;
  *(_DWORD *)v7 = a5;
  if ( v12 >= 0 && (*a4 & 0x100) != 0 )
    *(_QWORD *)(v7 + 8) |= 1uLL;
  if ( v13 )
  {
    a5 = v10;
    result = SMKM_STORE_MGR<SM_TRAITS>::SmFeAddComplete(a1, (unsigned int)&a5, v13, v11, v12 >= 0);
    v12 = -1073741823;
  }
  if ( v13 != a3 )
  {
    a5 = v13 + v10;
    LOBYTE(v8) = v12 >= 0;
    return SMKM_STORE_MGR<SM_TRAITS>::SmFeAddComplete(a1, (unsigned int)&a5, a3 - v13, v11, v8);
  }
  return result;
}
