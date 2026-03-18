/*
 * XREFs of ?CopyPixels@CBitmap@@WBI@EAAJPEBUWICRect@@IIPEAE@Z @ 0x180099E50
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CBitmap::CopyPixels(
        __int64 a1,
        const struct WICRect *a2,
        unsigned int a3,
        unsigned int a4,
        unsigned __int8 *a5)
{
  return CBitmap::CopyPixels((CBitmap *)(a1 - 24), a2, a3, a4, a5);
}
