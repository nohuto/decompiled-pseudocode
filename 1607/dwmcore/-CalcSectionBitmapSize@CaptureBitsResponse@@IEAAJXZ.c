/*
 * XREFs of ?CalcSectionBitmapSize@CaptureBitsResponse@@IEAAJXZ @ 0x1800099EC
 * Callers:
 *     ?OnPresentComplete@CaptureBitsResponse@@UEAAJXZ @ 0x180009880 (-OnPresentComplete@CaptureBitsResponse@@UEAAJXZ.c)
 *     ?OnPresentComplete@VisualCaptureBitsResponse@@UEAAJXZ @ 0x180120870 (-OnPresentComplete@VisualCaptureBitsResponse@@UEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?HrCalcDWordAlignedScanlineStride@@YAJIW4DXGI_FORMAT@@PEAI@Z @ 0x1800B47EC (-HrCalcDWordAlignedScanlineStride@@YAJIW4DXGI_FORMAT@@PEAI@Z.c)
 */

__int64 __fastcall CaptureBitsResponse::CalcSectionBitmapSize(CaptureBitsResponse *this)
{
  int v2; // eax
  unsigned int *v3; // r8
  unsigned int v4; // ebx
  unsigned __int64 v5; // rcx

  v2 = HrCalcDWordAlignedScanlineStride(
         *((_DWORD *)this + 22),
         *((enum DXGI_FORMAT *)this + 26),
         (unsigned int *)this + 37);
  v4 = v2;
  if ( v2 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v2, 0x138u);
  }
  else
  {
    v5 = *v3 * (unsigned __int64)*((unsigned int *)this + 23);
    if ( v5 > 0xFFFFFFFF )
    {
      v4 = -2147024362;
      *((_DWORD *)this + 36) = -1;
      MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, 0x13Au);
    }
    else
    {
      *((_DWORD *)this + 36) = v5;
      return 0;
    }
  }
  return v4;
}
