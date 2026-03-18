/*
 * XREFs of ?GetTargetCount@COffScreenRenderTarget@@QEAAJPEAI@Z @ 0x1800EC7B0
 * Callers:
 *     ??0MagnifierCaptureBitsResponse@@QEAA@PEAVCSurfaceManager@@PEAVCMagnifierRenderTarget@@PEAUIWICImagingFactory@@PEAVCChannelContext@@AEBUWICRect@@_K@Z @ 0x1800F0BC4 (--0MagnifierCaptureBitsResponse@@QEAA@PEAVCSurfaceManager@@PEAVCMagnifierRenderTarget@@PEAUIWICI.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 */

__int64 __fastcall COffScreenRenderTarget::GetTargetCount(COffScreenRenderTarget *this, unsigned int *a2)
{
  int v4; // eax
  unsigned int v5; // ebx

  *a2 = 0;
  v4 = (*(__int64 (__fastcall **)(COffScreenRenderTarget *))(*(_QWORD *)this + 192LL))(this);
  v5 = v4;
  if ( v4 >= 0 )
    *a2 = *((_DWORD *)this + 56);
  else
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v4, 0x221u);
  return v5;
}
