/*
 * XREFs of ?Init@CHwDisplayRenderTarget@@MEAAJAEBU_GUID@@PEAUHWND__@@PEBVCDisplay@@U?$TMILFlagsEnum@W4FlagsEnum@MilRTInitialization@@@@@Z @ 0x18008E90C
 * Callers:
 *     ?Init@CHwFullScreenRenderTarget@@MEAAJAEBU_GUID@@PEAUHWND__@@PEBVCDisplay@@U?$TMILFlagsEnum@W4FlagsEnum@MilRTInitialization@@@@@Z @ 0x18007BA20 (-Init@CHwFullScreenRenderTarget@@MEAAJAEBU_GUID@@PEAUHWND__@@PEBVCDisplay@@U-$TMILFlagsEnum@W4Fl.c)
 *     ?Init@CAnalogDisplayRenderTarget@@MEAAJAEBU_GUID@@PEAUHWND__@@PEBVCDisplay@@U?$TMILFlagsEnum@W4FlagsEnum@MilRTInitialization@@@@@Z @ 0x180167D20 (-Init@CAnalogDisplayRenderTarget@@MEAAJAEBU_GUID@@PEAUHWND__@@PEBVCDisplay@@U-$TMILFlagsEnum@W4F.c)
 * Callees:
 *     ?UpdatePixelFormatInfo@CHwSurfaceRenderTarget@@QEAAXPEAVIPixelFormat@@@Z @ 0x18002DA30 (-UpdatePixelFormatInfo@CHwSurfaceRenderTarget@@QEAAXPEAVIPixelFormat@@@Z.c)
 */

__int64 __fastcall CHwDisplayRenderTarget::Init(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int a5)
{
  bool v5; // zf

  v5 = *(_QWORD *)(a1 + 168) == 0LL;
  *(_DWORD *)(a1 + 320) = a5;
  *(_QWORD *)(a1 + 312) = a3;
  *(_QWORD *)(a1 + 200) = a4;
  if ( !v5 )
    CHwSurfaceRenderTarget::UpdatePixelFormatInfo((CHwSurfaceRenderTarget *)a1, (struct IPixelFormat *)(a1 + 176));
  return 0LL;
}
