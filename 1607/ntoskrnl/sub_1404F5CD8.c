/*
 * XREFs of sub_1404F5CD8 @ 0x1404F5CD8
 * Callers:
 *     sub_1404F5C98 @ 0x1404F5C98 (sub_1404F5C98.c)
 *     ExpHwidGetDevicePropertyData @ 0x1404F7188 (ExpHwidGetDevicePropertyData.c)
 * Callees:
 *     <none>
 */

_WORD *__fastcall sub_1404F5CD8(__int64 a1)
{
  _WORD *result; // rax

  result = *(_WORD **)(a1 + 8);
  if ( result )
  {
    *(_DWORD *)(a1 + 4) = 0;
    *(_WORD *)a1 = 0;
    *result = 0;
  }
  return result;
}
