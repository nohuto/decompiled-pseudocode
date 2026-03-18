/*
 * XREFs of ?GetTextureFormat@CDxHandleDecodeBitmapRealization@@UEAA?AW4DXGI_FORMAT@@XZ @ 0x18015E890
 * Callers:
 *     <none>
 * Callees:
 *     ?EnsureVidMemOnlyTexture@CDxHandleDecodeBitmapRealization@@IEAAJXZ @ 0x18015F6E0 (-EnsureVidMemOnlyTexture@CDxHandleDecodeBitmapRealization@@IEAAJXZ.c)
 */

__int64 __fastcall CDxHandleDecodeBitmapRealization::GetTextureFormat(CDxHandleDecodeBitmapRealization *this)
{
  unsigned int v2; // ebx

  v2 = 0;
  if ( (int)CDxHandleDecodeBitmapRealization::EnsureVidMemOnlyTexture((CDxHandleDecodeBitmapRealization *)((char *)this - 112)) >= 0 )
    return *(unsigned int *)(*((_QWORD *)this + 43) + 152LL);
  return v2;
}
