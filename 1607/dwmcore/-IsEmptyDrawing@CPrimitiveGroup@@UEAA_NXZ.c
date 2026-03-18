/*
 * XREFs of ?IsEmptyDrawing@CPrimitiveGroup@@UEAA_NXZ @ 0x18004D5D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall CPrimitiveGroup::IsEmptyDrawing(CPrimitiveGroup *this)
{
  return *((_QWORD *)this + 57) == 0LL;
}
