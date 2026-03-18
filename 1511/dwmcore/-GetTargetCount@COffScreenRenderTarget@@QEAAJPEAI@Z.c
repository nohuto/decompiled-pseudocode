/*
 * XREFs of ?GetTargetCount@COffScreenRenderTarget@@QEAAJPEAI@Z @ 0x1801081A0
 * Callers:
 *     ??0MagnifierCaptureBitsResponse@@QEAA@PEAVCSurfaceManager@@PEAVCMagnifierRenderTarget@@PEAUIWICImagingFactory@@PEAVCChannelContext@@AEBUWICRect@@_K@Z @ 0x18010A920 (--0MagnifierCaptureBitsResponse@@QEAA@PEAVCSurfaceManager@@PEAVCMagnifierRenderTarget@@PEAUIWICI.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall COffScreenRenderTarget::GetTargetCount(COffScreenRenderTarget *this, unsigned int *a2)
{
  int v4; // eax
  unsigned int v5; // ebx

  *a2 = 0;
  v4 = (*(__int64 (__fastcall **)(COffScreenRenderTarget *))(*(_QWORD *)this + 200LL))(this);
  v5 = v4;
  if ( v4 >= 0 )
    *a2 = *((_DWORD *)this + 50);
  else
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v4, 0x219u);
  return v5;
}
