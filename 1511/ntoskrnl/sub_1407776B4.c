/*
 * XREFs of sub_1407776B4 @ 0x1407776B4
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

_DWORD **__fastcall sub_1407776B4(char a1, __int64 a2)
{
  _DWORD **result; // rax

  if ( a1 )
  {
    result = *(_DWORD ***)(a2 + 64);
    ++**result;
  }
  return result;
}
