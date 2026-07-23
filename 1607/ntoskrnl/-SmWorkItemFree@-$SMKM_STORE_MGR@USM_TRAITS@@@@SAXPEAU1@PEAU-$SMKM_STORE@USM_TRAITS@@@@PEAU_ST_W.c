/*
 * XREFs of ?SmWorkItemFree@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAU?$SMKM_STORE@USM_TRAITS@@@@PEAU_ST_WORK_ITEM_HDR@@PEAJ@Z @ 0x14011AFE4
 * Callers:
 *     ?SmStWorker@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAX@Z @ 0x1400037A8 (-SmStWorker@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAX@Z.c)
 *     ?SmStDirectReadComplete@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@PEAU_ST_WORK_ITEM@?$ST_STORE@USM_TRAITS@@@@J@Z @ 0x14011E740 (-SmStDirectReadComplete@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@PEAU_ST_WORK_ITEM@-$ST_STORE@USM_TRA.c)
 * Callees:
 *     SmKmStoreDereference @ 0x1400030FC (SmKmStoreDereference.c)
 *     ?SmIoCtxWorkItemComplete@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAKPEAU_ST_WORK_ITEM_HDR@@PEAU1@PEAU?$SMKM_STORE@USM_TRAITS@@@@J@Z @ 0x14011B110 (-SmIoCtxWorkItemComplete@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAKPEAU_ST_WORK_ITEM_HDR@@PEAU1@PEAU-$SM.c)
 *     ?SmWorkItemFreeResource@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAU_SM_WORK_ITEM@1@PEAU_SM_IO_CONTEXT@1@@Z @ 0x14011B2E0 (-SmWorkItemFreeResource@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAU_SM_WORK_ITEM@1@PEAU_SM_IO_C.c)
 *     SmFpFree @ 0x14011B318 (SmFpFree.c)
 *     RtlpInterlockedPushEntrySList @ 0x1401673B0 (RtlpInterlockedPushEntrySList.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 */

void __fastcall SMKM_STORE_MGR<SM_TRAITS>::SmWorkItemFree(__int64 a1, __int64 a2, __int64 a3, unsigned int *a4)
{
  __int64 v4; // rbp
  int v5; // ebx
  int v6; // edi
  int v9; // esi
  __int128 v10; // xmm1
  int v11; // ebx
  void *v12; // rcx
  int v13; // eax
  _OWORD v14[2]; // [rsp+20h] [rbp-48h] BYREF
  __int64 v15; // [rsp+40h] [rbp-28h]

  v4 = *(_QWORD *)(a3 + 32);
  v5 = *(_DWORD *)a3 & 7;
  v6 = 1;
  v9 = 1;
  if ( a4 )
  {
    v10 = *(_OWORD *)(a3 + 16);
    v14[0] = *(_OWORD *)a3;
    v15 = *(_QWORD *)(a3 + 32);
    v14[1] = v10;
  }
  if ( v5 >= 4 )
  {
    if ( v5 == 5 )
    {
      v12 = (void *)a3;
      if ( (*(_DWORD *)(a3 + 8) & 7) != 0 )
      {
        v11 = 0;
        ExFreePoolWithTag((PVOID)a3, 0);
        goto LABEL_7;
      }
    }
    else
    {
      v11 = 0;
      v13 = *(_DWORD *)(a3 + 8) & 7;
      if ( !v13 )
      {
        *(_QWORD *)(a3 + 32) = 0LL;
        goto LABEL_7;
      }
      if ( v13 != 3 )
      {
        if ( (unsigned int)(v13 - 1) <= 1 )
          v9 = 0;
        goto LABEL_7;
      }
      v12 = (void *)a3;
    }
    ExFreePoolWithTag(v12, 0);
LABEL_13:
    SmKmStoreDereference((__int64)&SmGlobals, *(_DWORD *)(a2 + 5856));
    return;
  }
  if ( v5 == 2 && (*(_DWORD *)(a3 + 8) & 0x4000000) != 0 )
  {
    if ( LOWORD(stru_1403BEF20.Alignment) >= 0x1000u )
      ExFreePoolWithTag((PVOID)a3, 0);
    else
      RtlpInterlockedPushEntrySList(&stru_1403BEF20, (PSLIST_ENTRY)a3);
    goto LABEL_6;
  }
  SMKM_STORE_MGR<SM_TRAITS>::SmWorkItemFreeResource(&SmGlobals, a3, v4);
  if ( v5 != 1 )
  {
LABEL_6:
    v11 = 0;
    goto LABEL_7;
  }
  v11 = 1;
LABEL_7:
  if ( a4 )
    v6 = ((__int64 (__fastcall *)(_OWORD *, __int64, __int64, _QWORD))SMKM_STORE_MGR<SM_TRAITS>::SmIoCtxWorkItemComplete)(
           v14,
           a2,
           a2,
           *a4);
  if ( v6 )
  {
    if ( v11 )
      SmFpFree(&dword_1403BEF30, 0LL, v4, v4);
  }
  if ( v9 )
    goto LABEL_13;
}
