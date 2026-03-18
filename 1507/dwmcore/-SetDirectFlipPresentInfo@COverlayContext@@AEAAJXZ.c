/*
 * XREFs of ?SetDirectFlipPresentInfo@COverlayContext@@AEAAJXZ @ 0x180012398
 * Callers:
 *     ?Reset@COverlayContext@@QEAAXXZ @ 0x1800F765C (-Reset@COverlayContext@@QEAAXXZ.c)
 * Callees:
 *     ?NeedsPresent@CDirectFlipInfo@@QEAA_NXZ @ 0x180006994 (-NeedsPresent@CDirectFlipInfo@@QEAA_NXZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 */

__int64 __fastcall COverlayContext::SetDirectFlipPresentInfo(COverlayContext *this)
{
  unsigned int v2; // ebx
  CDirectFlipInfo *v3; // rcx
  int v5; // eax

  v2 = 0;
  v3 = (CDirectFlipInfo *)*((_QWORD *)this + 78);
  if ( v3 )
  {
    if ( CDirectFlipInfo::NeedsPresent(v3) )
      *((_BYTE *)this + 817) = 1;
    v5 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 78) + 24LL))(*((_QWORD *)this + 78));
    v2 = v5;
    if ( v5 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v5, 0xCAFu);
  }
  return v2;
}
