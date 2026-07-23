/*
 * XREFs of SmKmStoreHelperWaitForCommand @ 0x14011F350
 * Callers:
 *     ?SmStCleanup@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@@Z @ 0x140003B38 (-SmStCleanup@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@@Z.c)
 *     SmKmStoreHelperCheckWaitCommand @ 0x140003DF4 (SmKmStoreHelperCheckWaitCommand.c)
 *     ?SmStHelperSendCommand@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@W4_SMKM_STORE_HELPER_COMMAND@@PEAU_SMKM_STORE_HELPER_PARAMS@@K@Z @ 0x14011F278 (-SmStHelperSendCommand@-$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@W4_SMKM_STORE_HELPER_COMMAND@@PEAU_SM.c)
 * Callees:
 *     KeResetEvent @ 0x14002E1B0 (KeResetEvent.c)
 *     KeWaitForSingleObject @ 0x14005C400 (KeWaitForSingleObject.c)
 */

NTSTATUS __fastcall SmKmStoreHelperWaitForCommand(__int64 a1, _OWORD *a2, LARGE_INTEGER *a3, int a4)
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
    *a2 = *(_OWORD *)(a1 + 64);
    a2[1] = *(_OWORD *)(a1 + 80);
    a2[2] = *(_OWORD *)(a1 + 96);
  }
  result = (*(_BYTE *)(a1 + 56) & 2) != 0 ? 0xC0000120 : 0;
  *(_DWORD *)(a1 + 56) = 0;
  return result;
}
