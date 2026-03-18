/*
 * XREFs of GreUnlockDwmState @ 0x1C0037310
 * Callers:
 *     NtDCompositionRegisterThumbnailVisual @ 0x1C0004710 (NtDCompositionRegisterThumbnailVisual.c)
 *     OpenDwmHandle @ 0x1C0037370 (OpenDwmHandle.c)
 *     UserReferenceDwmApiPort @ 0x1C0072820 (UserReferenceDwmApiPort.c)
 *     ?CreateDwmHandle@CSharedSectionMarshaler@DirectComposition@@QEAAPEAXXZ @ 0x1C00730F4 (-CreateDwmHandle@CSharedSectionMarshaler@DirectComposition@@QEAAPEAXXZ.c)
 *     ?xxxDwmProcessShutdown@@YAJH@Z @ 0x1C007F9E4 (-xxxDwmProcessShutdown@@YAJH@Z.c)
 *     ?xxxDwmProcessStartup@@YAJPEAX@Z @ 0x1C007FFC0 (-xxxDwmProcessStartup@@YAJPEAX@Z.c)
 *     DwmSetProcessBreakOnTerminate @ 0x1C00C10D0 (DwmSetProcessBreakOnTerminate.c)
 *     NtDCompositionDuplicateSwapchainHandleToDwm @ 0x1C00D5DE0 (NtDCompositionDuplicateSwapchainHandleToDwm.c)
 *     NtDCompositionRegisterVirtualDesktopVisual @ 0x1C00D6090 (NtDCompositionRegisterVirtualDesktopVisual.c)
 * Callees:
 *     EtwTraceGreLockReleaseSemaphore @ 0x1C006DDB0 (EtwTraceGreLockReleaseSemaphore.c)
 */

__int64 GreUnlockDwmState()
{
  EtwTraceGreLockReleaseSemaphore(L"ghsemDwmState");
  return GreReleaseSemaphoreInternal((struct _ERESOURCE *)ghsemDwmState);
}
