/*
 * XREFs of PsIsCurrentThreadInServerSilo @ 0x1400C3CF0
 * Callers:
 *     RtlGetNtProductType @ 0x1400ACBEC (RtlGetNtProductType.c)
 *     NtSetSystemInformation @ 0x1403E9F6C (NtSetSystemInformation.c)
 *     SepCreateClientSecurityEx @ 0x140412280 (SepCreateClientSecurityEx.c)
 *     CmpDoParseKey @ 0x140453D10 (CmpDoParseKey.c)
 *     NtImpersonateAnonymousToken @ 0x140475D5C (NtImpersonateAnonymousToken.c)
 *     ObpParseSymbolicLinkEx @ 0x140476170 (ObpParseSymbolicLinkEx.c)
 *     RtlGetSuiteMask @ 0x1404DE260 (RtlGetSuiteMask.c)
 *     NtLoadDriver @ 0x1404E648C (NtLoadDriver.c)
 *     RtlSetConsoleSessionForegroundProcessId @ 0x1404E9218 (RtlSetConsoleSessionForegroundProcessId.c)
 *     PsQueryCurrentApiSetSchema @ 0x1404EB8E4 (PsQueryCurrentApiSetSchema.c)
 *     NtPlugPlayControl @ 0x1405002B8 (NtPlugPlayControl.c)
 *     RtlIsMultiSessionSku @ 0x1405037BC (RtlIsMultiSessionSku.c)
 *     NtPowerInformation @ 0x14051E834 (NtPowerInformation.c)
 *     NtInitiatePowerAction @ 0x140530B04 (NtInitiatePowerAction.c)
 *     PoUserShutdownCancelled @ 0x14053146C (PoUserShutdownCancelled.c)
 *     EtwShutdown @ 0x1405314F0 (EtwShutdown.c)
 *     PoUserShutdownInitiated @ 0x1405341E0 (PoUserShutdownInitiated.c)
 *     MiSessionCreate @ 0x140535604 (MiSessionCreate.c)
 *     IopUnloadDriver @ 0x140544E28 (IopUnloadDriver.c)
 *     NtInitializeRegistry @ 0x140547164 (NtInitializeRegistry.c)
 *     RtlSetActiveConsoleId @ 0x140548778 (RtlSetActiveConsoleId.c)
 *     SepInitializationPhase1 @ 0x140552FE0 (SepInitializationPhase1.c)
 *     MiCreatePagingFile @ 0x140568224 (MiCreatePagingFile.c)
 *     SepRmSetAuditEventWrkr @ 0x14056B8B8 (SepRmSetAuditEventWrkr.c)
 *     CmLockKeyForWrite @ 0x140574BC8 (CmLockKeyForWrite.c)
 *     NtSetDefaultHardErrorPort @ 0x14057F78C (NtSetDefaultHardErrorPort.c)
 *     PspConvertSiloToServerSilo @ 0x14067E520 (PspConvertSiloToServerSilo.c)
 *     PspCreateSilo @ 0x14067E65C (PspCreateSilo.c)
 *     PsShutdownSystem @ 0x14067F844 (PsShutdownSystem.c)
 *     PspConvertJobToMixed @ 0x1406804D8 (PspConvertJobToMixed.c)
 *     EtwSetPerformanceTraceInformation @ 0x1406A3914 (EtwSetPerformanceTraceInformation.c)
 *     EtwpGetSoftRestartInformation @ 0x1406A9C84 (EtwpGetSoftRestartInformation.c)
 *     EtwpSetSoftRestartInformation @ 0x1406AA708 (EtwpSetSoftRestartInformation.c)
 *     NtSetSystemTime @ 0x1406AD104 (NtSetSystemTime.c)
 *     ExpRaiseHardError @ 0x1406B634C (ExpRaiseHardError.c)
 * Callees:
 *     PspIsServerSilo @ 0x1400B2DF8 (PspIsServerSilo.c)
 */

bool PsIsCurrentThreadInServerSilo()
{
  struct _KTHREAD *CurrentThread; // rcx
  __int64 v1; // rcx
  __int64 v3; // rcx

  CurrentThread = KeGetCurrentThread();
  if ( *(_QWORD *)&CurrentThread[1].WaitBlockFill11[160] == -3LL )
  {
    v1 = CurrentThread->Process[1].Affinity.Bitmap[16];
    if ( !v1 )
      return 0;
    do
    {
      if ( (*(_DWORD *)(v1 + 1304) & 0x40000000) != 0 )
        break;
      v1 = *(_QWORD *)(v1 + 1056);
    }
    while ( v1 );
  }
  else
  {
    v1 = *(_QWORD *)&CurrentThread[1].WaitBlockFill11[160];
  }
  if ( !v1 )
    return 0;
  while ( !PspIsServerSilo(v1) )
    v1 = *(_QWORD *)(v3 + 1064);
  return v3 != 0;
}
