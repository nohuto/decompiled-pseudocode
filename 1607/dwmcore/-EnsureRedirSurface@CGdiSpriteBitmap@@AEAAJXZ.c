/*
 * XREFs of ?EnsureRedirSurface@CGdiSpriteBitmap@@AEAAJXZ @ 0x18002B014
 * Callers:
 *     ?NotifyDirty@CGdiSpriteBitmap@@UEAAJPEAVCResourceTable@@K_K@Z @ 0x18002A770 (-NotifyDirty@CGdiSpriteBitmap@@UEAAJPEAVCResourceTable@@K_K@Z.c)
 *     ?UpdateSurface@CGdiSpriteBitmap@@IEAAJW4DXGI_FORMAT@@@Z @ 0x18002B954 (-UpdateSurface@CGdiSpriteBitmap@@IEAAJW4DXGI_FORMAT@@@Z.c)
 *     ?ProcessUpdate@CGdiSpriteBitmap@@UEAAJPEBVCResourceTable@@PEBUMILCMD_GDISPRITEBITMAP@@@Z @ 0x18002BD00 (-ProcessUpdate@CGdiSpriteBitmap@@UEAAJPEBVCResourceTable@@PEBUMILCMD_GDISPRITEBITMAP@@@Z.c)
 *     ?HasValidDeviceBitmapObject@CGdiSpriteBitmap@@QEAA_NPEAPEAVCRedirectedGDISurface@@@Z @ 0x18014180C (-HasValidDeviceBitmapObject@CGdiSpriteBitmap@@QEAA_NPEAPEAVCRedirectedGDISurface@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?Create@CRedirectedGDISurface@@SAHPEAUHLSURF__@@PEAVCGdiSpriteBitmap@@PEAVCLegacySurfaceManager@@PEAPEAV1@@Z @ 0x1800B11E8 (-Create@CRedirectedGDISurface@@SAHPEAUHLSURF__@@PEAVCGdiSpriteBitmap@@PEAVCLegacySurfaceManager@.c)
 */

__int64 __fastcall CGdiSpriteBitmap::EnsureRedirSurface(CGdiSpriteBitmap *this)
{
  unsigned int v1; // ebx
  int v3; // eax

  v1 = 0;
  if ( !*((_QWORD *)this + 79) )
  {
    v3 = CRedirectedGDISurface::Create(
           *((HLSURF *)this + 27),
           this,
           (struct CLegacySurfaceManager *)(*(_QWORD *)(*((_QWORD *)this + 4) + 40LL) + 96LL),
           (struct CRedirectedGDISurface **)this + 79);
    v1 = v3;
    if ( v3 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v3, 0x629u);
  }
  return v1;
}
