/*
 * XREFs of ?SmStMapVirtualRegion@?$SMKM_STORE@USM_TRAITS@@@@SAPEAXPEAU1@KKKK@Z @ 0x14011F090
 * Callers:
 *     ?SmStPrioritizeRegionsStore@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@K@Z @ 0x140001F74 (-SmStPrioritizeRegionsStore@-$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@K@Z.c)
 *     ?StDmpSinglePageRetrieve@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_STDM_READ_CONTEXT@1@PEAU_ST_IO_PARAMS@1@PEAXPEAU_ST_PAGE_LOCATION@1@@Z @ 0x14011D340 (-StDmpSinglePageRetrieve@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_STDM_READ_CONTEXT@1.c)
 *     ?SmStCompareRegionData@?$SMKM_STORE@USM_TRAITS@@@@SAKPEAU1@PEAU_SM_COMPARE_DATA_PARAMS@@@Z @ 0x14011EF64 (-SmStCompareRegionData@-$SMKM_STORE@USM_TRAITS@@@@SAKPEAU1@PEAU_SM_COMPARE_DATA_PARAMS@@@Z.c)
 *     ?StMapAndLockRegion@?$ST_STORE@USM_TRAITS@@@@SAPEADPEAU_ST_DATA_MGR@1@KKK@Z @ 0x14011FC30 (-StMapAndLockRegion@-$ST_STORE@USM_TRAITS@@@@SAPEADPEAU_ST_DATA_MGR@1@KKK@Z.c)
 *     ?SmStOutSwapStore@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@@Z @ 0x14021CAC8 (-SmStOutSwapStore@-$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@@Z.c)
 *     ?SmStTrimWsStore@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@_K@Z @ 0x14021CDC0 (-SmStTrimWsStore@-$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@_K@Z.c)
 *     ?StDmLazyRegionsWorker@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@KPEAU_ST_WORK_ITEM@1@@Z @ 0x14021E8C4 (-StDmLazyRegionsWorker@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@KPEAU_ST_WORK_ITEM@1@@Z.c)
 * Callees:
 *     SmAcquireReleaseCharges @ 0x140003E04 (SmAcquireReleaseCharges.c)
 *     ?SmStHelperSendCommand@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@W4_SMKM_STORE_HELPER_COMMAND@@PEAU_SMKM_STORE_HELPER_PARAMS@@K@Z @ 0x14011F278 (-SmStHelperSendCommand@-$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@W4_SMKM_STORE_HELPER_COMMAND@@PEAU_SM.c)
 *     ?SmStFindVirtualLockedRegion@?$SMKM_STORE@USM_TRAITS@@@@SAPEAU_SM_VIRTUAL_LOCKED_REGION@@PEAU1@KPEAX@Z @ 0x14011F3E8 (-SmStFindVirtualLockedRegion@-$SMKM_STORE@USM_TRAITS@@@@SAPEAU_SM_VIRTUAL_LOCKED_REGION@@PEAU1@K.c)
 *     ?SmStCheckLockInProgressRegionComplete@?$SMKM_STORE@USM_TRAITS@@@@SAKPEAU1@PEAT_SM_VIRTUAL_REGION@@K@Z @ 0x1401206CC (-SmStCheckLockInProgressRegionComplete@-$SMKM_STORE@USM_TRAITS@@@@SAKPEAU1@PEAT_SM_VIRTUAL_REGIO.c)
 *     memset @ 0x140171AC0 (memset.c)
 */

