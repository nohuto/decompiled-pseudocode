/*
 * XREFs of ?Release@CCoRenderContent@@WCI@EAAKXZ @ 0x1800BD050
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

unsigned int __fastcall CCoRenderContent::Release(__int64 a1)
{
  return CDxHandleYUVBitmapRealization::Release((CDxHandleYUVBitmapRealization *)(a1 - 40));
}
