/*
 * XREFs of GreLockDwmState @ 0x1C0037340
 * Callers:
 *     NtDCompositionRegisterThumbnailVisual @ 0x1C0004710 (NtDCompositionRegisterThumbnailVisual.c)
 *     CheckOrAcquireDwmStateLock @ 0x1C0037478 (CheckOrAcquireDwmStateLock.c)
 *     UserReferenceDwmApiPort @ 0x1C0072820 (UserReferenceDwmApiPort.c)
 *     ?CreateDwmHandle@CSharedSectionMarshaler@DirectComposition@@QEAAPEAXXZ @ 0x1C00730F4 (-CreateDwmHandle@CSharedSectionMarshaler@DirectComposition@@QEAAPEAXXZ.c)
 *     ?xxxDwmProcessShutdown@@YAJH@Z @ 0x1C007F9E4 (-xxxDwmProcessShutdown@@YAJH@Z.c)
 *     ?xxxDwmProcessStartup@@YAJPEAX@Z @ 0x1C007FFC0 (-xxxDwmProcessStartup@@YAJPEAX@Z.c)
 *     DwmSetProcessBreakOnTerminate @ 0x1C00C10D0 (DwmSetProcessBreakOnTerminate.c)
 *     NtDCompositionRegisterVirtualDesktopVisual @ 0x1C00D6090 (NtDCompositionRegisterVirtualDesktopVisual.c)
 * Callees:
 *     EngAcquireSemaphore @ 0x1C00372E0 (EngAcquireSemaphore.c)
 */

__int64 GreLockDwmState()
{
  EngAcquireSemaphore(ghsemDwmState);
  return EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemDwmState", ghsemDwmState, 7LL);
}
