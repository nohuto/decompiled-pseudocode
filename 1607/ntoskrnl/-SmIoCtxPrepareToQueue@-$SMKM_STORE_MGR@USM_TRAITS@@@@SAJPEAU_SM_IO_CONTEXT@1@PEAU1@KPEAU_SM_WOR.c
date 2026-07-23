/*
 * XREFs of ?SmIoCtxPrepareToQueue@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU_SM_IO_CONTEXT@1@PEAU1@KPEAU_SM_WORK_ITEM@1@PEAU_SM_QUEUE_CONTEXT@1@@Z @ 0x14011BC50
 * Callers:
 *     ?SmPageWrite@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAT_SM_PAGE_KEY@@T_SM_PAGE_ADD_PARAM@@PEAU_MDL@@PEAXPEAU_IO_STATUS_BLOCK@@K@Z @ 0x14011A2B8 (-SmPageWrite@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAT_SM_PAGE_KEY@@T_SM_PAGE_ADD_PARAM@@PEAU.c)
 *     ?SmIoCtxQueueWork@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU_SM_IO_CONTEXT@1@PEAU1@KPEAX@Z @ 0x14011A664 (-SmIoCtxQueueWork@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU_SM_IO_CONTEXT@1@PEAU1@KPEAX@Z.c)
 * Callees:
 *     ?SmWorkItemFreeResource@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAU_SM_WORK_ITEM@1@PEAU_SM_IO_CONTEXT@1@@Z @ 0x14011B2E0 (-SmWorkItemFreeResource@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAU_SM_WORK_ITEM@1@PEAU_SM_IO_C.c)
 *     SmFpFree @ 0x14011B318 (SmFpFree.c)
 *     SmFpAllocate @ 0x14011BD8C (SmFpAllocate.c)
 */

__int64 __fastcall SMKM_STORE_MGR<SM_TRAITS>::SmIoCtxPrepareToQueue(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned __int64 a4,
        __int64 a5)
{
  unsigned __int64 v5; // rbx
  int v6; // r9d
  unsigned __int64 *v7; // r8
  __int64 v8; // rdi
  int v9; // r9d
  __int64 v10; // rsi
  int v13; // ecx
  BOOL v14; // eax
  __int128 v15; // xmm0
  unsigned int v16; // r14d
  _DWORD *v18; // rdx
  __int128 v19; // [rsp+30h] [rbp-10h] BYREF

  v5 = a4;
  *(_QWORD *)(a4 + 32) = a1;
  v6 = *(_DWORD *)a4;
  v7 = (unsigned __int64 *)&v19;
  v8 = 0LL;
  *((_QWORD *)&v19 + 1) = &v19;
  *(_QWORD *)&v19 = 0LL;
  v9 = v6 & 7;
  v10 = 0LL;
  if ( (v9 & 0xFFFFFFFD) == 0 )
  {
    v13 = *(_DWORD *)(a2 + 1664);
    v10 = *(_QWORD *)(v5 + 16);
    if ( (v13 & 2) != 0 )
    {
      v14 = 0;
      if ( (v13 & 1) != 0 && v9 == 2 )
        v14 = *(_DWORD *)(v10 + 40) <= 0x1000u;
      v8 = SmFpAllocate((PEX_SPIN_LOCK)(a2 + 1376), v14);
      if ( !v8 )
      {
        v16 = -1073741670;
        goto LABEL_18;
      }
      v7 = (unsigned __int64 *)*((_QWORD *)&v19 + 1);
    }
  }
  *(_QWORD *)v5 = *(_DWORD *)v5 & 7 | ((*v7 & 0xFFFFFFFFFFFFFFF8uLL) + 8);
  *v7 = v5 | *(_DWORD *)v7 & 7;
  *((_QWORD *)&v19 + 1) = v5;
  if ( (__int128 *)v5 != &v19 )
  {
    v15 = v19;
    *(_QWORD *)&v19 = 0LL;
    v5 = (unsigned __int64)&v19;
    *((_QWORD *)&v19 + 1) = &v19;
    *(_OWORD *)a5 = v15;
  }
  if ( v8 )
    *(_QWORD *)(a5 + 16) = v10;
  *(_QWORD *)(a5 + 24) = a1;
  v16 = 0;
  while ( (__int128 *)v5 != &v19 )
  {
    v18 = (_DWORD *)v19;
    *(_QWORD *)&v19 = *(_QWORD *)v19 & 0xFFFFFFFFFFFFFFF8uLL;
    if ( v18 == (_DWORD *)v5 )
    {
      *(_QWORD *)&v19 = 0LL;
      *((_QWORD *)&v19 + 1) = &v19;
    }
    else
    {
      *(_QWORD *)v5 = *(_QWORD *)v5 & 7LL | (8LL * (*(_QWORD *)v5 >> 3) - 8);
    }
    SMKM_STORE_MGR<SM_TRAITS>::SmWorkItemFreeResource(a2, v18, a1);
LABEL_18:
    v5 = *((_QWORD *)&v19 + 1);
  }
  return v16;
}
