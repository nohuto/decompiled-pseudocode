/*
 * XREFs of ?SmProcessReadCompletion@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAU_SM_WORK_ITEM@1@KPEAU?$SMKM_STORE@USM_TRAITS@@@@J@Z @ 0x1401103E0
 * Callers:
 *     ?SmIoCtxWorkItemComplete@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAKPEAU_ST_WORK_ITEM_HDR@@PEAU1@PEAU?$SMKM_STORE@USM_TRAITS@@@@J@Z @ 0x14010D2C0 (-SmIoCtxWorkItemComplete@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAKPEAU_ST_WORK_ITEM_HDR@@PEAU1@PEAU-$SM.c)
 * Callees:
 *     ?SmStStatsUpdate@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@PEAU_ST_WORK_ITEM@?$ST_STORE@USM_TRAITS@@@@J@Z @ 0x14020A28C (-SmStStatsUpdate@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@PEAU_ST_WORK_ITEM@-$ST_STORE@USM_TRAITS@@@@.c)
 */

char __fastcall SMKM_STORE_MGR<SM_TRAITS>::SmProcessReadCompletion(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        unsigned int a5)
{
  int v5; // eax
  __int64 v7; // rdi
  unsigned int v8; // ebx
  int v9; // esi

  v5 = *(_DWORD *)(a2 + 8);
  v7 = *(_QWORD *)(a2 + 32);
  v8 = a5;
  v9 = (unsigned __int8)v5;
  if ( *(_BYTE *)(a4 + 4484) )
    LOBYTE(v5) = SMKM_STORE<SM_TRAITS>::SmStStatsUpdate(a4, a2, a5);
  if ( v9 )
  {
    *(_WORD *)(v7 + 8) = v9;
    LOBYTE(v5) = *(_BYTE *)(a1 + 10112) & 8;
    if ( (_BYTE)v5 )
      v8 = 0;
  }
  *(_DWORD *)v7 = v8;
  return v5;
}
