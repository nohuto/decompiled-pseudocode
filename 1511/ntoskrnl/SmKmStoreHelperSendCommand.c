/*
 * XREFs of SmKmStoreHelperSendCommand @ 0x1400F7D9C
 * Callers:
 *     SmKmStoreHelperCleanup @ 0x1400F7D54 (SmKmStoreHelperCleanup.c)
 *     ?SmStHelperSendCommand@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@W4_SMKM_STORE_HELPER_COMMAND@@PEAU_SMKM_STORE_HELPER_PARAMS@@K@Z @ 0x140110D84 (-SmStHelperSendCommand@-$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@W4_SMKM_STORE_HELPER_COMMAND@@PEAU_SM.c)
 * Callees:
 *     KeSetEvent @ 0x1400875D0 (KeSetEvent.c)
 *     SmKmStoreHelperWaitForCommand @ 0x140110EE4 (SmKmStoreHelperWaitForCommand.c)
 */

__int64 __fastcall SmKmStoreHelperSendCommand(__int64 a1, __int16 a2, __int64 a3, int a4)
{
  __int64 result; // rax
  int v6; // ecx

  result = 0LL;
  v6 = *(_DWORD *)(a1 + 56);
  if ( v6 )
  {
    if ( !a4 && (v6 & 1) == 0 )
      return 3221225646LL;
    result = SmKmStoreHelperWaitForCommand(a1, 0LL, 0LL, 0LL);
  }
  if ( (_DWORD)result != -1073741650 )
  {
    *(_WORD *)(a1 + 58) = a2;
    if ( a3 )
    {
      *(_OWORD *)(a1 + 64) = *(_OWORD *)a3;
      *(_OWORD *)(a1 + 80) = *(_OWORD *)(a3 + 16);
      *(_QWORD *)(a1 + 96) = *(_QWORD *)(a3 + 32);
    }
    KeSetEvent((PRKEVENT)(a1 + 8), 0, 0);
    return 0LL;
  }
  return result;
}
