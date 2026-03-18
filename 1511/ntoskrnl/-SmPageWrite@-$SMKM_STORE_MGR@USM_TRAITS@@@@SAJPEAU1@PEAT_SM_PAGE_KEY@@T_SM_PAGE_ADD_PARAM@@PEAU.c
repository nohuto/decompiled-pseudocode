/*
 * XREFs of ?SmPageWrite@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAT_SM_PAGE_KEY@@T_SM_PAGE_ADD_PARAM@@PEAU_MDL@@PEAXPEAU_IO_STATUS_BLOCK@@K@Z @ 0x14010B87C
 * Callers:
 *     SmpPageWrite @ 0x14010B7A4 (SmpPageWrite.c)
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x14006EE30 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection @ 0x140079FF0 (ExAcquireRundownProtection.c)
 *     ?SmFeAddInitiate@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAT_SM_PAGE_KEY@@KKPEAU_SM_QUEUE_CONTEXT@1@K@Z @ 0x14010BA28 (-SmFeAddInitiate@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAT_SM_PAGE_KEY@@KKPEAU_SM_QUEUE_CONTE.c)
 *     ?SmQueueContextCleanup@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAU_SM_QUEUE_CONTEXT@1@@Z @ 0x14010BE10 (-SmQueueContextCleanup@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAU_SM_QUEUE_CONTEXT@1@@Z.c)
 *     ?SmIoCtxPrepareToQueue@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU_SM_IO_CONTEXT@1@PEAU1@KPEAU_SM_WORK_ITEM@1@PEAU_SM_QUEUE_CONTEXT@1@@Z @ 0x14010E5D8 (-SmIoCtxPrepareToQueue@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU_SM_IO_CONTEXT@1@PEAU1@KPEAU_SM_WOR.c)
 *     ?SmPickStoreForWrite@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAPEAU?$SMKM_STORE@USM_TRAITS@@@@PEAU1@@Z @ 0x14010E7EC (-SmPickStoreForWrite@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAPEAU-$SMKM_STORE@USM_TRAITS@@@@PEAU1@@Z.c)
 *     memset @ 0x140166CC0 (memset.c)
 *     ExAllocatePoolWithTag @ 0x140238380 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall SMKM_STORE_MGR<SM_TRAITS>::SmPageWrite(
        __int64 a1,
        int *a2,
        unsigned int a3,
        __int64 a4,
        __int64 a5,
        _QWORD *a6,
        int a7)
{
  int *v7; // rdi
  char v8; // bl
  unsigned int v11; // ebx
  _QWORD *v12; // r12
  int v13; // r13d
  __int64 v14; // rsi
  _DWORD *PoolWithTag; // rax
  _DWORD *v16; // rbx
  int v17; // r8d
  int v18; // eax
  __int16 v19; // ax
  int v20; // r15d
  int v21; // edi
  unsigned int v23; // edi
  __int64 v24; // rsi
  _QWORD v25[11]; // [rsp+30h] [rbp-58h] BYREF

  v7 = a2;
  v8 = a3;
  memset(v25, 0, 0x20uLL);
  v25[0] = 0LL;
  v11 = v8 & 0x3F;
  v25[1] = v25;
  v12 = a6;
  a6[1] = 0LL;
  *a6 = a5;
  v13 = *(_DWORD *)(a4 + 40) >> 12;
  if ( v11 == 32 )
  {
    v14 = SMKM_STORE_MGR<SM_TRAITS>::SmPickStoreForWrite(a1);
    goto LABEL_3;
  }
  if ( v11 >= 0x20 )
    goto LABEL_27;
  _mm_lfence();
  v23 = v11 | (32 * (*(_WORD *)(176LL * v11 + a1 + 24) & 0x7FF));
  v24 = a1 + 176LL * (v11 & 0x1F);
  if ( !ExAcquireRundownProtection((PEX_RUNDOWN_REF)(v24 + 8)) )
    goto LABEL_24;
  if ( (*(_WORD *)(v24 + 24) & 0x7FF) != v23 >> 5 )
  {
    ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)(v24 + 8));
LABEL_24:
    v14 = 0LL;
    goto LABEL_25;
  }
  v14 = *(_QWORD *)v24;
LABEL_25:
  v7 = a2;
LABEL_3:
  if ( !v14 )
  {
LABEL_27:
    v21 = -1073741811;
    goto LABEL_16;
  }
  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x28uLL, 0x69576D73u);
  v16 = PoolWithTag;
  if ( PoolWithTag )
  {
    memset(PoolWithTag, 0, 0x28uLL);
    v18 = *v7;
    *v16 &= 0xFFFFFFF8;
    v16[6] = v18;
    *((_QWORD *)v16 + 2) = a4;
    v16[2] ^= (v16[2] ^ (a3 >> 8)) & 7;
    v19 = a3;
    if ( (a3 & 0x800) != 0 )
    {
      v16[2] |= 0x40000000u;
      v19 = a3;
    }
    if ( (v19 & 0x1000) != 0 )
      v16[2] |= 0x40000000u;
    v20 = *(_DWORD *)(v14 + 4480) & 0x1F;
    v21 = SMKM_STORE_MGR<SM_TRAITS>::SmIoCtxPrepareToQueue((_DWORD)a6, a1, v17, (_DWORD)v16, (__int64)v25);
    if ( v21 >= 0 )
    {
      v16 = 0LL;
      v21 = SMKM_STORE_MGR<SM_TRAITS>::SmFeAddInitiate(a1, (_DWORD)a2, v13, v20, (__int64)v25, a7);
      if ( v21 >= 0 )
      {
        v14 = 0LL;
        v21 = 259;
        v12 = 0LL;
      }
    }
  }
  else
  {
    v21 = -1073741670;
  }
  if ( v14 )
    ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)(176LL * (*(_DWORD *)(v14 + 4480) & 0x1F) + a1 + 8));
  if ( v16 )
    ExFreePoolWithTag(v16, 0);
LABEL_16:
  SMKM_STORE_MGR<SM_TRAITS>::SmQueueContextCleanup(a1, v25);
  if ( v12 )
  {
    *a6 = 0LL;
    a6[1] = 0LL;
    *(_DWORD *)a6 = v21;
  }
  return (unsigned int)v21;
}
