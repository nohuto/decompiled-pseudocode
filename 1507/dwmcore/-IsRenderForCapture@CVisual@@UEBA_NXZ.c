/*
 * XREFs of ?IsRenderForCapture@CVisual@@UEBA_NXZ @ 0x18009A630
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall CVisual::IsRenderForCapture(CVisual *this)
{
  return *((_BYTE *)this + 88) >> 7;
}
