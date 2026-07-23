/*
 * XREFs of ?SmStHelperSendCommand@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@W4_SMKM_STORE_HELPER_COMMAND@@PEAU_SMKM_STORE_HELPER_PARAMS@@K@Z @ 0x14011F278
 * Callers:
 *     ?SmStCompareRegionData@?$SMKM_STORE@USM_TRAITS@@@@SAKPEAU1@PEAU_SM_COMPARE_DATA_PARAMS@@@Z @ 0x14011EF64 (-SmStCompareRegionData@-$SMKM_STORE@USM_TRAITS@@@@SAKPEAU1@PEAU_SM_COMPARE_DATA_PARAMS@@@Z.c)
 *     ?SmStMapVirtualRegion@?$SMKM_STORE@USM_TRAITS@@@@SAPEAXPEAU1@KKKK@Z @ 0x14011F090 (-SmStMapVirtualRegion@-$SMKM_STORE@USM_TRAITS@@@@SAPEAXPEAU1@KKKK@Z.c)
 *     ?SmStAllocateVirtualRegion@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@K@Z @ 0x14011F4AC (-SmStAllocateVirtualRegion@-$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@K@Z.c)
 *     ?SmStReleaseVirtualRegion@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@KK@Z @ 0x140120598 (-SmStReleaseVirtualRegion@-$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@KK@Z.c)
 * Callees:
 *     ?SmStReleaseStoreLockExclusive@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@@Z @ 0x1400039A4 (-SmStReleaseStoreLockExclusive@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@@Z.c)
 *     ?SmStAcquireStoreLockExclusive@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@@Z @ 0x1400039F0 (-SmStAcquireStoreLockExclusive@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@@Z.c)
 *     SmKmStoreHelperSendCommand @ 0x140003D80 (SmKmStoreHelperSendCommand.c)
 *     SmKmStoreHelperWaitForCommand @ 0x14011F350 (SmKmStoreHelperWaitForCommand.c)
 */

__int64 __fastcall SMKM_STORE<SM_TRAITS>::SmStHelperSendCommand(__int64 a1, int a2, _OWORD *a3, unsigned __int8 a4)
{
  __int64 v4; // rbp
  unsigned int v8; // esi
  __int64 v9; // rax
  __int64 *v10; // rsi
  __int64 v12; // [rsp+20h] [rbp-28h] BYREF

  v4 = a1 + 6200;
  if ( a2 != 4 )
    v4 = a1 + 6072;
  v8 = SmKmStoreHelperSendCommand(v4, a2, a3, a4 & 1);
  if ( v8 != -1073741650 )
  {
    if ( (a4 & 2) != 0 )
    {
      v10 = 0LL;
    }
    else
    {
      v9 = -5000000LL;
      if ( *(_BYTE *)(a1 + 5862) <= 1u )
        v9 = -1000000LL;
      v12 = v9;
      if ( (a4 & 8) != 0 )
        v12 = v9 / 4;
      v10 = &v12;
    }
    SMKM_STORE<SM_TRAITS>::SmStReleaseStoreLockExclusive(a1);
    v8 = SmKmStoreHelperWaitForCommand(v4, a3, v10, (a4 >> 2) & 1);
    SMKM_STORE<SM_TRAITS>::SmStAcquireStoreLockExclusive(a1);
  }
  return v8;
}
