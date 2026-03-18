/*
 * XREFs of ?Initialize@COverlayContext@@IEAAJXZ @ 0x180012A00
 * Callers:
 *     ?Create@COverlayContext@@SAJPEAVIRenderTargetDisplay@@PEAVCDisplay@@PEAVCComposition@@PEAPEAV1@@Z @ 0x180012278 (-Create@COverlayContext@@SAJPEAVIRenderTargetDisplay@@PEAVCDisplay@@PEAVCComposition@@PEAPEAV1@@.c)
 * Callees:
 *     ?GetMultiplaneOverlayCaps@COverlayContext@@AEAAJPEAUDXGI_MULTIPLANE_OVERLAY_CAPS@@@Z @ 0x180012820 (-GetMultiplaneOverlayCaps@COverlayContext@@AEAAJPEAUDXGI_MULTIPLANE_OVERLAY_CAPS@@@Z.c)
 *     ?ShrinkToSize@?$DynArrayImpl@$0A@@@IEAAXI@Z @ 0x1800400E0 (-ShrinkToSize@-$DynArrayImpl@$0A@@@IEAAXI@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 */

__int64 __fastcall COverlayContext::Initialize(COverlayContext *this)
{
  int MultiplaneOverlayCaps; // eax
  unsigned int v3; // esi
  int v4; // eax

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
      *((_QWORD *)this + 10) = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 9) + 152LL) + 32LL);
      **((_DWORD **)this + 79) = 0;
      *((_DWORD *)this + 182) = 0;
      DynArrayImpl<0>::ShrinkToSize((char *)this + 704, 16LL);
      *((_DWORD *)this + 22) = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 2) + 32LL))(*((_QWORD *)this + 2));
    }
  }
  return v3;
}
