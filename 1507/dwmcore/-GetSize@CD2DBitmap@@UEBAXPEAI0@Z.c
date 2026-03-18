/*
 * XREFs of ?GetSize@CD2DBitmap@@UEBAXPEAI0@Z @ 0x18001B7B0
 * Callers:
 *     ?GetSize@CDxHandleBitmapRealization@@UEBAXPEAI0@Z @ 0x18001E7A0 (-GetSize@CDxHandleBitmapRealization@@UEBAXPEAI0@Z.c)
 *     ?GetSize@CD2DBitmap@@W7EBAXPEAI0@Z @ 0x18009B540 (-GetSize@CD2DBitmap@@W7EBAXPEAI0@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CD2DBitmap::GetSize(CD2DBitmap *this, unsigned int *a2, unsigned int *a3)
{
  *a2 = *((_DWORD *)this + 16);
  *a3 = *((_DWORD *)this + 17);
}
