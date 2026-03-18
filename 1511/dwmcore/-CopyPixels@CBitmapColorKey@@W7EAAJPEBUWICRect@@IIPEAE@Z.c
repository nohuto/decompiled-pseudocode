/*
 * XREFs of ?CopyPixels@CBitmapColorKey@@W7EAAJPEBUWICRect@@IIPEAE@Z @ 0x1800BE3C0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

int __fastcall CBitmapColorKey::CopyPixels(
        __int64 a1,
        const struct WICRect *a2,
        unsigned int a3,
        unsigned int a4,
        unsigned __int8 *a5)
{
  return CBitmapColorKey::CopyPixels((CBitmapColorKey *)(a1 - 8), a2, a3, a4, a5);
}
