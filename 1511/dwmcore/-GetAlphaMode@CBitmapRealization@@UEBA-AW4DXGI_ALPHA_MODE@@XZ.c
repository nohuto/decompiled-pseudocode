/*
 * XREFs of ?GetAlphaMode@CBitmapRealization@@UEBA?AW4DXGI_ALPHA_MODE@@XZ @ 0x1800833F0
 * Callers:
 *     ?IsOpaque@CCompositionSurfaceBitmap@@UEBA_NXZ @ 0x18002E670 (-IsOpaque@CCompositionSurfaceBitmap@@UEBA_NXZ.c)
 *     ?GetD2DAlphaMode@CDxHandleBitmapRealization@@IEBA?AW4D2D1_ALPHA_MODE@@XZ @ 0x180032650 (-GetD2DAlphaMode@CDxHandleBitmapRealization@@IEBA-AW4D2D1_ALPHA_MODE@@XZ.c)
 *     ?UpdateAttributes@CDxHandleBitmapRealization@@UEAAXAEBUCSM_BUFFER_ATTRIBUTES@@@Z @ 0x180032C50 (-UpdateAttributes@CDxHandleBitmapRealization@@UEAAXAEBUCSM_BUFFER_ATTRIBUTES@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CBitmapRealization::GetAlphaMode(CBitmapRealization *this)
{
  __int64 result; // rax

  result = 3LL;
  if ( *((_DWORD *)this + 4) )
    return *((unsigned int *)this + 4);
  return result;
}
