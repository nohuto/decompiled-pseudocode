/*
 * XREFs of TpCallbackUnloadDllOnCompletion @ 0x180074DE0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall TpCallbackUnloadDllOnCompletion(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax

  if ( !a1 )
    return TppRaiseInvalidParameter(a1, a2, a3);
  result = a2 - 1;
  if ( (unsigned __int64)(a2 - 1) > 0xFFFFFFFFFFFFFFFDuLL || *(_QWORD *)(a1 + 200) )
    return TppRaiseInvalidParameter(a1, a2, a3);
  *(_QWORD *)(a1 + 200) = a2;
  *(_DWORD *)(a1 + 144) |= 0x80u;
  return result;
}
