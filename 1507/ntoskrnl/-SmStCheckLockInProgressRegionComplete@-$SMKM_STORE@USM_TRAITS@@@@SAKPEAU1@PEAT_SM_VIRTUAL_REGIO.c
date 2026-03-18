/*
 * XREFs of ?SmStCheckLockInProgressRegionComplete@?$SMKM_STORE@USM_TRAITS@@@@SAKPEAU1@PEAT_SM_VIRTUAL_REGION@@K@Z @ 0x140147CC8
 * Callers:
 *     ?SmStReleaseVirtualRegion@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@KK@Z @ 0x14014753C (-SmStReleaseVirtualRegion@-$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@KK@Z.c)
 *     ?SmStMapVirtualRegion@?$SMKM_STORE@USM_TRAITS@@@@SAPEAXPEAU1@KKKK@Z @ 0x1401476BC (-SmStMapVirtualRegion@-$SMKM_STORE@USM_TRAITS@@@@SAPEAXPEAU1@KKKK@Z.c)
 * Callees:
 *     SmKmStoreHelperWaitForCommand @ 0x140147A68 (SmKmStoreHelperWaitForCommand.c)
 */

__int64 __fastcall SMKM_STORE<SM_TRAITS>::SmStCheckLockInProgressRegionComplete(__int64 a1, __int64 a2, int a3)
{
  __int64 v5; // rcx
  int v6; // eax

  if ( *(_QWORD *)(a1 + 5024) != a2 )
    return 1LL;
  v5 = a1 + 4816;
  v6 = *(_DWORD *)(v5 + 56);
  if ( v6 && (a3 || (v6 & 1) != 0) && SmKmStoreHelperWaitForCommand(v5, 0LL, 0LL, 0) == -1073741536 )
  {
    *(_QWORD *)(a1 + 5024) = 0LL;
    return 1LL;
  }
  return 0LL;
}
