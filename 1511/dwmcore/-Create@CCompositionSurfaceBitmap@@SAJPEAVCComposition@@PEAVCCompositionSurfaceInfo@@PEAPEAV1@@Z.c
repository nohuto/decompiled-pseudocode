/*
 * XREFs of ?Create@CCompositionSurfaceBitmap@@SAJPEAVCComposition@@PEAVCCompositionSurfaceInfo@@PEAPEAV1@@Z @ 0x180125F08
 * Callers:
 *     ?CreateCompositionSurfaceBitmap@CCompositionSurfaceManager@@QEAAJPEAVCComposition@@PEAXPEAPEAVCCompositionSurfaceBitmap@@@Z @ 0x1801124E4 (-CreateCompositionSurfaceBitmap@CCompositionSurfaceManager@@QEAAJPEAVCComposition@@PEAXPEAPEAVCC.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?AddRef@CBitmapOfDeviceBitmaps@@UEAAKXZ @ 0x1800253A0 (-AddRef@CBitmapOfDeviceBitmaps@@UEAAKXZ.c)
 *     ??0CCompositionSurfaceBitmap@@IEAA@PEAVCComposition@@@Z @ 0x18002DFB4 (--0CCompositionSurfaceBitmap@@IEAA@PEAVCComposition@@@Z.c)
 *     ?UpdateSurfaceInfo@CCompositionSurfaceBitmap@@AEAAJPEAVCCompositionSurfaceInfo@@@Z @ 0x18002E890 (-UpdateSurfaceInfo@CCompositionSurfaceBitmap@@AEAAJPEAVCCompositionSurfaceInfo@@@Z.c)
 *     ?InternalRelease@CMILCOMBase@@QEAAKXZ @ 0x180085DFC (-InternalRelease@CMILCOMBase@@QEAAKXZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CCompositionSurfaceBitmap::Create(
        struct CComposition *a1,
        struct CCompositionSurfaceInfo *a2,
        struct CCompositionSurfaceBitmap **a3)
{
  CCompositionSurfaceBitmap *v6; // rax
  CBitmapOfDeviceBitmaps *v7; // rbx
  unsigned int v8; // edi
  int updated; // eax

  *a3 = 0LL;
  v6 = (CCompositionSurfaceBitmap *)(*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap
                                                                                               + 16LL))(
                                      WPF::g_pProcessHeap,
                                      504LL);
  if ( v6 )
    v7 = CCompositionSurfaceBitmap::CCompositionSurfaceBitmap(v6, a1);
  else
    v7 = 0LL;
  if ( v7 )
  {
    CBitmapOfDeviceBitmaps::AddRef(v7);
    updated = CCompositionSurfaceBitmap::UpdateSurfaceInfo(v7, a2);
    v8 = updated;
    if ( updated >= 0 )
    {
      *a3 = v7;
      v7 = 0LL;
    }
    else
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, updated, 0x24u);
    }
    if ( v7 )
      CMILCOMBase::InternalRelease(v7);
  }
  else
  {
    v8 = -2147024882;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, 0x21u);
  }
  return v8;
}
