/*
 * XREFs of TpCallbackLeaveCriticalSectionOnCompletion @ 0x180079380
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall TpCallbackLeaveCriticalSectionOnCompletion(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax

  if ( !a1 || !a2 || *(_QWORD *)(a1 + 192) )
    return TppRaiseInvalidParameter(a1, a2, a3);
  *(_QWORD *)(a1 + 192) = a2;
  *(_DWORD *)(a1 + 144) |= 1u;
  return result;
}
