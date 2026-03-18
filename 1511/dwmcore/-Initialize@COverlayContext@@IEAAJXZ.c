/*
 * XREFs of ?Initialize@COverlayContext@@IEAAJXZ @ 0x18007F1CC
 * Callers:
 *     ?Create@COverlayContext@@SAJPEAVIRenderTargetDisplay@@PEAVCDisplay@@PEAVCComposition@@PEAPEAV1@@Z @ 0x1800B3994 (-Create@COverlayContext@@SAJPEAVIRenderTargetDisplay@@PEAVCDisplay@@PEAVCComposition@@PEAPEAV1@@.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?SetRectangle@CRegion@FastRegion@@QEAAXHHHH@Z @ 0x18006D960 (-SetRectangle@CRegion@FastRegion@@QEAAXHHHH@Z.c)
 *     ?ShrinkToSize@?$DynArrayImpl@$0A@@@IEAAXI@Z @ 0x180076D60 (-ShrinkToSize@-$DynArrayImpl@$0A@@@IEAAXI@Z.c)
 *     ?GetMultiplaneOverlayCaps@COverlayContext@@AEAAJPEAUDXGI_MULTIPLANE_OVERLAY_CAPS@@@Z @ 0x18007EE64 (-GetMultiplaneOverlayCaps@COverlayContext@@AEAAJPEAUDXGI_MULTIPLANE_OVERLAY_CAPS@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall COverlayContext::Initialize(COverlayContext *this)
{
  int MultiplaneOverlayCaps; // eax
  unsigned int v3; // esi
  int v4; // eax
  int v5; // edx
  int v6; // r8d

  MultiplaneOverlayCaps = COverlayContext::GetMultiplaneOverlayCaps(this, (COverlayContext *)((char *)this + 92));
  v3 = MultiplaneOverlayCaps;
  if ( MultiplaneOverlayCaps < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, MultiplaneOverlayCaps, 0x41u);
  }
  else
  {
    (*(void (__fastcall **)(_QWORD, char *))(**((_QWORD **)this + 2) + 256LL))(*((_QWORD *)this + 2), (char *)this + 24);
    v4 = (*(__int64 (__fastcall **)(_QWORD, char *, _QWORD))(**((_QWORD **)this + 2) + 104LL))(
           *((_QWORD *)this + 2),
           (char *)this + 64,
           0LL);
    v3 = v4;
    if ( v4 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v4, 0x4Bu);
    }
    else
    {
      *((_QWORD *)this + 10) = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 9) + 136LL) + 24LL);
      FastRegion::CRegion::SetRectangle((COverlayContext *)((char *)this + 720), 0, 0, 0, 0);
      *((_DWORD *)this + 204) &= v5;
      DynArrayImpl<0>::ShrinkToSize((_QWORD *)this + 99, v6 + 16);
      *((_DWORD *)this + 22) = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 2) + 32LL))(*((_QWORD *)this + 2));
    }
  }
  return v3;
}
