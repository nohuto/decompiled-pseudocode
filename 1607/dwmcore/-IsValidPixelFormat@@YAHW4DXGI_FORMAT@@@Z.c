/*
 * XREFs of ?IsValidPixelFormat@@YAHW4DXGI_FORMAT@@@Z @ 0x1800B1E94
 * Callers:
 *     ?IsValidPixelFormatInfo@@YA_NPEBUPixelFormatInfo@@@Z @ 0x1800B1E34 (-IsValidPixelFormatInfo@@YA_NPEBUPixelFormatInfo@@@Z.c)
 *     ?UpdatePixelFormatInfo@COffScreenRenderTarget@@IEAAJW4DXGI_FORMAT@@@Z @ 0x18011F494 (-UpdatePixelFormatInfo@COffScreenRenderTarget@@IEAAJW4DXGI_FORMAT@@@Z.c)
 *     ?CalcPixelFormatInfo@CSectionBitmapRealization@@AEAAJXZ @ 0x18018E728 (-CalcPixelFormatInfo@CSectionBitmapRealization@@AEAAJXZ.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall IsValidPixelFormat(int a1)
{
  if ( a1 <= 61 )
    return a1 == 61 || a1 == 2 || a1 > 9 && (a1 <= 11 || a1 == 24 || a1 == 28 || a1 == 49);
  return a1 == 65 || a1 > 86 && (a1 <= 88 || a1 == 103 || a1 > 105 && a1 <= 107);
}
