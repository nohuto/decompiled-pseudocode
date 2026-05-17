/*
 * XREFs of TpCallbackReleaseMutexOnCompletion @ 0x1800F59A0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall TpCallbackReleaseMutexOnCompletion(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax

  if ( !a1 )
    return TppRaiseInvalidParameter(a1, a2, a3);
  result = a2 - 1;
  if ( (unsigned __int64)(a2 - 1) > 0xFFFFFFFFFFFFFFFDuLL || *(_DWORD *)(a1 + 152) )
    return TppRaiseInvalidParameter(a1, a2, a3);
  *(_DWORD *)(a1 + 152) = a2;
  *(_DWORD *)(a1 + 144) |= 2u;
  return result;
}
