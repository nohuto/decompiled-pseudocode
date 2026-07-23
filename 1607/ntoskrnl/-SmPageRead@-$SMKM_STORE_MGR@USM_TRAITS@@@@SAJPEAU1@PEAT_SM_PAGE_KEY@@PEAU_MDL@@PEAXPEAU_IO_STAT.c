/*
 * XREFs of ?SmPageRead@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAT_SM_PAGE_KEY@@PEAU_MDL@@PEAXPEAU_IO_STATUS_BLOCK@@@Z @ 0x140117558
 * Callers:
 *     SmPageRead @ 0x14011E6B4 (SmPageRead.c)
 * Callees:
 *     SmKmStoreDereference @ 0x1400030FC (SmKmStoreDereference.c)
 *     ?SmIoCtxQueueWork@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU_SM_IO_CONTEXT@1@PEAU1@KPEAX@Z @ 0x14011A664 (-SmIoCtxQueueWork@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU_SM_IO_CONTEXT@1@PEAU1@KPEAX@Z.c)
 *     ?SmWorkItemFreeResource@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAU_SM_WORK_ITEM@1@PEAU_SM_IO_CONTEXT@1@@Z @ 0x14011B2E0 (-SmWorkItemFreeResource@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAU_SM_WORK_ITEM@1@PEAU_SM_IO_C.c)
 *     SmFpAllocate @ 0x14011BD8C (SmFpAllocate.c)
 *     ?SmReadPickStore@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAT_SM_PAGE_KEY@@PEAKPEAPEAU?$SMKM_STORE@USM_TRAITS@@@@2@Z @ 0x14011E460 (-SmReadPickStore@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAT_SM_PAGE_KEY@@PEAKPEAPEAU-$SMKM_STO.c)
 *     SmAcquireReleaseResAvailForRead @ 0x14011E50C (SmAcquireReleaseResAvailForRead.c)
 *     RtlpInterlockedPopEntrySList @ 0x140167370 (RtlpInterlockedPopEntrySList.c)
 *     memset @ 0x140171AC0 (memset.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall SMKM_STORE_MGR<SM_TRAITS>::SmPageRead(
        __int64 a1,
        _DWORD *a2,
        unsigned __int64 a3,
        __int64 a4,
        _QWORD *a5)
{
  char v5; // bl
  unsigned __int64 v6; // rbp
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
  unsigned int v19; // [rsp+70h] [rbp+8h]
  char v20; // [rsp+80h] [rbp+18h] BYREF
  __int64 v21; // [rsp+88h] [rbp+20h] BYREF

  v21 = 0LL;
  v5 = 0;
  v6 = a3;
  if ( (a3 & 3) != 0 )
  {
    v5 = (a3 & 1) != 0;
    if ( (a3 & 2) != 0 )
      v5 |= 2u;
    v6 = a3 & 0xFFFFFFFFFFFFFFFCuLL;
  }
  v8 = a5;
  v9 = a5;
  a5[1] = 0LL;
  *v9 = a4;
  v10 = *(_DWORD *)(v6 + 40) >> 12;
  v19 = v10;
  LODWORD(a5) = v10;
  PickStore = SMKM_STORE_MGR<SM_TRAITS>::SmReadPickStore(
                (unsigned int)&SmGlobals,
                (_DWORD)a2,
                (unsigned int)&a5,
                (unsigned int)&v21,
                (__int64)&v20);
  v12 = v21;
  v13 = PickStore;
  if ( PickStore >= 0 )
  {
    v14 = (char)a5;
    v8[1] = (unsigned int)a5;
    if ( (v5 & 2) != 0 && !*(_BYTE *)(v12 + 5860) )
    {
      v13 = -1073741791;
      goto LABEL_18;
    }
    if ( (dword_1403BF0C0 & 0x10) == 0 )
    {
LABEL_7:
      if ( (v5 & 1) != 0 )
      {
        PoolWithTag = RtlpInterlockedPopEntrySList(&stru_1403BEF20);
        if ( PoolWithTag )
          goto LABEL_9;
        PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x58uLL, 0x61576D73u);
        if ( PoolWithTag )
          goto LABEL_9;
        v5 &= ~1u;
      }
      PoolWithTag = (_DWORD *)SmFpAllocate(&dword_1403BEFA0, dword_1403BF0C0 & 1);
      if ( !PoolWithTag )
      {
        v13 = -1073741670;
LABEL_17:
        v10 = v19;
        goto LABEL_18;
      }
LABEL_9:
      memset(PoolWithTag, 0, 0x28uLL);
      v16 = *PoolWithTag & 0xFFFFFFFA;
      *((_QWORD *)PoolWithTag + 2) = v6;
      *((_BYTE *)PoolWithTag + 8) = v14;
      v17 = (v20 & 1) == 0;
      *PoolWithTag = v16 | 2;
      PoolWithTag[6] = *a2;
      if ( !v17 )
        PoolWithTag[2] |= 0x1000000u;
      if ( (v5 & 1) != 0 )
        PoolWithTag[2] |= 0x4000000u;
      if ( (int)SMKM_STORE_MGR<SM_TRAITS>::SmIoCtxQueueWork(
                  v8,
                  &SmGlobals,
                  *(_DWORD *)(v12 + 5856) & 0x3FF,
                  PoolWithTag) < 0 )
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
        SMKM_STORE_MGR<SM_TRAITS>::SmWorkItemFreeResource(&SmGlobals, PoolWithTag, v9);
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
    SmKmStoreDereference((__int64)&SmGlobals, *(_DWORD *)(v12 + 5856));
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
