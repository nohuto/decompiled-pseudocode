/*
 * XREFs of sub_1407EE824 @ 0x1407EE824
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

_DWORD **__fastcall sub_1407EE824(char a1, __int64 a2)
{
  _DWORD **result; // rax

  if ( a1 )
  {
    result = *(_DWORD ***)(a2 + 64);
    ++**result;
  }
  return result;
}
