/*
 * XREFs of sub_1404D8C64 @ 0x1404D8C64
 * Callers:
 *     sub_1404D8C24 @ 0x1404D8C24 (sub_1404D8C24.c)
 *     ExpHwidGetDevicePropertyData @ 0x1404DA114 (ExpHwidGetDevicePropertyData.c)
 * Callees:
 *     <none>
 */

_WORD *__fastcall sub_1404D8C64(__int64 a1)
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
