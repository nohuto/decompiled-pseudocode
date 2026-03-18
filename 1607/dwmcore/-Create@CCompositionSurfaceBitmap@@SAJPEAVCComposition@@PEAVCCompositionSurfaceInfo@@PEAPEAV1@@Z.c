/*
 * XREFs of ?Create@CCompositionSurfaceBitmap@@SAJPEAVCComposition@@PEAVCCompositionSurfaceInfo@@PEAPEAV1@@Z @ 0x18014262C
 * Callers:
 *     ?CreateCompositionSurfaceBitmap@CCompositionSurfaceManager@@QEAAJPEAVCComposition@@PEAXPEAPEAVCCompositionSurfaceBitmap@@@Z @ 0x18012A7BC (-CreateCompositionSurfaceBitmap@CCompositionSurfaceManager@@QEAAJPEAVCComposition@@PEAXPEAPEAVCC.c)
 * Callees:
 *     ?InternalRelease@CMILCOMBase@@QEAAKXZ @ 0x18002D1DC (-InternalRelease@CMILCOMBase@@QEAAKXZ.c)
 *     ?AddRef@CBitmapOfDeviceBitmaps@@UEAAKXZ @ 0x18002D3A0 (-AddRef@CBitmapOfDeviceBitmaps@@UEAAKXZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?UpdateSurfaceInfo@CCompositionSurfaceBitmap@@AEAAJPEAVCCompositionSurfaceInfo@@@Z @ 0x180093308 (-UpdateSurfaceInfo@CCompositionSurfaceBitmap@@AEAAJPEAVCCompositionSurfaceInfo@@@Z.c)
 *     ??0CCompositionSurfaceBitmap@@IEAA@PEAVCComposition@@@Z @ 0x180093564 (--0CCompositionSurfaceBitmap@@IEAA@PEAVCComposition@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
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
                                      576LL);
  if ( v6 )
    v7 = CCompositionSurfaceBitmap::CCompositionSurfaceBitmap(v6, a1);
  else
    v7 = 0LL;
  if ( v7 )
  {
    CBitmapOfDeviceBitmaps::AddRef(v7);
    updated = CCompositionSurfaceBitmap::UpdateSurfaceInfo(v7, a2);
    v8 = updated;
    if ( updated < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, updated, 0x24u);
      CMILCOMBase::InternalRelease(v7);
    }
    else
    {
      *a3 = v7;
    }
  }
  else
  {
    v8 = -2147024882;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, 0x21u);
  }
  return v8;
}
