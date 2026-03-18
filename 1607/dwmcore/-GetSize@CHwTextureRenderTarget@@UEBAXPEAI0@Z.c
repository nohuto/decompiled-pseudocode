/*
 * XREFs of ?GetSize@CHwTextureRenderTarget@@UEBAXPEAI0@Z @ 0x1800C16D0
 * Callers:
 *     ?GetSize@CHwTextureRenderTarget@@W7EBAXPEAI0@Z @ 0x1800C18A0 (-GetSize@CHwTextureRenderTarget@@W7EBAXPEAI0@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CHwTextureRenderTarget::GetSize(CHwTextureRenderTarget *this, unsigned int *a2, unsigned int *a3)
{
  *a2 = *((_DWORD *)this - 44);
  *a3 = *((_DWORD *)this - 43);
}
