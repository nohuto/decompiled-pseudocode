/*
 * XREFs of ?SmPageWrite@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAT_SM_PAGE_KEY@@T_SM_PAGE_ADD_PARAM@@PEAU_MDL@@PEAXPEAU_IO_STATUS_BLOCK@@K@Z @ 0x14013E454
 * Callers:
 *     SmpPageWrite @ 0x14013E380 (SmpPageWrite.c)
 * Callees:
 *     ExfReleaseRundownProtection @ 0x140030F40 (ExfReleaseRundownProtection.c)
 *     ExfAcquireRundownProtection @ 0x1400D4A40 (ExfAcquireRundownProtection.c)
 *     ?SmFeAddInitiate@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAT_SM_PAGE_KEY@@KKPEAU_SM_QUEUE_CONTEXT@1@K@Z @ 0x14013E5E4 (-SmFeAddInitiate@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAT_SM_PAGE_KEY@@KKPEAU_SM_QUEUE_CONTE.c)
 *     ?SmQueueContextCleanup@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAU_SM_QUEUE_CONTEXT@1@@Z @ 0x14013EA5C (-SmQueueContextCleanup@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAU_SM_QUEUE_CONTEXT@1@@Z.c)
 *     ?SmIoCtxPrepareToQueue@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU_SM_IO_CONTEXT@1@PEAU1@KPEAU_SM_WORK_ITEM@1@PEAU_SM_QUEUE_CONTEXT@1@@Z @ 0x14013F8E0 (-SmIoCtxPrepareToQueue@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU_SM_IO_CONTEXT@1@PEAU1@KPEAU_SM_WOR.c)
 *     ?SmPickStoreForWrite@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAPEAU?$SMKM_STORE@USM_TRAITS@@@@PEAU1@@Z @ 0x14013FAF0 (-SmPickStoreForWrite@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAPEAU-$SMKM_STORE@USM_TRAITS@@@@PEAU1@@Z.c)
 *     memset @ 0x140195A80 (memset.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140288E60 (ExAllocatePoolWithTag.c)
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
  unsigned int v12; // ebx
  _QWORD *v13; // r13
  __int64 v14; // rsi
  _DWORD *PoolWithTag; // rax
  _DWORD *v16; // rbx
  int v17; // r8d
  int v18; // eax
  __int16 v19; // ax
  int v20; // r12d
  int v21; // edi
  unsigned int v23; // edi
  __int64 v24; // rsi
  struct _EX_RUNDOWN_REF *v25; // rbx
  unsigned __int64 v26; // rtt
  unsigned __int64 v27; // rtt
  struct _EX_RUNDOWN_REF *v28; // rcx
  unsigned __int64 v29; // rtt
  _QWORD v30[4]; // [rsp+30h] [rbp-20h] BYREF
  int v33; // [rsp+B8h] [rbp+68h]

  v7 = a2;
  v8 = a3;
  memset(v30, 0, sizeof(v30));
  v30[0] = 0LL;
  v12 = v8 & 0x3F;
  v30[1] = v30;
  v13 = a6;
  a6[1] = 0LL;
  *a6 = a5;
  v33 = *(_DWORD *)(a4 + 40) >> 12;
  if ( v12 == 32 )
  {
    v14 = SMKM_STORE_MGR<SM_TRAITS>::SmPickStoreForWrite(a1);
    goto LABEL_3;
  }
  if ( v12 >= 0x20 )
    goto LABEL_30;
  _mm_lfence();
  v23 = v12 | (32 * (*(_WORD *)(176LL * v12 + a1 + 24) & 0x7FF));
  v24 = 176LL * (v12 & 0x1F);
  v25 = (struct _EX_RUNDOWN_REF *)(v24 + a1);
  _m_prefetchw((const void *)(v24 + a1 + 8));
  v26 = *(_QWORD *)(v24 + a1 + 8) & 0xFFFFFFFFFFFFFFFEuLL;
  if ( v26 != _InterlockedCompareExchange64((volatile signed __int64 *)(v24 + a1 + 8), v26 + 2, v26)
    && !ExfAcquireRundownProtection(v25 + 1) )
  {
    goto LABEL_25;
  }
  if ( (*(_WORD *)(v24 + a1 + 24) & 0x7FF) != v23 >> 5 )
  {
    _m_prefetchw(&v25[1]);
    v27 = v25[1].Count & 0xFFFFFFFFFFFFFFFEuLL;
    if ( v27 != _InterlockedCompareExchange64((volatile signed __int64 *)&v25[1], v27 - 2, v27) )
      ExfReleaseRundownProtection(v25 + 1);
LABEL_25:
    v14 = 0LL;
    goto LABEL_26;
  }
  v14 = *(_QWORD *)(v24 + a1);
LABEL_26:
  v7 = a2;
LABEL_3:
  if ( !v14 )
  {
LABEL_30:
    v21 = -1073741811;
    goto LABEL_15;
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
    v21 = SMKM_STORE_MGR<SM_TRAITS>::SmIoCtxPrepareToQueue((_DWORD)a6, a1, v17, (_DWORD)v16, (__int64)v30);
    if ( v21 >= 0 )
    {
      v16 = 0LL;
      v21 = SMKM_STORE_MGR<SM_TRAITS>::SmFeAddInitiate(a1, (_DWORD)a2, v33, v20, (__int64)v30, a7);
      if ( v21 >= 0 )
      {
        v14 = 0LL;
        v21 = 259;
        v13 = 0LL;
      }
    }
  }
  else
  {
    v21 = -1073741670;
  }
  if ( v14 )
  {
    v28 = (struct _EX_RUNDOWN_REF *)(176LL * (*(_DWORD *)(v14 + 4480) & 0x1F) + a1 + 8);
    _m_prefetchw(v28);
    v29 = v28->Count & 0xFFFFFFFFFFFFFFFEuLL;
    if ( v29 != _InterlockedCompareExchange64((volatile signed __int64 *)v28, v29 - 2, v29) )
      ExfReleaseRundownProtection(v28);
  }
  if ( v16 )
    ExFreePoolWithTag(v16, 0);
LABEL_15:
  SMKM_STORE_MGR<SM_TRAITS>::SmQueueContextCleanup(a1, v30);
  if ( v13 )
  {
    *a6 = 0LL;
    a6[1] = 0LL;
    *(_DWORD *)a6 = v21;
  }
  return (unsigned int)v21;
}
