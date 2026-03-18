/*
 * XREFs of ?IsFreqWithinToleranceRange@DMMVIDEOSIGNALMODE@@SAEAEBU_D3DDDI_RATIONAL@@0I@Z @ 0x1C0007FA8
 * Callers:
 *     ?HaveEquivalentMonitorFrequencyRequirements@DMMVIDEOSIGNALMODE@@SAEAEBU_D3DKMDT_VIDEO_SIGNAL_INFO@@0E@Z @ 0x1C0007F5C (-HaveEquivalentMonitorFrequencyRequirements@DMMVIDEOSIGNALMODE@@SAEAEBU_D3DKMDT_VIDEO_SIGNAL_INF.c)
 *     ?SetDisplayMode@DXGDEVICE@@QEAAJPEBVDXGALLOCATION@@W4_D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDERING@@W4_D3DDDI_ROTATION@@U_D3DKMT_SETDISPLAYMODE_FLAGS@@PEAI@Z @ 0x1C006C7E8 (-SetDisplayMode@DXGDEVICE@@QEAAJPEBVDXGALLOCATION@@W4_D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDERING@@W4_.c)
 *     sub_1C00A6C58 @ 0x1C00A6C58 (sub_1C00A6C58.c)
 *     ?DmmMapVSyncFromRationalToInteger@@YAIAEBU_D3DDDI_RATIONAL@@W4_D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDERING@@PEAE@Z @ 0x1C00A6F40 (-DmmMapVSyncFromRationalToInteger@@YAIAEBU_D3DDDI_RATIONAL@@W4_D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDE.c)
 *     ?IsCompatibleWithMonitorMode@DXGDMM_VIDPNTARGETMODESET_INTERFACE_V1_IMPL@@YAJQEBU_D3DKMDT_VIDPN_TARGET_MODE@@AEBU_D3DKMDT_MONITOR_SOURCE_MODE@@EPEAE@Z @ 0x1C00E7C10 (-IsCompatibleWithMonitorMode@DXGDMM_VIDPNTARGETMODESET_INTERFACE_V1_IMPL@@YAJQEBU_D3DKMDT_VIDPN_.c)
 * Callees:
 *     <none>
 */

bool __fastcall DMMVIDEOSIGNALMODE::IsFreqWithinToleranceRange(
        const struct _D3DDDI_RATIONAL *a1,
        const struct _D3DDDI_RATIONAL *a2,
        int a3)
{
  unsigned __int64 Denominator; // rcx
  unsigned __int64 v6; // r9
  __int64 Numerator; // r8
  unsigned __int64 v8; // r11
  bool result; // al

  Denominator = a1->Denominator;
  result = 0;
  if ( (_DWORD)Denominator )
  {
    v6 = a2->Denominator;
    if ( (_DWORD)v6 )
    {
      Numerator = a2->Numerator;
      v8 = 100000 * (unsigned __int64)a1->Numerator / Denominator;
      if ( v8 >= Numerator * (unsigned __int64)(unsigned int)(100000 - a3) / v6
        && v8 <= Numerator * (unsigned __int64)(unsigned int)(a3 + 100000) / v6 )
      {
        return 1;
      }
    }
  }
  return result;
}
