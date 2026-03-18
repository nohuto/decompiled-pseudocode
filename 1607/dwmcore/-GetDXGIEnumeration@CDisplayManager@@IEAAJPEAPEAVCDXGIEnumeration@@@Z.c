/*
 * XREFs of ?GetDXGIEnumeration@CDisplayManager@@IEAAJPEAPEAVCDXGIEnumeration@@@Z @ 0x1800386BC
 * Callers:
 *     ?EnsureDXGIEnumeration@CD3DDeviceManager@@AEAAJXZ @ 0x180035C84 (-EnsureDXGIEnumeration@CD3DDeviceManager@@AEAAJXZ.c)
 *     ?EnsureAdapterInfo@CSurfaceManager@@AEAAJXZ @ 0x180037258 (-EnsureAdapterInfo@CSurfaceManager@@AEAAJXZ.c)
 *     ?BitmapResourceToD2DBitmap@CDrawingContext@@QEAAJPEAVIBitmapResource@@PEBV?$CMatrix@UBaseSampling@CoordinateSpace@@ULocalRenderingHPC@2@@@_NPEAVCColorKey@@PEAPEAUID2D1Bitmap1@@@Z @ 0x180064710 (-BitmapResourceToD2DBitmap@CDrawingContext@@QEAAJPEAVIBitmapResource@@PEBV-$CMatrix@UBaseSamplin.c)
 *     ?BeginFrame@CDrawingContext@@QEAAJPEAVIRenderTarget@@PEBU_D3DCOLORVALUE@@_NPEAV?$CMatrix@UPageInPixels@CoordinateSpace@@UDeviceHPC@2@@@PEAV?$TValueResource@UMilColorTransform@@UMILCMD_COLORTRANSFORMRESOURCE@@$0DF@@@2PEAVCHwndRenderTarget@@@Z @ 0x18006C640 (-BeginFrame@CDrawingContext@@QEAAJPEAVIRenderTarget@@PEBU_D3DCOLORVALUE@@_NPEAV-$CMatrix@UPageIn.c)
 * Callees:
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x180038B54 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?CreateD3DObjects@CD3DModuleLoader@@CAJPEAPEAVCDXGIEnumeration@@@Z @ 0x1800B6DA4 (-CreateD3DObjects@CD3DModuleLoader@@CAJPEAPEAVCDXGIEnumeration@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CDisplayManager::GetDXGIEnumeration(CDisplayManager *this, struct CDXGIEnumeration **a2)
{
  unsigned int v2; // ebx
  CDXGIEnumeration *v4; // rcx
  int D3DObjects; // eax
  _RTL_CRITICAL_SECTION *v7; // [rsp+40h] [rbp+8h] BYREF

  v2 = 0;
  *a2 = 0LL;
  v7 = &g_DisplayManager;
  EnterCriticalSection(&g_DisplayManager);
  v4 = qword_1801EFD30;
  if ( !qword_1801EFD30 )
  {
    D3DObjects = CD3DModuleLoader::CreateD3DObjects(&qword_1801EFD30);
    v2 = D3DObjects;
    if ( D3DObjects < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, D3DObjects, 0x191u);
      goto LABEL_3;
    }
    v4 = qword_1801EFD30;
  }
  (**(void (__fastcall ***)(CDXGIEnumeration *))v4)(v4);
  *a2 = qword_1801EFD30;
LABEL_3:
  CGuard<CDwmCS>::~CGuard<CDwmCS>(&v7);
  return v2;
}
