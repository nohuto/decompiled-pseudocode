/*
 * XREFs of ?SmStCheckLockInProgressRegionComplete@?$SMKM_STORE@USM_TRAITS@@@@SAKPEAU1@PEAT_SM_VIRTUAL_REGION@@K@Z @ 0x1401206CC
 * Callers:
 *     ?SmStMapVirtualRegion@?$SMKM_STORE@USM_TRAITS@@@@SAPEAXPEAU1@KKKK@Z @ 0x14011F090 (-SmStMapVirtualRegion@-$SMKM_STORE@USM_TRAITS@@@@SAPEAXPEAU1@KKKK@Z.c)
 *     ?SmStReleaseVirtualRegion@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@KK@Z @ 0x140120598 (-SmStReleaseVirtualRegion@-$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@KK@Z.c)
 * Callees:
 *     SmKmStoreHelperCheckWaitCommand @ 0x140003DF4 (SmKmStoreHelperCheckWaitCommand.c)
 */

__int64 __fastcall SMKM_STORE<SM_TRAITS>::SmStCheckLockInProgressRegionComplete(__int64 a1, __int64 a2, int a3)
{
  if ( *(_QWORD *)(a1 + 6416) != a2 )
    return 1LL;
  if ( (unsigned int)SmKmStoreHelperCheckWaitCommand(a1 + 6200, a3) == -1073741536 )
  {
    *(_QWORD *)(a1 + 6416) = 0LL;
    return 1LL;
  }
  return 0LL;
}