__int64 __fastcall SMKM_STORE<SM_TRAITS>::SmStMapVirtualRegion(
        __int64 a1,
        unsigned int a2,
        unsigned int a3,
        __int64 a4,
        unsigned int a5)
{
  __int64 v5; // rax
  unsigned __int64 v7; // rcx
  __int64 v8; // r12
  volatile signed __int16 *v9; // r14
  __int64 v10; // r13
  signed __int16 v11; // di
  int v12; // edx
  signed __int16 v13; // bx
  bool v14; // zf
  signed __int16 v15; // ax
  __int64 v16; // rsi
  __int64 v18; // rdx
  __int64 VirtualLockedRegion; // rax
  __int64 v20; // r12
  int v21; // eax
  __int64 v22; // rcx
  _QWORD v23[13]; // [rsp+20h] [rbp-68h] BYREF
  unsigned __int64 v24; // [rsp+90h] [rbp+8h]

  v5 = *(_QWORD *)(a1 + 6056);
  v7 = *(unsigned int *)(a1 + 6048);
  v8 = a3;
  v24 = v7;
  v9 = (volatile signed __int16 *)(v5 + 8LL * a2);
  v10 = *(_QWORD *)v9 & 0x7FFFFFFFFFFF0000LL;
  if ( (a5 & 8) != 0 )
  {
    v16 = 0LL;
    if ( (*v9 & 0x4000) != 0 )
    {
      *v9 &= ~0x4000u;
      return v16;
    }
    if ( (unsigned int)SMKM_STORE<SM_TRAITS>::SmStCheckLockInProgressRegionComplete(a1, v9, 0LL) )
      return v16;
    return 3LL;
  }
  if ( (a5 & 0x10) == 0 )
  {
    if ( (a5 & 4) != 0 )
    {
      _InterlockedOr16(v9, 0x8000u);
    }
    else if ( (a5 & 2) == 0 )
    {
      v11 = *v9;
      if ( (*v9 & 0x1FFF) != 0x1FFF )
      {
        while ( 1 )
        {
          v12 = 0;
          v13 = v11 ^ (v11 ^ (v11 + 1)) & 0x1FFF;
          if ( (v11 & 0x1FFF) == 0 )
          {
            v12 = SmAcquireReleaseCharges(v7, 1, 0);
            if ( !v12 )
            {
              if ( KeGetCurrentThread() != *(struct _KTHREAD **)(a1 + 6328) )
                return 2LL;
              v13 = v13 & 0xC000 | 0x2000;
            }
            v7 = v24;
          }
          v15 = _InterlockedCompareExchange16(v9, v13, v11);
          v14 = v11 == v15;
          v11 = v15;
          if ( v14 )
            return v8 + v10;
          if ( v12 )
            SmAcquireReleaseCharges(v7, 1, 1);
          if ( (v11 & 0x1FFF) == 0x1FFF )
            return 1LL;
          v7 = v24;
        }
      }
      return 1LL;
    }
    return v8 + v10;
  }
  v18 = *(_QWORD *)(a1 + 6416);
  v16 = 0LL;
  if ( v18 && !(unsigned int)SMKM_STORE<SM_TRAITS>::SmStCheckLockInProgressRegionComplete(a1, v18, 0LL) )
    return v16;
  VirtualLockedRegion = SMKM_STORE<SM_TRAITS>::SmStFindVirtualLockedRegion(a1, (a5 >> 6) & 7, 0LL);
  *(_QWORD *)(a1 + 6416) = v9;
  v20 = VirtualLockedRegion;
  memset(v23, 0, 0x30uLL);
  v23[1] = v24;
  v23[0] = v10;
  if ( !*(_BYTE *)(a1 + 5863) || (LODWORD(v23[2]) = 6, ((a5 >> 6) & 7) >= 6) )
    LODWORD(v23[2]) = (a5 >> 6) & 7;
  if ( (a5 & 1) != 0 )
    HIDWORD(v23[2]) |= 1u;
  v21 = SMKM_STORE<SM_TRAITS>::SmStHelperSendCommand(a1, 4LL, v23);
  if ( v21 < 0 )
  {
    if ( v21 != -1073741536 )
    {
      *(_QWORD *)(a1 + 6416) = 0LL;
      return v16;
    }
    return 3LL;
  }
  *(_QWORD *)(a1 + 6416) = 0LL;
  if ( SLODWORD(v23[5]) < 0 )
  {
    if ( LODWORD(v23[5]) == -1073740749 )
    {
      *v9 |= 0x4000u;
      return 1LL;
    }
  }
  else
  {
    *(_QWORD *)v20 = v23[4];
    *(_QWORD *)v9 |= 0x8000000000000000uLL;
    v22 = *(_QWORD *)(a1 + 6408);
    if ( (unsigned __int64)(v22 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
      _bittestandreset(*(signed __int32 **)(v22 + 16), a2);
    return *(_QWORD *)(*(_QWORD *)v20 + 24LL);
  }
  return v16;
}
