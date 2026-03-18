/*
 * XREFs of ?IsEmptyDrawing@CPrimitiveGroup@@UEAA_NXZ @ 0x18006E190
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall CPrimitiveGroup::IsEmptyDrawing(CPrimitiveGroup *this)
{
  return *((_QWORD *)this + 47) == 0LL;
}
