/*
 * XREFs of ?Release@CD3DResource@@WBI@EAAKXZ @ 0x18009AD90
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

unsigned int __fastcall CD3DResource::Release(__int64 a1)
{
  return CD3DSurface::Release((CD3DSurface *)(a1 - 24));
}
