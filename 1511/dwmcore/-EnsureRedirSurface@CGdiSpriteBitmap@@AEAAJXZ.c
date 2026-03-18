/*
 * XREFs of ?EnsureRedirSurface@CGdiSpriteBitmap@@AEAAJXZ @ 0x180087750
 * Callers:
 *     ?ProcessUpdate@CGdiSpriteBitmap@@UEAAJPEBVCResourceTable@@PEBUMILCMD_GDISPRITEBITMAP@@@Z @ 0x1800862E0 (-ProcessUpdate@CGdiSpriteBitmap@@UEAAJPEBVCResourceTable@@PEBUMILCMD_GDISPRITEBITMAP@@@Z.c)
 *     ?NotifyDirty@CGdiSpriteBitmap@@UEAAJPEAVCResourceTable@@K_K@Z @ 0x180086E50 (-NotifyDirty@CGdiSpriteBitmap@@UEAAJPEAVCResourceTable@@K_K@Z.c)
 *     ?UpdateSurface@CGdiSpriteBitmap@@IEAAJW4DXGI_FORMAT@@@Z @ 0x180087F88 (-UpdateSurface@CGdiSpriteBitmap@@IEAAJW4DXGI_FORMAT@@@Z.c)
 *     ?HasValidDeviceBitmapObject@CGdiSpriteBitmap@@QEAA_NPEAPEAUIMilRedirectedGDISurface@@@Z @ 0x180124F2C (-HasValidDeviceBitmapObject@CGdiSpriteBitmap@@QEAA_NPEAPEAUIMilRedirectedGDISurface@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?Create@CRedirectedGDISurface@@SAHPEAUHLSURF__@@PEAVCGdiSpriteBitmap@@PEAVCLegacySurfaceManager@@PEAPEAV1@@Z @ 0x1800A54C8 (-Create@CRedirectedGDISurface@@SAHPEAUHLSURF__@@PEAVCGdiSpriteBitmap@@PEAVCLegacySurfaceManager@.c)
 */

__int64 __fastcall CGdiSpriteBitmap::EnsureRedirSurface(CGdiSpriteBitmap *this)
{
  unsigned int v1; // ebx
  int v3; // eax

  v1 = 0;
  if ( !*((_QWORD *)this + 70) )
  {
    v3 = CRedirectedGDISurface::Create(
           *((HLSURF *)this + 18),
           this,
           (struct CLegacySurfaceManager *)(*(_QWORD *)(*((_QWORD *)this + 4) + 40LL) + 96LL),
           (struct CRedirectedGDISurface **)this + 70);
    v1 = v3;
    if ( v3 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v3, 0x629u);
  }
  return v1;
}
