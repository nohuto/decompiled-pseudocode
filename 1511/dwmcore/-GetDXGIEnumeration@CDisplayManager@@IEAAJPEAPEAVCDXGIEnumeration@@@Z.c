/*
 * XREFs of ?GetDXGIEnumeration@CDisplayManager@@IEAAJPEAPEAVCDXGIEnumeration@@@Z @ 0x18006F794
 * Callers:
 *     ?BeginFrame@CDrawingContext@@QEAAJPEAVIRenderTarget@@PEBU_D3DCOLORVALUE@@_NPEAV?$CMatrix@UPageInPixels@CoordinateSpace@@UDeviceHPC@2@@@PEAV?$TValueResource@UMilColorTransform@@UMILCMD_COLORTRANSFORMRESOURCE@@$0DE@@@2PEAVCHwndRenderTarget@@@Z @ 0x180044090 (-BeginFrame@CDrawingContext@@QEAAJPEAVIRenderTarget@@PEBU_D3DCOLORVALUE@@_NPEAV-$CMatrix@UPageIn.c)
 *     ?EnsureAdapterInfo@CSurfaceManager@@AEAAJXZ @ 0x18006CE74 (-EnsureAdapterInfo@CSurfaceManager@@AEAAJXZ.c)
 *     ?GetD2DBitmapFromBitmapSource@@YAJPEAVIBitmapSource@@PEBUPixelFormatInfo@@PEBUBitmapSourceInfo@@AEBU_GUID@@PEAPEAUID2D1Bitmap1@@@Z @ 0x180070F30 (-GetD2DBitmapFromBitmapSource@@YAJPEAVIBitmapSource@@PEBUPixelFormatInfo@@PEBUBitmapSourceInfo@@.c)
 *     ?EnsureDXGIEnumeration@CD3DDeviceManager@@AEAAJXZ @ 0x1800723B8 (-EnsureDXGIEnumeration@CD3DDeviceManager@@AEAAJXZ.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?EnsureDXGIEnumeration@CDisplayManager@@AEAAJXZ @ 0x18006F828 (-EnsureDXGIEnumeration@CDisplayManager@@AEAAJXZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ??1?$CGuard@VCCriticalSection@@@@QEAA@XZ @ 0x1800A1C40 (--1-$CGuard@VCCriticalSection@@@@QEAA@XZ.c)
 */

__int64 __fastcall CDisplayManager::GetDXGIEnumeration(CDisplayManager *this, struct CDXGIEnumeration **a2)
{
  int v3; // eax
  unsigned int v4; // esi
  _RTL_CRITICAL_SECTION *v6; // [rsp+40h] [rbp+8h] BYREF

  *a2 = 0LL;
  v6 = &g_DisplayManager;
  EnterCriticalSection(&g_DisplayManager);
  v3 = CDisplayManager::EnsureDXGIEnumeration((CDisplayManager *)&g_DisplayManager);
  v4 = v3;
  if ( v3 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v3, 0xA9u);
  }
  else
  {
    (**(void (__fastcall ***)(__int64))qword_1801A39F8)(qword_1801A39F8);
    *a2 = (struct CDXGIEnumeration *)qword_1801A39F8;
  }
  CGuard<CCriticalSection>::~CGuard<CCriticalSection>(&v6);
  return v4;
}
