/*
 * XREFs of SmKmStoreHelperWaitForCommand @ 0x140147A68
 * Callers:
 *     SmKmStoreHelperSendCommand @ 0x1400DAA14 (SmKmStoreHelperSendCommand.c)
 *     ?SmStHelperSendCommand@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@W4_SMKM_STORE_HELPER_COMMAND@@PEAU_SMKM_STORE_HELPER_PARAMS@@K@Z @ 0x140147898 (-SmStHelperSendCommand@-$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@W4_SMKM_STORE_HELPER_COMMAND@@PEAU_SM.c)
 *     ?SmStCheckLockInProgressRegionComplete@?$SMKM_STORE@USM_TRAITS@@@@SAKPEAU1@PEAT_SM_VIRTUAL_REGION@@K@Z @ 0x140147CC8 (-SmStCheckLockInProgressRegionComplete@-$SMKM_STORE@USM_TRAITS@@@@SAKPEAU1@PEAT_SM_VIRTUAL_REGIO.c)
 * Callees:
 *     KeResetEvent @ 0x1400484D0 (KeResetEvent.c)
 *     KeWaitForSingleObject @ 0x14004F100 (KeWaitForSingleObject.c)
 */

NTSTATUS __fastcall SmKmStoreHelperWaitForCommand(__int64 a1, __int64 a2, LARGE_INTEGER *a3, int a4)
{
  NTSTATUS result; // eax
  signed __int32 v9; // eax

  while ( 1 )
  {
    result = KeWaitForSingleObject((PVOID)(a1 + 32), Executive, 0, 0, a3);
    if ( !result )
      break;
    if ( !a4 )
      return result;
    v9 = *(_DWORD *)(a1 + 56);
    if ( (v9 & 1) == 0 && (_InterlockedCompareExchange((volatile signed __int32 *)(a1 + 56), v9 | 2, v9) & 1) == 0 )
      return -1073741536;
  }
  KeResetEvent((PRKEVENT)(a1 + 32));
  if ( a2 )
  {
    *(_OWORD *)a2 = *(_OWORD *)(a1 + 64);
    *(_OWORD *)(a2 + 16) = *(_OWORD *)(a1 + 80);
    *(_QWORD *)(a2 + 32) = *(_QWORD *)(a1 + 96);
  }
  result = (*(_BYTE *)(a1 + 56) & 2) != 0 ? 0xC0000120 : 0;
  *(_DWORD *)(a1 + 56) = 0;
  return result;
}
