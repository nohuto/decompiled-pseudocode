/*
 * XREFs of EtwTraceCompositionSurfaceObjectUpdateEvent @ 0x1C0016ED0
 * Callers:
 *     ?GetSurfaceUpdates@CCompositionFrame@DirectComposition@@QEAAHPEAUCSM_SURFACE_UPDATE@@IPEAI@Z @ 0x1C00198A8 (-GetSurfaceUpdates@CCompositionFrame@DirectComposition@@QEAAHPEAUCSM_SURFACE_UPDATE@@IPEAI@Z.c)
 *     ?ReleaseAnalogTokensAndGetUpdates@CTokenQueue@@QEAA_NIPEAUCSM_SURFACE_UPDATE@@IPEA_NPEAIPEAPEAVCToken@@@Z @ 0x1C00F4C00 (-ReleaseAnalogTokensAndGetUpdates@CTokenQueue@@QEAA_NIPEAUCSM_SURFACE_UPDATE@@IPEA_NPEAIPEAPEAVC.c)
 * Callees:
 *     Template_xq @ 0x1C00B9068 (Template_xq.c)
 */

__int64 __fastcall EtwTraceCompositionSurfaceObjectUpdateEvent(__int64 a1, int a2, __int64 a3)
{
  __int64 result; // rax

  result = (unsigned int)Microsoft_Windows_Win32kEnableBits;
  if ( (Microsoft_Windows_Win32kEnableBits & 1) != 0 )
    return Template_xq(a1, &CompositionSurfaceObjectUpdateEvent, a3, a1, a2);
  return result;
}
