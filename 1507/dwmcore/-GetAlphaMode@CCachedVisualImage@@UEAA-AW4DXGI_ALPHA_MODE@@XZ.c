/*
 * XREFs of ?GetAlphaMode@CCachedVisualImage@@UEAA?AW4DXGI_ALPHA_MODE@@XZ @ 0x18000EE80
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
enum DXGI_ALPHA_MODE __fastcall CCachedVisualImage::GetAlphaMode(CCachedVisualImage *this)
{
  return CCachedVisualImage::GetAlphaModeInternal(this);
}
