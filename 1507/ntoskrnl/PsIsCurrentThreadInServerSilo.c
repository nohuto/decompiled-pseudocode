/*
 * XREFs of PsIsCurrentThreadInServerSilo @ 0x140016968
 * Callers:
 *     PspConvertJobToMixed @ 0x140131A84 (PspConvertJobToMixed.c)
 *     PsSetSiloObjectServerPropertyByPointer @ 0x14024411C (PsSetSiloObjectServerPropertyByPointer.c)
 *     NtImpersonateAnonymousToken @ 0x140410C10 (NtImpersonateAnonymousToken.c)
 *     NtPlugPlayControl @ 0x14043789C (NtPlugPlayControl.c)
 *     SepCreateClientSecurityEx @ 0x140481870 (SepCreateClientSecurityEx.c)
 *     EtwpEnableDisableSpecialGuids @ 0x1404D5EA8 (EtwpEnableDisableSpecialGuids.c)
 *     EtwpStartLogger @ 0x1404D66D0 (EtwpStartLogger.c)
 *     ExpWnfSubscribeWnfStateChange @ 0x140501F5C (ExpWnfSubscribeWnfStateChange.c)
 *     SeSetSessionIdToken @ 0x140527E54 (SeSetSessionIdToken.c)
 *     IopUnloadDriver @ 0x140539658 (IopUnloadDriver.c)
 *     EtwShutdown @ 0x1405674D4 (EtwShutdown.c)
 *     NtLoadDriver @ 0x14057157C (NtLoadDriver.c)
 *     MiSessionCreate @ 0x140579240 (MiSessionCreate.c)
 *     NtInitializeRegistry @ 0x140583714 (NtInitializeRegistry.c)
 *     SepInitializationPhase1 @ 0x1405931F0 (SepInitializationPhase1.c)
 *     PsRegisterMonitorServerSilo @ 0x1405936B8 (PsRegisterMonitorServerSilo.c)
 *     SepRmSetAuditEventWrkr @ 0x1405A789C (SepRmSetAuditEventWrkr.c)
 *     MiCreatePagingFile @ 0x1405B4240 (MiCreatePagingFile.c)
 *     NtSetDefaultHardErrorPort @ 0x1405C18B4 (NtSetDefaultHardErrorPort.c)
 *     EtwpEnableDisableUMGL @ 0x1406E26D4 (EtwpEnableDisableUMGL.c)
 *     EtwpUpdatePerProcessTracing @ 0x1406E28A8 (EtwpUpdatePerProcessTracing.c)
 *     ExpRaiseHardError @ 0x1406F7B94 (ExpRaiseHardError.c)
 * Callees:
 *     PsEqualCurrentServerSilo @ 0x140017D40 (PsEqualCurrentServerSilo.c)
 */

bool PsIsCurrentThreadInServerSilo()
{
  return (unsigned __int8)PsEqualCurrentServerSilo(0LL) == 0;
}
