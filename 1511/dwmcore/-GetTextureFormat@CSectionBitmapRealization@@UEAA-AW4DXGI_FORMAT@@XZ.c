/*
 * XREFs of ?GetTextureFormat@CSectionBitmapRealization@@UEAA?AW4DXGI_FORMAT@@XZ @ 0x18015C7B0
 * Callers:
 *     <none>
 * Callees:
 *     ?CalcPixelFormatInfo@CSectionBitmapRealization@@AEAAJXZ @ 0x18015C258 (-CalcPixelFormatInfo@CSectionBitmapRealization@@AEAAJXZ.c)
 */

__int64 __fastcall CSectionBitmapRealization::GetTextureFormat(CSectionBitmapRealization *this)
{
  unsigned int v2; // ebx

  v2 = 0;
  if ( (int)CSectionBitmapRealization::CalcPixelFormatInfo((CSectionBitmapRealization *)((char *)this - 112)) >= 0 )
    return *((unsigned int *)this + 94);
  return v2;
}
