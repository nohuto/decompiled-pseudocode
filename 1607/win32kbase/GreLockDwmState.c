/*
 * XREFs of GreLockDwmState @ 0x1C001D890
 * Callers:
 *     NtDCompositionRegisterThumbnailVisual @ 0x1C0004970 (NtDCompositionRegisterThumbnailVisual.c)
 *     CheckOrAcquireDwmStateLock @ 0x1C001D798 (CheckOrAcquireDwmStateLock.c)
 *     UserReferenceDwmApiPort @ 0x1C001F5C0 (UserReferenceDwmApiPort.c)
 *     ?CreateDwmHandle@CSharedSectionMarshaler@DirectComposition@@QEAAPEAXXZ @ 0x1C003BBF0 (-CreateDwmHandle@CSharedSectionMarshaler@DirectComposition@@QEAAPEAXXZ.c)
 *     ?xxxDwmProcessShutdown@@YAJH@Z @ 0x1C00711B8 (-xxxDwmProcessShutdown@@YAJH@Z.c)
 *     ?xxxDwmProcessStartup@@YAJPEAX@Z @ 0x1C007156C (-xxxDwmProcessStartup@@YAJPEAX@Z.c)
 *     DwmSetProcessBreakOnTerminate @ 0x1C00CD7A0 (DwmSetProcessBreakOnTerminate.c)
 *     NtDCompositionRegisterVirtualDesktopVisual @ 0x1C00E3870 (NtDCompositionRegisterVirtualDesktopVisual.c)
 * Callees:
 *     EngAcquireSemaphore @ 0x1C0025AF0 (EngAcquireSemaphore.c)
 */

__int64 GreLockDwmState()
{
  EngAcquireSemaphore(ghsemDwmState);
  return EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemDwmState", ghsemDwmState, 7LL);
}
