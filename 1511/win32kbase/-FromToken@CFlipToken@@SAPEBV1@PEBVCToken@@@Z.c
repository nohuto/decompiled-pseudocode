/*
 * XREFs of ?FromToken@CFlipToken@@SAPEBV1@PEBVCToken@@@Z @ 0x1C0072F78
 * Callers:
 *     NtDCompositionGetFrameSurfaceUpdates @ 0x1C0039690 (NtDCompositionGetFrameSurfaceUpdates.c)
 *     ?ReleaseAnalogTokensAndGetUpdates@CTokenQueue@@QEAA_NIPEAUCSM_SURFACE_UPDATE@@IPEA_NPEAIPEAPEAVCToken@@@Z @ 0x1C00E2A30 (-ReleaseAnalogTokensAndGetUpdates@CTokenQueue@@QEAA_NIPEAUCSM_SURFACE_UPDATE@@IPEA_NPEAIPEAPEAVC.c)
 *     ?ReleaseOutOfFrameDirectFlipTokensAndGetUpdates@CTokenQueue@@QEAA_NIPEAUCSM_SURFACE_UPDATE@@IPEAIPEA_NPEAPEAVCToken@@@Z @ 0x1C00E2CD0 (-ReleaseOutOfFrameDirectFlipTokensAndGetUpdates@CTokenQueue@@QEAA_NIPEAUCSM_SURFACE_UPDATE@@IPEA.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0088D70 (_guard_dispatch_icall_nop.c)
 */

const struct CFlipToken *__fastcall CFlipToken::FromToken(const struct CToken *a1)
{
  __int64 v2; // rdi

  v2 = 0LL;
  if ( (*(unsigned int (__fastcall **)(const struct CToken *))(*(_QWORD *)a1 + 64LL))(a1) == 1 )
    return a1;
  return (const struct CFlipToken *)v2;
}
