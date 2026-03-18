/*
 * XREFs of ?Initialize@COverlayContext@@IEAAJXZ @ 0x1800790EC
 * Callers:
 *     ?Create@COverlayContext@@SAJPEAVIRenderTargetDisplay@@PEAVCDisplay@@PEAVCComposition@@PEAPEAV1@@Z @ 0x1800B6CFC (-Create@COverlayContext@@SAJPEAVIRenderTargetDisplay@@PEAVCDisplay@@PEAVCComposition@@PEAPEAV1@@.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?GetMultiplaneOverlayCaps@COverlayContext@@AEAAJPEAUDXGI_MULTIPLANE_OVERLAY_CAPS@@@Z @ 0x180078F2C (-GetMultiplaneOverlayCaps@COverlayContext@@AEAAJPEAUDXGI_MULTIPLANE_OVERLAY_CAPS@@@Z.c)
 *     ?ShrinkToSize@?$DynArrayImpl@$0A@@@IEAAXI@Z @ 0x18009A900 (-ShrinkToSize@-$DynArrayImpl@$0A@@@IEAAXI@Z.c)
 *     ?SetRectangle@CRegion@FastRegion@@QEAAXHHHH@Z @ 0x18009AA50 (-SetRectangle@CRegion@FastRegion@@QEAAXHHHH@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall COverlayContext::Initialize(COverlayContext *this)
{
  int MultiplaneOverlayCaps; // eax
  unsigned int v3; // ebx
  int v4; // eax
  int v5; // edx
  int v6; // r8d

  MultiplaneOverlayCaps = COverlayContext::GetMultiplaneOverlayCaps(this, (COverlayContext *)((char *)this + 128));
  v3 = MultiplaneOverlayCaps;
  if ( MultiplaneOverlayCaps < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, MultiplaneOverlayCaps, 0x42u);
  }
  else
  {
    (*(void (__fastcall **)(_QWORD, char *))(**((_QWORD **)this + 2) + 272LL))(*((_QWORD *)this + 2), (char *)this + 24);
    v4 = (*(__int64 (__fastcall **)(_QWORD, char *, _QWORD, _QWORD))(**((_QWORD **)this + 2) + 104LL))(
           *((_QWORD *)this + 2),
           (char *)this + 64,
           0LL,
           0LL);
    v3 = v4;
    if ( v4 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v4, 0x4Cu);
    }
    else
    {
      *((_QWORD *)this + 10) = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 9) + 136LL) + 24LL);
      FastRegion::CRegion::SetRectangle((COverlayContext *)((char *)this + 968), 0, 0, 0, 0);
      *((_DWORD *)this + 266) &= v5;
      DynArrayImpl<0>::ShrinkToSize((char *)this + 1040, (unsigned int)(v6 + 16));
      *((_DWORD *)this + 22) = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 2) + 32LL))(*((_QWORD *)this + 2));
    }
  }
  return v3;
}
