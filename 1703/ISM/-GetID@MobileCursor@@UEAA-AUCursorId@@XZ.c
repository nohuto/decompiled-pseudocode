/*
 * XREFs of ?GetID@MobileCursor@@UEAA?AUCursorId@@XZ @ 0x1800269D0
 * Callers:
 *     ??1MobileCursor@@MEAA@XZ @ 0x180026BA4 (--1MobileCursor@@MEAA@XZ.c)
 * Callees:
 *     <none>
 */

_OWORD *__fastcall MobileCursor::GetID(__int64 a1, _OWORD *a2)
{
  _OWORD *result; // rax

  result = a2;
  *a2 = *(_OWORD *)(a1 + 40);
  return result;
}
