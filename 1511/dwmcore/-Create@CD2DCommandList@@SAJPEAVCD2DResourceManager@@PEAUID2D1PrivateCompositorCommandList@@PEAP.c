/*
 * XREFs of ?Create@CD2DCommandList@@SAJPEAVCD2DResourceManager@@PEAUID2D1PrivateCompositorCommandList@@PEAPEAV1@@Z @ 0x180027A08
 * Callers:
 *     ?CreateLegacyCommandList@CD2DContext@@MEAAJPEAUID2D1PrivateCompositorBuffer@@0PEAPEAUID2D1Bitmap@@_K12PEAPEAUID2D1PrivateCompositorPrimitiveProperties@@2PEAPEAVCD2DCommandList@@@Z @ 0x180020C00 (-CreateLegacyCommandList@CD2DContext@@MEAAJPEAUID2D1PrivateCompositorBuffer@@0PEAPEAUID2D1Bitmap.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?AddRef@CBoundsBitmap@@UEAAKXZ @ 0x180027050 (-AddRef@CBoundsBitmap@@UEAAKXZ.c)
 *     ?Add@?$CMap@PEAVCPolygon@@PEAUID2D1PrivateCompositorCommandList@@V?$CMapEqualHelper@PEAVCPolygon@@PEAUID2D1PrivateCompositorCommandList@@@@@@QEAAHAEBQEAVCPolygon@@AEBQEAUID2D1PrivateCompositorCommandList@@@Z @ 0x180027668 (-Add@-$CMap@PEAVCPolygon@@PEAUID2D1PrivateCompositorCommandList@@V-$CMapEqualHelper@PEAVCPolygon.c)
 *     ??0CD2DResource@@IEAA@PEAVCD2DResourceManager@@@Z @ 0x180027830 (--0CD2DResource@@IEAA@PEAVCD2DResourceManager@@@Z.c)
 *     ?Alloc@ProcessHeapImpl@WPF@@UEAAPEAX_K@Z @ 0x180052010 (-Alloc@ProcessHeapImpl@WPF@@UEAAPEAX_K@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CD2DCommandList::Create(
        struct CD2DResourceManager *a1,
        struct ID2D1PrivateCompositorCommandList *a2,
        struct CD2DCommandList **a3)
{
  void *(__fastcall *v6)(WPF::ProcessHeapImpl *__hidden, unsigned __int64); // rdi
  CD2DResource *v7; // rax
  CBitmapOfDeviceBitmaps *v8; // rdi
  __int64 (__fastcall *v9)(CBitmapOfDeviceBitmaps *); // rbx
  unsigned int v10; // esi
  struct ID2D1PrivateCompositorCommandList *v12; // [rsp+60h] [rbp+18h] BYREF
  __int64 v13; // [rsp+68h] [rbp+20h] BYREF

  *a3 = 0LL;
  v6 = *(void *(__fastcall **)(WPF::ProcessHeapImpl *__hidden, unsigned __int64))(*(_QWORD *)WPF::g_pProcessHeap + 8LL);
  if ( v6 == WPF::ProcessHeapImpl::Alloc )
    v7 = (CD2DResource *)WPF::ProcessHeapImpl::Alloc(WPF::g_pProcessHeap, 0x80uLL);
  else
    v7 = (CD2DResource *)v6(WPF::g_pProcessHeap, 128uLL);
  v8 = v7;
  if ( v7 )
  {
    CD2DResource::CD2DResource(v7, a1);
    *((_QWORD *)v8 + 2) = &CSecondaryD2DBitmap::`vftable'{for `IDeviceResource'};
    *(_QWORD *)v8 = &CD2DCommandList::`vftable'{for `CMILCOMBase'};
    *((_QWORD *)v8 + 13) = 0LL;
    *((_QWORD *)v8 + 14) = 0LL;
    *((_DWORD *)v8 + 30) = 0;
  }
  if ( v8 )
  {
    v9 = *(__int64 (__fastcall **)(CBitmapOfDeviceBitmaps *))(*(_QWORD *)v8 + 8LL);
    if ( v9 == CBoundsBitmap::AddRef )
      CBoundsBitmap::AddRef(v8);
    else
      v9(v8);
    v13 = 0LL;
    v12 = a2;
    if ( (unsigned int)CMap<CPolygon *,ID2D1PrivateCompositorCommandList *,CMapEqualHelper<CPolygon *,ID2D1PrivateCompositorCommandList *>>::Add(
                         (__int64)v8 + 104,
                         &v13,
                         &v12) )
    {
      (*(void (__fastcall **)(struct ID2D1PrivateCompositorCommandList *))(*(_QWORD *)a2 + 8LL))(a2);
      v10 = 0;
      *a3 = v8;
      v8 = 0LL;
    }
    else
    {
      v10 = -2147024882;
      MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, 0x21u);
      MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, 0x16u);
    }
    if ( v8 )
      (*(void (__fastcall **)(CBitmapOfDeviceBitmaps *))(*(_QWORD *)v8 + 16LL))(v8);
  }
  else
  {
    v10 = -2147024882;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, 0x13u);
  }
  return v10;
}
