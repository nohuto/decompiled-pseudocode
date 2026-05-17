/*
 * XREFs of TpCallbackReleaseSemaphoreOnCompletion @ 0x1800F59E0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall TpCallbackReleaseSemaphoreOnCompletion(_DWORD *a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax

  if ( !a1 )
    return TppRaiseInvalidParameter(a1, a2, a3);
  result = a2 - 1;
  if ( (unsigned __int64)(a2 - 1) > 0xFFFFFFFFFFFFFFFDuLL || !(_DWORD)a3 || a1[39] )
    return TppRaiseInvalidParameter(a1, a2, a3);
  a1[36] |= 8u;
  a1[39] = a2;
  a1[40] = a3;
  return result;
}
