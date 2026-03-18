/*
 * XREFs of ?IsOfType@CPropertyBag@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x18008DA30
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z @ 0x18003CEA0 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall CPropertyBag::IsOfType(__int64 a1, int a2)
{
  return (unsigned int)(a2 - 111) <= 1;
}
