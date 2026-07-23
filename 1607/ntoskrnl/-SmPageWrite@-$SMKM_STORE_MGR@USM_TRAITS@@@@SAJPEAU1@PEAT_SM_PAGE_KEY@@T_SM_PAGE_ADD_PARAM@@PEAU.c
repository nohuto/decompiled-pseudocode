/*
 * XREFs of ?SmPageWrite@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAT_SM_PAGE_KEY@@T_SM_PAGE_ADD_PARAM@@PEAU_MDL@@PEAXPEAU_IO_STATUS_BLOCK@@K@Z @ 0x14011A2B8
 * Callers:
 *     SmpPageWrite @ 0x14011A1C8 (SmpPageWrite.c)
 * Callees:
 *     SmKmStoreDereference @ 0x1400030FC (SmKmStoreDereference.c)
 *     SmKmStoreReferenceEx @ 0x140003358 (SmKmStoreReferenceEx.c)
 *     ?StDmGetSpaceStats@?$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@PEAK1@Z @ 0x1400A6598 (-StDmGetSpaceStats@-$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@PEAK1@Z.c)
 *     ?SmFeAddInitiate@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAT_SM_PAGE_KEY@@KKPEAU_SM_QUEUE_CONTEXT@1@K@Z @ 0x14011A480 (-SmFeAddInitiate@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAT_SM_PAGE_KEY@@KKPEAU_SM_QUEUE_CONTE.c)
 *     ?SmQueueContextCleanup@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAU_SM_QUEUE_CONTEXT@1@@Z @ 0x14011A85C (-SmQueueContextCleanup@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAU_SM_QUEUE_CONTEXT@1@@Z.c)
 *     ?SmIoCtxPrepareToQueue@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU_SM_IO_CONTEXT@1@PEAU1@KPEAU_SM_WORK_ITEM@1@PEAU_SM_QUEUE_CONTEXT@1@@Z @ 0x14011BC50 (-SmIoCtxPrepareToQueue@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU_SM_IO_CONTEXT@1@PEAU1@KPEAU_SM_WOR.c)
 *     memset @ 0x140171AC0 (memset.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall SMKM_STORE_MGR<SM_TRAITS>::SmPageWrite(
        __int64 a1,
        _DWORD *a2,
        unsigned int a3,
        __int64 a4,
        __int64 a5,
        _QWORD *a6,
        int a7)
{
  __int16 v7; // bx
  _QWORD *v9; // rdi
  _QWORD *v11; // r14
  unsigned int v12; // ebx
  _QWORD *v13; // r13
  unsigned __int64 v14; // rax
  _DWORD *v15; // rsi
  __int64 v16; // r11
  _QWORD *PoolWithTag; // rax
  int v18; // r8d
  unsigned int v19; // eax
  int v20; // r12d
  int v21; // ebx
  unsigned int v23; // edx
  int v24; // ecx
  unsigned int v25; // eax
  _QWORD v26[4]; // [rsp+30h] [rbp-20h] BYREF
  int v29; // [rsp+B0h] [rbp+60h]

  v7 = a3;
  v9 = 0LL;
  memset(v26, 0, sizeof(v26));
  v11 = a6;
  v26[0] = 0LL;
  v12 = v7 & 0x7FF;
  v26[1] = v26;
  v13 = a6;
  a6[1] = 0LL;
  *v13 = a5;
  v29 = *(_DWORD *)(a4 + 40) >> 12;
  if ( v12 == 1024 || (v14 = SmKmStoreReferenceEx(a1, v12), (v15 = (_DWORD *)v14) == 0LL) )
  {
    v21 = -1073741811;
  }
  else
  {
    ST_STORE<SM_TRAITS>::StDmGetSpaceStats(v14 + 80, &a6, 0LL);
    if ( v15[234] > (unsigned int)a6
      || (v23 = v15[2 * v16 + 469], v24 = v15[2 * v16 + 468], v25 = v24 * (v15[216] >> 4), v25 < v23)
      || v25 - v23 >= v24 << 8 )
    {
      PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x28uLL, 0x69576D73u);
      v9 = PoolWithTag;
      if ( PoolWithTag )
      {
        memset(PoolWithTag, 0, 0x28uLL);
        *(_DWORD *)v9 &= 0xFFFFFFF8;
        v9[2] = a4;
        *((_DWORD *)v9 + 6) = *a2;
        *((_DWORD *)v9 + 2) ^= (*((_DWORD *)v9 + 2) ^ (a3 >> 13)) & 7;
        v19 = a3;
        if ( (a3 & 0x10000) != 0 )
        {
          *((_DWORD *)v9 + 2) |= 0x40000000u;
          v19 = a3;
        }
        if ( (v19 & 0x20000) != 0 )
          *((_DWORD *)v9 + 2) |= 0x40000000u;
        v20 = v15[1464] & 0x3FF;
        v21 = SMKM_STORE_MGR<SM_TRAITS>::SmIoCtxPrepareToQueue((_DWORD)v11, a1, v18, (_DWORD)v9, (__int64)v26);
        if ( v21 >= 0 )
        {
          v9 = 0LL;
          v21 = SMKM_STORE_MGR<SM_TRAITS>::SmFeAddInitiate(a1, (_DWORD)a2, v29, v20, (__int64)v26, a7);
          if ( v21 >= 0 )
          {
            v15 = 0LL;
            v21 = 259;
            v13 = 0LL;
          }
        }
      }
      else
      {
        v21 = -1073741670;
      }
    }
    else
    {
      v21 = -1073741110;
    }
    if ( v15 )
      SmKmStoreDereference(a1, v15[1464]);
    if ( v9 )
      ExFreePoolWithTag(v9, 0);
  }
  SMKM_STORE_MGR<SM_TRAITS>::SmQueueContextCleanup(a1, v26);
  if ( v13 )
  {
    *v11 = 0LL;
    v11[1] = 0LL;
    *(_DWORD *)v11 = v21;
  }
  return (unsigned int)v21;
}
