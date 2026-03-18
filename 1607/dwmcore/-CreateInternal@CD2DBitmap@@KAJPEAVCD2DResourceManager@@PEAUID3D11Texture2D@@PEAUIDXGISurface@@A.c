/*
 * XREFs of ?CreateInternal@CD2DBitmap@@KAJPEAVCD2DResourceManager@@PEAUID3D11Texture2D@@PEAUIDXGISurface@@AEBUD3D11_TEXTURE2D_DESC@@AEBUD2D1_BITMAP_PROPERTIES1@@VDisplayId@@I_NPEAPEAV1@@Z @ 0x1800A19C0
 * Callers:
 *     ?CreateD2DBitmapInternal@CD2DContext@@AEAAJPEAUID3D11Texture2D@@AEBUD3D11_TEXTURE2D_DESC@@AEBUD2D1_BITMAP_PROPERTIES1@@VDisplayId@@_NPEAPEAVCD2DBitmap@@@Z @ 0x18007E6B0 (-CreateD2DBitmapInternal@CD2DContext@@AEAAJPEAUID3D11Texture2D@@AEBUD3D11_TEXTURE2D_DESC@@AEBUD2.c)
 *     ?CreateSubResourceD2DBitmap@CD2DBitmap@@QEAAJIPEAPEAV1@@Z @ 0x180178B54 (-CreateSubResourceD2DBitmap@CD2DBitmap@@QEAAJIPEAPEAV1@@Z.c)
 * Callees:
 *     ?AddRef@CBoundsBitmap@@UEAAKXZ @ 0x180002DA0 (-AddRef@CBoundsBitmap@@UEAAKXZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?Alloc@ProcessHeapImpl@WPF@@UEAAPEAX_K@Z @ 0x1800616B0 (-Alloc@ProcessHeapImpl@WPF@@UEAAPEAX_K@Z.c)
 *     ??0CD2DBitmap@@IEAA@PEAVCD2DResourceManager@@_N@Z @ 0x18009FD28 (--0CD2DBitmap@@IEAA@PEAVCD2DResourceManager@@_N@Z.c)
 *     ?Initialize@CD2DBitmap@@IEAAJPEAUID3D11Texture2D@@PEAUIDXGISurface@@AEBUD3D11_TEXTURE2D_DESC@@AEBUD2D1_BITMAP_PROPERTIES1@@VDisplayId@@I@Z @ 0x18009FDB8 (-Initialize@CD2DBitmap@@IEAAJPEAUID3D11Texture2D@@PEAUIDXGISurface@@AEBUD3D11_TEXTURE2D_DESC@@AE.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CD2DBitmap::CreateInternal(
        struct CD2DResourceManager *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        _OWORD *a5,
        int a6,
        int a7,
        char a8,
        CD2DBitmap **a9)
{
  LPVOID (__fastcall *v13)(WPF::ProcessHeapImpl *, SIZE_T); // rax
  CD2DBitmap *v14; // rax
  CD2DBitmap *v15; // rbx
  unsigned int (__fastcall *v16)(CBoundsBitmap *); // rax
  int v17; // eax
  unsigned int v18; // edi

  *a9 = 0LL;
  v13 = *(LPVOID (__fastcall **)(WPF::ProcessHeapImpl *, SIZE_T))(*(_QWORD *)WPF::g_pProcessHeap + 8LL);
  if ( v13 == WPF::ProcessHeapImpl::Alloc )
    v14 = (CD2DBitmap *)WPF::ProcessHeapImpl::Alloc(WPF::g_pProcessHeap, 0x108uLL);
  else
    v14 = (CD2DBitmap *)v13(WPF::g_pProcessHeap, 264LL);
  if ( v14 )
    v15 = CD2DBitmap::CD2DBitmap(v14, a1, a8);
  else
    v15 = 0LL;
  if ( v15 )
  {
    v16 = *(unsigned int (__fastcall **)(CBoundsBitmap *))(*(_QWORD *)v15 + 8LL);
    if ( v16 == CBoundsBitmap::AddRef )
      CBoundsBitmap::AddRef(v15);
    else
      v16(v15);
    v17 = CD2DBitmap::Initialize((__int64)v15, a2, a3, a4, a5, a6, a7);
    v18 = v17;
    if ( v17 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v17, 0x45u);
      (*(void (__fastcall **)(CD2DBitmap *))(*(_QWORD *)v15 + 16LL))(v15);
    }
    else
    {
      *a9 = v15;
    }
  }
  else
  {
    v18 = -2147024882;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, 0x3Du);
  }
  return v18;
}
