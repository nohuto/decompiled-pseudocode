/*
 * XREFs of TpAlpcUnregisterCompletionList @ 0x1800652D0
 * Callers:
 *     <none>
 * Callees:
 *     TppAlpcpValidateAlpc @ 0x18006557C (TppAlpcpValidateAlpc.c)
 *     TppRaiseInvalidParameter @ 0x1800FE5C4 (TppRaiseInvalidParameter.c)
 */

__int64 __fastcall TpAlpcUnregisterCompletionList(__int64 a1)
{
  __int64 result; // rax
  __int64 v3; // rcx

  result = TppAlpcpValidateAlpc(a1, 0LL, 1LL);
  if ( !(_DWORD)result || (*(_BYTE *)(a1 + 288) & 1) == 0 )
    result = TppRaiseInvalidParameter(v3);
  *(_DWORD *)(a1 + 288) &= ~2u;
  return result;
}
