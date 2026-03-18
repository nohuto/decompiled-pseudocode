/*
 * XREFs of ?SmIoCtxPrepareToQueue@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU_SM_IO_CONTEXT@1@PEAU1@KPEAU_SM_WORK_ITEM@1@PEAU_SM_QUEUE_CONTEXT@1@@Z @ 0x14013F8E0
 * Callers:
 *     ?SmPageWrite@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAT_SM_PAGE_KEY@@T_SM_PAGE_ADD_PARAM@@PEAU_MDL@@PEAXPEAU_IO_STATUS_BLOCK@@K@Z @ 0x14013E454 (-SmPageWrite@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAT_SM_PAGE_KEY@@T_SM_PAGE_ADD_PARAM@@PEAU.c)
 *     ?SmIoCtxQueueWork@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU_SM_IO_CONTEXT@1@PEAU1@KPEAX@Z @ 0x14013E83C (-SmIoCtxQueueWork@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU_SM_IO_CONTEXT@1@PEAU1@KPEAX@Z.c)
 * Callees:
 *     ?SmWorkItemFreeResource@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAU_SM_WORK_ITEM@1@PEAU_SM_IO_CONTEXT@1@@Z @ 0x14013F004 (-SmWorkItemFreeResource@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAU_SM_WORK_ITEM@1@PEAU_SM_IO_C.c)
 *     SmFpFree @ 0x14013F098 (SmFpFree.c)
 *     SmFpAllocate @ 0x14013FA1C (SmFpAllocate.c)
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
  __int64 v9; // rsi
  int v12; // ecx
  __int128 v13; // xmm0
  unsigned int v14; // r14d
  _DWORD *v16; // rdx
  __int128 v17; // [rsp+30h] [rbp-10h] BYREF

  v5 = a4;
  *(_QWORD *)(a4 + 32) = a1;
  v6 = *(_DWORD *)a4;
  v7 = (unsigned __int64 *)&v17;
  v8 = 0LL;
  *((_QWORD *)&v17 + 1) = &v17;
  *(_QWORD *)&v17 = 0LL;
  v9 = 0LL;
  if ( (v6 & 5) == 0 )
  {
    v12 = *(_DWORD *)(a2 + 10096);
    v9 = *(_QWORD *)(v5 + 16);
    if ( (v12 & 2) != 0 )
    {
      v8 = SmFpAllocate(a2 + 9816, 4LL, a1);
      if ( !v8 )
      {
        v14 = -1073741670;
        goto LABEL_15;
      }
      v7 = (unsigned __int64 *)*((_QWORD *)&v17 + 1);
    }
  }
  *(_QWORD *)v5 = *(_DWORD *)v5 & 7 | ((*v7 & 0xFFFFFFFFFFFFFFF8uLL) + 8);
  *v7 = v5 | *(_DWORD *)v7 & 7;
  *((_QWORD *)&v17 + 1) = v5;
  if ( (__int128 *)v5 != &v17 )
  {
    v13 = v17;
    *(_QWORD *)&v17 = 0LL;
    v5 = (unsigned __int64)&v17;
    *((_QWORD *)&v17 + 1) = &v17;
    *(_OWORD *)a5 = v13;
  }
  if ( v8 )
    *(_QWORD *)(a5 + 16) = v9;
  *(_QWORD *)(a5 + 24) = a1;
  v14 = 0;
  while ( (__int128 *)v5 != &v17 )
  {
    v16 = (_DWORD *)v17;
    *(_QWORD *)&v17 = *(_QWORD *)v17 & 0xFFFFFFFFFFFFFFF8uLL;
    if ( v16 == (_DWORD *)v5 )
    {
      *(_QWORD *)&v17 = 0LL;
      *((_QWORD *)&v17 + 1) = &v17;
    }
    else
    {
      *(_QWORD *)v5 = *(_QWORD *)v5 & 7LL | (8LL * (*(_QWORD *)v5 >> 3) - 8);
    }
    SMKM_STORE_MGR<SM_TRAITS>::SmWorkItemFreeResource(a2, v16, a1);
LABEL_15:
    v5 = *((_QWORD *)&v17 + 1);
  }
  return v14;
}
