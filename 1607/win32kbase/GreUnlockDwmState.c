/*
 * XREFs of GreUnlockDwmState @ 0x1C0071C10
 * Callers:
 *     NtDCompositionRegisterThumbnailVisual @ 0x1C0004970 (NtDCompositionRegisterThumbnailVisual.c)
 *     OpenDwmHandle @ 0x1C001D698 (OpenDwmHandle.c)
 *     UserReferenceDwmApiPort @ 0x1C001F5C0 (UserReferenceDwmApiPort.c)
 *     ?CreateDwmHandle@CSharedSectionMarshaler@DirectComposition@@QEAAPEAXXZ @ 0x1C003BBF0 (-CreateDwmHandle@CSharedSectionMarshaler@DirectComposition@@QEAAPEAXXZ.c)
 *     ?xxxDwmProcessShutdown@@YAJH@Z @ 0x1C00711B8 (-xxxDwmProcessShutdown@@YAJH@Z.c)
 *     ?xxxDwmProcessStartup@@YAJPEAX@Z @ 0x1C007156C (-xxxDwmProcessStartup@@YAJPEAX@Z.c)
 *     DwmSetProcessBreakOnTerminate @ 0x1C00CD7A0 (DwmSetProcessBreakOnTerminate.c)
 *     ?DCompositionSendDwmLpcMessage@@YAJPEAX_K@Z @ 0x1C00E31F4 (-DCompositionSendDwmLpcMessage@@YAJPEAX_K@Z.c)
 *     NtDCompositionRegisterVirtualDesktopVisual @ 0x1C00E3870 (NtDCompositionRegisterVirtualDesktopVisual.c)
 * Callees:
 *     EtwTraceGreLockReleaseSemaphore @ 0x1C0073A30 (EtwTraceGreLockReleaseSemaphore.c)
 */

__int64 GreUnlockDwmState()
{
  EtwTraceGreLockReleaseSemaphore(L"ghsemDwmState");
  return GreReleaseSemaphoreInternal((struct _ERESOURCE *)ghsemDwmState);
}
