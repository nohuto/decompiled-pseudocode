/*
 * XREFs of ?GetID@DWMCursor@@UEAA?AUCursorId@@XZ @ 0x18001EF00
 * Callers:
 *     ??1DWMCursor@@MEAA@XZ @ 0x18001F194 (--1DWMCursor@@MEAA@XZ.c)
 * Callees:
 *     <none>
 */

_OWORD *__fastcall DWMCursor::GetID(__int64 a1, _OWORD *a2)
{
  _OWORD *result; // rax

  result = a2;
  *a2 = *(_OWORD *)(a1 + 56);
  return result;
}
