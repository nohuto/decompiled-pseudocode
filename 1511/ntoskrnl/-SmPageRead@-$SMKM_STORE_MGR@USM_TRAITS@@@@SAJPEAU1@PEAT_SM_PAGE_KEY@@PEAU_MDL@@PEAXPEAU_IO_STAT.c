/*
 * XREFs of ?SmPageRead@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAT_SM_PAGE_KEY@@PEAU_MDL@@PEAXPEAU_IO_STATUS_BLOCK@@@Z @ 0x140109D44
 * Callers:
 *     SmPageRead @ 0x140109CEC (SmPageRead.c)
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x14006EE30 (ExReleaseRundownProtection_0.c)
 *     ?SmIoCtxQueueWork@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU_SM_IO_CONTEXT@1@PEAU1@KPEAX@Z @ 0x14010BC20 (-SmIoCtxQueueWork@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU_SM_IO_CONTEXT@1@PEAU1@KPEAX@Z.c)
 *     ?SmWorkItemFreeResource@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAU_SM_WORK_ITEM@1@PEAU_SM_IO_CONTEXT@1@@Z @ 0x14010D488 (-SmWorkItemFreeResource@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAU_SM_WORK_ITEM@1@PEAU_SM_IO_C.c)
 *     SmFpAllocate @ 0x14010E714 (SmFpAllocate.c)
 *     ?SmReadPickStore@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAT_SM_PAGE_KEY@@PEAKPEAPEAU?$SMKM_STORE@USM_TRAITS@@@@2@Z @ 0x140110250 (-SmReadPickStore@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAT_SM_PAGE_KEY@@PEAKPEAPEAU-$SMKM_STO.c)
 *     SmAcquireReleaseResAvailForRead @ 0x140110370 (SmAcquireReleaseResAvailForRead.c)
 *     RtlpInterlockedPopEntrySList @ 0x14015B960 (RtlpInterlockedPopEntrySList.c)
 *     memset @ 0x140166CC0 (memset.c)
 *     ExAllocatePoolWithTag @ 0x140238380 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall SMKM_STORE_MGR<SM_TRAITS>::SmPageRead(
        __int64 a1,
        _DWORD *a2,
        unsigned __int64 a3,
        __int64 a4,
        _QWORD *a5)
{
  char v5; // bl
  unsigned __int64 v7; // rbp
  _QWORD *v8; // r14
  _QWORD *v9; // r12
  unsigned int v10; // esi
  int PickStore; // eax
  __int64 v12; // r15
  unsigned int v13; // edi
  char v14; // di
  _DWORD *PoolWithTag; // rsi
  unsigned int v16; // eax
  bool v17; // zf
  __int64 v19; // [rsp+30h] [rbp-48h] BYREF
  unsigned int v21; // [rsp+90h] [rbp+18h] BYREF
  char v22; // [rsp+98h] [rbp+20h] BYREF

  v19 = 0LL;
  v5 = 0;
  v7 = a3;
  if ( (a3 & 3) != 0 )
  {
    v5 = (a3 & 1) != 0;
    if ( (a3 & 2) != 0 )
      v5 |= 2u;
    v7 = a3 & 0xFFFFFFFFFFFFFFFCuLL;
  }
  v8 = a5;
  v9 = a5;
  a5[1] = 0LL;
  *v9 = a4;
  v10 = *(_DWORD *)(v7 + 40) >> 12;
  LODWORD(a5) = v10;
  v21 = v10;
  PickStore = SMKM_STORE_MGR<SM_TRAITS>::SmReadPickStore(
                a1,
                (_DWORD)a2,
                (unsigned int)&v21,
                (unsigned int)&v19,
                (__int64)&v22);
  v12 = v19;
  v13 = PickStore;
  if ( PickStore >= 0 )
  {
    v14 = v21;
    v8[1] = v21;
    if ( (v5 & 2) != 0 && !*(_BYTE *)(v12 + 4484) )
    {
      v13 = -1073741791;
      goto LABEL_18;
    }
    if ( (*(_DWORD *)(a1 + 10112) & 0x10) == 0 )
    {
LABEL_7:
      if ( (v5 & 1) != 0 )
      {
        PoolWithTag = RtlpInterlockedPopEntrySList((PSLIST_HEADER)(a1 + 9696));
        if ( PoolWithTag )
          goto LABEL_9;
        PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x58uLL, 0x61576D73u);
        if ( PoolWithTag )
          goto LABEL_9;
        v5 &= ~1u;
      }
      PoolWithTag = (_DWORD *)SmFpAllocate((PEX_SPIN_LOCK)(a1 + 9824), *(_DWORD *)(a1 + 10112) & 1);
      if ( !PoolWithTag )
      {
        v13 = -1073741670;
LABEL_17:
        v10 = (unsigned int)a5;
        goto LABEL_18;
      }
LABEL_9:
      memset(PoolWithTag, 0, 0x28uLL);
      v16 = *PoolWithTag & 0xFFFFFFFA;
      *((_QWORD *)PoolWithTag + 2) = v7;
      *((_BYTE *)PoolWithTag + 8) = v14;
      v17 = (v22 & 1) == 0;
      *PoolWithTag = v16 | 2;
      PoolWithTag[6] = *a2;
      if ( !v17 )
        PoolWithTag[2] |= 0x1000000u;
      if ( (v5 & 1) != 0 )
        PoolWithTag[2] |= 0x4000000u;
      if ( (int)SMKM_STORE_MGR<SM_TRAITS>::SmIoCtxQueueWork(v8, a1, *(_DWORD *)(v12 + 4480) & 0x1F, PoolWithTag) < 0 )
      {
        v13 = -1073741670;
      }
      else
      {
        PoolWithTag = 0LL;
        v9 = 0LL;
        v12 = 0LL;
        v13 = 259;
        v5 &= ~4u;
      }
      if ( PoolWithTag )
        SMKM_STORE_MGR<SM_TRAITS>::SmWorkItemFreeResource(a1, PoolWithTag, v9);
      goto LABEL_17;
    }
    v5 ^= (v5 ^ (8 * SmAcquireReleaseResAvailForRead(v8, v10, 0LL))) & 8;
    if ( (v5 & 8) != 0 )
    {
      v5 |= 4u;
      goto LABEL_7;
    }
    v13 = -1073741670;
  }
LABEL_18:
  if ( v12 )
    ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)(176LL * (*(_DWORD *)(v12 + 4480) & 0x1F) + a1 + 8));
  if ( (v5 & 4) != 0 )
    SmAcquireReleaseResAvailForRead(v9, v10, 1LL);
  if ( v9 )
  {
    *v8 = 0LL;
    v8[1] = 0LL;
    *(_DWORD *)v8 = v13;
  }
  return v13;
}
