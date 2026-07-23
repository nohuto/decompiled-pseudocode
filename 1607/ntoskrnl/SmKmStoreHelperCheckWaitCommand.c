/*
 * XREFs of SmKmStoreHelperCheckWaitCommand @ 0x140003DF4
 * Callers:
 *     SmKmStoreHelperSendCommand @ 0x140003D80 (SmKmStoreHelperSendCommand.c)
 *     ?SmStCheckLockInProgressRegionComplete@?$SMKM_STORE@USM_TRAITS@@@@SAKPEAU1@PEAT_SM_VIRTUAL_REGION@@K@Z @ 0x1401206CC (-SmStCheckLockInProgressRegionComplete@-$SMKM_STORE@USM_TRAITS@@@@SAKPEAU1@PEAT_SM_VIRTUAL_REGIO.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SmKmStoreHelperCheckWaitCommand(__int64 a1, int a2)
{
  int v2; // r8d
  __int64 result; // rax

  v2 = *(_DWORD *)(a1 + 56);
  result = 0LL;
  if ( v2 )
  {
    if ( a2 || (v2 & 1) != 0 )
      return SmKmStoreHelperWaitForCommand(a1, 0LL, 0LL, 0LL);
    else
      return 3221225646LL;
  }
  return result;
}
