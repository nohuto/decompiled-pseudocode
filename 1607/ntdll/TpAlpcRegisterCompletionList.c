/*
 * XREFs of TpAlpcRegisterCompletionList @ 0x180065310
 * Callers:
 *     <none>
 * Callees:
 *     TppAlpcpValidateAlpc @ 0x18006557C (TppAlpcpValidateAlpc.c)
 *     TppRaiseInvalidParameter @ 0x1800FE5C4 (TppRaiseInvalidParameter.c)
 */

__int64 __fastcall TpAlpcRegisterCompletionList(__int64 a1)
{
  __int64 v2; // rcx

  if ( !(unsigned int)TppAlpcpValidateAlpc(a1, 0LL, 1LL) || (*(_BYTE *)(a1 + 288) & 1) == 0 )
    TppRaiseInvalidParameter(v2);
  _InterlockedExchange((volatile __int32 *)(a1 + 284), 0);
  *(_DWORD *)(a1 + 288) |= 2u;
  return TppFastAlpcAdjustConcurrencyCount(a1);
}
