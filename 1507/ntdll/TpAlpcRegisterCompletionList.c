/*
 * XREFs of TpAlpcRegisterCompletionList @ 0x180079580
 * Callers:
 *     <none>
 * Callees:
 *     TppAlpcpValidateAlpc @ 0x18007AC8C (TppAlpcpValidateAlpc.c)
 *     TppRaiseInvalidParameter @ 0x1800F5C58 (TppRaiseInvalidParameter.c)
 */

__int64 __fastcall TpAlpcRegisterCompletionList(__int64 a1)
{
  __int64 v2; // rdx
  __int64 v3; // rcx

  if ( !(unsigned int)TppAlpcpValidateAlpc(a1, 0LL, 1LL) || (*(_BYTE *)(a1 + 280) & 1) == 0 )
    TppRaiseInvalidParameter(v3, v2);
  _InterlockedExchange((volatile __int32 *)(a1 + 276), 0);
  *(_DWORD *)(a1 + 280) |= 2u;
  return TppFastAlpcAdjustConcurrencyCount(a1);
}
