/*
 * XREFs of PsIsCurrentThreadInServerSilo @ 0x140079E5C
 * Callers:
 *     NtSetSystemPowerState @ 0x1403A3E04 (NtSetSystemPowerState.c)
 *     NtImpersonateAnonymousToken @ 0x1403BE658 (NtImpersonateAnonymousToken.c)
 *     ObpParseSymbolicLink @ 0x1403BEA20 (ObpParseSymbolicLink.c)
 *     SeSetSessionIdToken @ 0x1403C51A4 (SeSetSessionIdToken.c)
 *     SepCreateClientSecurityEx @ 0x14042C5D0 (SepCreateClientSecurityEx.c)
 *     NtPlugPlayControl @ 0x140438FB0 (NtPlugPlayControl.c)
 *     NtPowerInformation @ 0x140452E2C (NtPowerInformation.c)
 *     NtLoadDriver @ 0x140493C20 (NtLoadDriver.c)
 *     IopUnloadDriver @ 0x140493DE4 (IopUnloadDriver.c)
 *     EtwpStartLogger @ 0x1404CB420 (EtwpStartLogger.c)
 *     EtwpEnableDisableSpecialGuids @ 0x1404CE8C8 (EtwpEnableDisableSpecialGuids.c)
 *     PoUserShutdownInitiated @ 0x1404F5250 (PoUserShutdownInitiated.c)
 *     NtInitiatePowerAction @ 0x1404F6BCC (NtInitiatePowerAction.c)
 *     PoUserShutdownCancelled @ 0x1404F8770 (PoUserShutdownCancelled.c)
 *     EtwShutdown @ 0x1404F87F0 (EtwShutdown.c)
 *     MiSessionCreate @ 0x1404FE8CC (MiSessionCreate.c)
 *     NtInitializeRegistry @ 0x14050C454 (NtInitializeRegistry.c)
 *     SepInitializationPhase1 @ 0x1405262AC (SepInitializationPhase1.c)
 *     PsRegisterMonitorServerSilo @ 0x140526694 (PsRegisterMonitorServerSilo.c)
 *     MiCreatePagingFile @ 0x140537A84 (MiCreatePagingFile.c)
 *     SepRmSetAuditEventWrkr @ 0x14053C5B4 (SepRmSetAuditEventWrkr.c)
 *     CmLockKcbForWrite @ 0x140541740 (CmLockKcbForWrite.c)
 *     NtSetDefaultHardErrorPort @ 0x14054A2E4 (NtSetDefaultHardErrorPort.c)
 *     PspConvertSiloToServerSilo @ 0x14063FFCC (PspConvertSiloToServerSilo.c)
 *     PspConvertJobToMixed @ 0x140642094 (PspConvertJobToMixed.c)
 *     EtwpEnableDisableUMGL @ 0x14065FE08 (EtwpEnableDisableUMGL.c)
 *     EtwpUpdatePerProcessTracing @ 0x14065FFB0 (EtwpUpdatePerProcessTracing.c)
 *     ExpRaiseHardError @ 0x1406735D8 (ExpRaiseHardError.c)
 * Callees:
 *     PsEqualCurrentServerSilo @ 0x140079760 (PsEqualCurrentServerSilo.c)
 */

bool PsIsCurrentThreadInServerSilo()
{
  return !PsEqualCurrentServerSilo(0LL);
}
