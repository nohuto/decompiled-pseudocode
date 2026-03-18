/*
 * XREFs of EtwTraceCompositionSurfaceObjectUpdateEvent @ 0x1C0074A40
 * Callers:
 *     NtDCompositionGetFrameSurfaceUpdates @ 0x1C0039690 (NtDCompositionGetFrameSurfaceUpdates.c)
 *     ?ReleaseAnalogTokensAndGetUpdates@CTokenQueue@@QEAA_NIPEAUCSM_SURFACE_UPDATE@@IPEA_NPEAIPEAPEAVCToken@@@Z @ 0x1C00E2A30 (-ReleaseAnalogTokensAndGetUpdates@CTokenQueue@@QEAA_NIPEAUCSM_SURFACE_UPDATE@@IPEA_NPEAIPEAPEAVC.c)
 *     ?ReleaseOutOfFrameDirectFlipTokensAndGetUpdates@CTokenQueue@@QEAA_NIPEAUCSM_SURFACE_UPDATE@@IPEAIPEA_NPEAPEAVCToken@@@Z @ 0x1C00E2CD0 (-ReleaseOutOfFrameDirectFlipTokensAndGetUpdates@CTokenQueue@@QEAA_NIPEAUCSM_SURFACE_UPDATE@@IPEA.c)
 * Callees:
 *     Template_xq @ 0x1C00AF7E8 (Template_xq.c)
 */

__int64 __fastcall EtwTraceCompositionSurfaceObjectUpdateEvent(__int64 a1, int a2, __int64 a3)
{
  __int64 result; // rax

  result = (unsigned int)Microsoft_Windows_Win32kEnableBits;
  if ( (Microsoft_Windows_Win32kEnableBits & 1) != 0 )
    return Template_xq(a1, &CompositionSurfaceObjectUpdateEvent, a3, a1, a2);
  return result;
}
