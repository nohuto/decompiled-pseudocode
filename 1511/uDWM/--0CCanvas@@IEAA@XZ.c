/*
 * XREFs of ??0CCanvas@@IEAA@XZ @ 0x18001F8A0
 * Callers:
 *     ??0CAccent@@IEAA@XZ @ 0x18001585C (--0CAccent@@IEAA@XZ.c)
 * Callees:
 *     ??0CVisual@@IEAA@XZ @ 0x180022088 (--0CVisual@@IEAA@XZ.c)
 */

CCanvas *__fastcall CCanvas::CCanvas(CCanvas *this)
{
  CCanvas *v1; // rcx
  CCanvas *result; // rax

  CVisual::CVisual(this);
  result = v1;
  *(_QWORD *)v1 = &CCanvas::`vftable';
  return result;
}
