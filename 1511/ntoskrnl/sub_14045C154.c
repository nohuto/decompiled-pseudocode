/*
 * XREFs of sub_14045C154 @ 0x14045C154
 * Callers:
 *     sub_140459304 @ 0x140459304 (sub_140459304.c)
 *     sub_14045C114 @ 0x14045C114 (sub_14045C114.c)
 * Callees:
 *     <none>
 */

_WORD *__fastcall sub_14045C154(__int64 a1)
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
