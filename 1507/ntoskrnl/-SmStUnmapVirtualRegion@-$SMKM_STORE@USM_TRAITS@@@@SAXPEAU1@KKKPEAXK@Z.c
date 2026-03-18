/*
 * XREFs of ?SmStUnmapVirtualRegion@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@KKKPEAXK@Z @ 0x140147B04
 * Callers:
 *     ?SmStPrioritizeRegionsStore@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@K@Z @ 0x1401286CC (-SmStPrioritizeRegionsStore@-$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@K@Z.c)
 *     ?StDmpSinglePageRetrieve@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_STDM_READ_CONTEXT@1@PEAU_ST_IO_PARAMS@1@PEAXPEAU_ST_PAGE_LOCATION@1@@Z @ 0x140140D78 (-StDmpSinglePageRetrieve@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_STDM_READ_CONTEXT@1.c)
 *     ?StUnlockAndUnmapRegion@?$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@KPEAD@Z @ 0x140144058 (-StUnlockAndUnmapRegion@-$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@KPEAD@Z.c)
 *     ?StMapAndLockRegion@?$ST_STORE@USM_TRAITS@@@@SAPEADPEAU_ST_DATA_MGR@1@KKK@Z @ 0x1401440E4 (-StMapAndLockRegion@-$ST_STORE@USM_TRAITS@@@@SAPEADPEAU_ST_DATA_MGR@1@KKK@Z.c)
 *     ?SmStOutSwapStore@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@@Z @ 0x1402521D8 (-SmStOutSwapStore@-$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@@Z.c)
 *     ?SmStTrimWsStoreBatch@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@PEAKPEAPEAXKK@Z @ 0x140252898 (-SmStTrimWsStoreBatch@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@PEAKPEAPEAXKK@Z.c)
 * Callees:
 *     SmAcquireReleaseCharges @ 0x1400D958C (SmAcquireReleaseCharges.c)
 *     SmFpFree @ 0x14013F098 (SmFpFree.c)
 *     SmKmUnlockMdl @ 0x140147C0C (SmKmUnlockMdl.c)
 *     ?SmStFindVirtualLockedRegion@?$SMKM_STORE@USM_TRAITS@@@@SAPEAU_SM_VIRTUAL_LOCKED_REGION@@PEAU1@KPEAX@Z @ 0x140147C44 (-SmStFindVirtualLockedRegion@-$SMKM_STORE@USM_TRAITS@@@@SAPEAU_SM_VIRTUAL_LOCKED_REGION@@PEAU1@K.c)
 */

__int16 __fastcall SMKM_STORE<SM_TRAITS>::SmStUnmapVirtualRegion(
        __int64 a1,
        unsigned int a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        unsigned int a6)
{
  _UNKNOWN **v6; // rax
  __int64 v7; // r14
  unsigned __int64 v9; // rcx
  __int64 v10; // rsi
  PMDL *VirtualLockedRegion; // rdi
  _UNKNOWN *retaddr; // [rsp+28h] [rbp+0h] BYREF

  v6 = &retaddr;
  v7 = *(_QWORD *)(a1 + 4680);
  v9 = *(unsigned int *)(a1 + 4672);
  v10 = a2;
  if ( (a6 & 4) != 0 )
  {
    VirtualLockedRegion = (PMDL *)SMKM_STORE<SM_TRAITS>::SmStFindVirtualLockedRegion(
                                    a1,
                                    (a6 >> 3) & 7,
                                    *(_QWORD *)(v7 + 8LL * a2) & 0x7FFFFFFFFFFF0000LL);
    SmKmUnlockMdl(*VirtualLockedRegion);
    SmFpFree(*(_QWORD *)(a1 + 4928), 2LL, a1 + 4816, *VirtualLockedRegion);
    *VirtualLockedRegion = 0LL;
    LOWORD(v6) = -1;
    *(_QWORD *)(v7 + 8 * v10) &= ~0x8000000000000000uLL;
  }
  else
  {
    if ( (a6 & 2) != 0 )
    {
      LOWORD(v6) = 0x7FFF;
LABEL_10:
      _InterlockedAnd16((volatile signed __int16 *)(v7 + 8LL * a2), (unsigned __int16)v6);
      return (__int16)v6;
    }
    if ( (a6 & 1) != 0 )
      return (__int16)v6;
    if ( (*(_WORD *)(v7 + 8LL * a2) & 0x2000) != 0 && KeGetCurrentThread() == *(struct _KTHREAD **)(a1 + 4936) )
    {
      LOWORD(v6) = -8193;
      goto LABEL_10;
    }
    LOWORD(v6) = _InterlockedDecrement16((volatile signed __int16 *)(v7 + 8LL * a2));
    if ( ((unsigned __int16)v6 & 0x1FFF) == 0 )
      LOWORD(v6) = SmAcquireReleaseCharges(v9, 1, 1LL);
  }
  return (__int16)v6;
}
