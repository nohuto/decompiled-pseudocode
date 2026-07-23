/*
 * XREFs of TpAlpcUnregisterCompletionList @ 0x180079540
 * Callers:
 *     <none>
 * Callees:
 *     TppAlpcpValidateAlpc @ 0x18007AC8C (TppAlpcpValidateAlpc.c)
 *     TppRaiseInvalidParameter @ 0x1800F5C58 (TppRaiseInvalidParameter.c)
 */

__int64 __fastcall TpAlpcUnregisterCompletionList(__int64 a1)
{
  __int64 result; // rax
  __int64 v3; // rdx
  __int64 v4; // rcx

  result = TppAlpcpValidateAlpc(a1, 0LL, 1LL);
  if ( !(_DWORD)result || (*(_BYTE *)(a1 + 280) & 1) == 0 )
    result = TppRaiseInvalidParameter(v4, v3);
  *(_DWORD *)(a1 + 280) &= ~2u;
  return result;
}
