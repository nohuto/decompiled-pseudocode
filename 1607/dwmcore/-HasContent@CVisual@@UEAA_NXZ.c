/*
 * XREFs of ?HasContent@CVisual@@UEAA_NXZ @ 0x18004FDC0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall CVisual::HasContent(CVisual *this)
{
  return *((_QWORD *)this + 38) != 0LL;
}
