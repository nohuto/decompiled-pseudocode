/*
 * XREFs of ?CreateInternal@CD2DBitmap@@KAJPEAVCD2DResourceManager@@PEAUID3D11Texture2D@@PEAUIDXGISurface@@AEBUD3D11_TEXTURE2D_DESC@@AEBUD2D1_BITMAP_PROPERTIES1@@VDisplayId@@IPEAPEAV1@@Z @ 0x18005E264
 * Callers:
 *     ?CreateD2DBitmap@CD2DContext@@MEAAJPEAUID3D11Texture2D@@AEBUD3D11_TEXTURE2D_DESC@@AEBUD2D1_BITMAP_PROPERTIES1@@VDisplayId@@PEAPEAVCD2DBitmap@@@Z @ 0x180072CE0 (-CreateD2DBitmap@CD2DContext@@MEAAJPEAUID3D11Texture2D@@AEBUD3D11_TEXTURE2D_DESC@@AEBUD2D1_BITMA.c)
 *     ?CreateSubResourceD2DBitmap@CD2DBitmap@@QEAAJIPEAPEAV1@@Z @ 0x18013E1B4 (-CreateSubResourceD2DBitmap@CD2DBitmap@@QEAAJIPEAPEAV1@@Z.c)
 * Callees:
 *     ?AddRef@CBoundsBitmap@@UEAAKXZ @ 0x180015F10 (-AddRef@CBoundsBitmap@@UEAAKXZ.c)
 *     ??0CD2DBitmap@@IEAA@PEAVCD2DResourceManager@@@Z @ 0x18001B7C4 (--0CD2DBitmap@@IEAA@PEAVCD2DResourceManager@@@Z.c)
 *     ?Initialize@CD2DBitmap@@IEAAJPEAUID3D11Texture2D@@PEAUIDXGISurface@@AEBUD3D11_TEXTURE2D_DESC@@AEBUD2D1_BITMAP_PROPERTIES1@@VDisplayId@@I@Z @ 0x18001BB8C (-Initialize@CD2DBitmap@@IEAAJPEAUID3D11Texture2D@@PEAUIDXGISurface@@AEBUD3D11_TEXTURE2D_DESC@@AE.c)
 *     ?Alloc@ProcessHeapImpl@WPF@@UEAAPEAX_K@Z @ 0x180031390 (-Alloc@ProcessHeapImpl@WPF@@UEAAPEAX_K@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 */

__int64 __fastcall CD2DBitmap::CreateInternal(
        struct CD2DResourceManager *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        _OWORD *a5,
        int a6,
        int a7,
        CBoundsBitmap **a8)
{
  LPVOID (__fastcall *v12)(WPF::ProcessHeapImpl *, SIZE_T); // rdi
  CD2DBitmap *v13; // rax
  CBoundsBitmap *v14; // rdi
  unsigned int (__fastcall *v15)(CBoundsBitmap *); // rbx
  int v16; // eax
  unsigned int v17; // esi

  *a8 = 0LL;
  v12 = *(LPVOID (__fastcall **)(WPF::ProcessHeapImpl *, SIZE_T))(*(_QWORD *)WPF::g_pProcessHeap + 8LL);
  if ( v12 == WPF::ProcessHeapImpl::Alloc )
    v13 = (CD2DBitmap *)WPF::ProcessHeapImpl::Alloc(WPF::g_pProcessHeap, 0x108uLL);
  else
    v13 = (CD2DBitmap *)v12(WPF::g_pProcessHeap, 264LL);
  if ( v13 )
    v14 = CD2DBitmap::CD2DBitmap(v13, a1);
  else
    v14 = 0LL;
  if ( v14 )
  {
    v15 = *(unsigned int (__fastcall **)(CBoundsBitmap *))(*(_QWORD *)v14 + 8LL);
    if ( v15 == CBoundsBitmap::AddRef )
      CBoundsBitmap::AddRef(v14);
    else
      v15(v14);
    v16 = CD2DBitmap::Initialize((__int64)v14, a2, a3, a4, a5, a6, a7);
    v17 = v16;
    if ( v16 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v16, 0x44u);
    }
    else
    {
      *a8 = v14;
      v14 = 0LL;
    }
    if ( v14 )
      (*(void (__fastcall **)(CBoundsBitmap *))(*(_QWORD *)v14 + 16LL))(v14);
  }
  else
  {
    v17 = -2147024882;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, 0x3Cu);
  }
  return v17;
}
