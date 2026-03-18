/*
 * XREFs of ?AcquireTokenManagerLock@CTokenManager@@AEAAXXZ @ 0x1C003D4A4
 * Callers:
 *     ?ProcessGdiSysmemTokens@CTokenManager@@IEAAJXZ @ 0x1C003CFA8 (-ProcessGdiSysmemTokens@CTokenManager@@IEAAJXZ.c)
 *     ?SetAdapterInfo@CTokenManager@@IEAAXPEAUCSM_TOKEN_ADAPTER_INFO@@I@Z @ 0x1C003D264 (-SetAdapterInfo@CTokenManager@@IEAAXPEAUCSM_TOKEN_ADAPTER_INFO@@I@Z.c)
 *     ?DeleteAllTokensInternal@CTokenManager@@IEAAXXZ @ 0x1C003D340 (-DeleteAllTokensInternal@CTokenManager@@IEAAXXZ.c)
 *     NtTokenManagerDeleteOutstandingDirectFlipTokens @ 0x1C00E1A60 (NtTokenManagerDeleteOutstandingDirectFlipTokens.c)
 *     ?AddUnBindTokenInternal@CTokenManager@@IEAAJPEAUCompositionSurfaceObject@@@Z @ 0x1C00E200C (-AddUnBindTokenInternal@CTokenManager@@IEAAJPEAUCompositionSurfaceObject@@@Z.c)
 *     ?ConfirmOutstandingAnalogTokenInternal@CTokenManager@@IEAAXXZ @ 0x1C00E2210 (-ConfirmOutstandingAnalogTokenInternal@CTokenManager@@IEAAXXZ.c)
 *     ?GetAnalogExclusiveTokenEventInternal@CTokenManager@@IEAAJPEAPEAX@Z @ 0x1C00E225C (-GetAnalogExclusiveTokenEventInternal@CTokenManager@@IEAAJPEAPEAX@Z.c)
 *     ?GetAnalogSurfaceUpdatesInternal@CTokenManager@@IEAAHIIPEAUCSM_SURFACE_UPDATE@@PEAI@Z @ 0x1C00E2308 (-GetAnalogSurfaceUpdatesInternal@CTokenManager@@IEAAHIIPEAUCSM_SURFACE_UPDATE@@PEAI@Z.c)
 *     ?NotifyCompositionTokensOfRedirectionStop@CTokenManager@@IEAAXXZ @ 0x1C00E2504 (-NotifyCompositionTokensOfRedirectionStop@CTokenManager@@IEAAXXZ.c)
 *     ?NotifyQueuesOfRedirectionStop@CTokenManager@@IEAAXXZ @ 0x1C00E25C8 (-NotifyQueuesOfRedirectionStop@CTokenManager@@IEAAXXZ.c)
 *     ?ReleaseOutOfFrameDirectFlipTokensAndGetUpdatesInternal@CTokenManager@@IEAAHIIHPEAUCSM_SURFACE_UPDATE@@PEAIPEAH@Z @ 0x1C00E262C (-ReleaseOutOfFrameDirectFlipTokensAndGetUpdatesInternal@CTokenManager@@IEAAHIIHPEAUCSM_SURFACE_U.c)
 * Callees:
 *     <none>
 */

void __fastcall CTokenManager::AcquireTokenManagerLock(CTokenManager *this)
{
  ExAcquirePushLockExclusiveEx((char *)this + 64, 0LL);
  *(_QWORD *)this = KeGetCurrentThread();
}
