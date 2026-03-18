/*
 * XREFs of ?IsValid@CHwTextureRenderTarget@@UEBA_NXZ @ 0x180083060
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall CHwTextureRenderTarget::IsValid(CHwTextureRenderTarget *this)
{
  return *(_BYTE *)(*((_QWORD *)this + 24) + 76LL);
}
