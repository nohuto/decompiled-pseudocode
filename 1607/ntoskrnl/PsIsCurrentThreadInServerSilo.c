/*
 * XREFs of PsIsCurrentThreadInServerSilo @ 0x1400C1B90
 * Callers:
 *     RtlGetNtProductType @ 0x1400AB154 (RtlGetNtProductType.c)
 *     NtSetSystemInformation @ 0x1403EB59C (NtSetSystemInformation.c)
 *     SepCreateClientSecurityEx @ 0x140411140 (SepCreateClientSecurityEx.c)
 *     CmpDoParseKey @ 0x140452BE0 (CmpDoParseKey.c)
 *     NtImpersonateAnonymousToken @ 0x140474C2C (NtImpersonateAnonymousToken.c)
 *     ObpParseSymbolicLinkEx @ 0x140475040 (ObpParseSymbolicLinkEx.c)
 *     RtlGetSuiteMask @ 0x1404C1864 (RtlGetSuiteMask.c)
 *     NtLoadDriver @ 0x1404C8DFC (NtLoadDriver.c)
 *     RtlSetConsoleSessionForegroundProcessId @ 0x1404CB308 (RtlSetConsoleSessionForegroundProcessId.c)
 *     PsQueryCurrentApiSetSchema @ 0x1404CD96C (PsQueryCurrentApiSetSchema.c)
 *     NtPlugPlayControl @ 0x1404E3248 (NtPlugPlayControl.c)
 *     RtlIsMultiSessionSku @ 0x1404E674C (RtlIsMultiSessionSku.c)
 *     NtPowerInformation @ 0x14050189C (NtPowerInformation.c)
 *     NtInitiatePowerAction @ 0x140531044 (NtInitiatePowerAction.c)
 *     PoUserShutdownCancelled @ 0x1405319AC (PoUserShutdownCancelled.c)
 *     EtwShutdown @ 0x140531A30 (EtwShutdown.c)
 *     PoUserShutdownInitiated @ 0x140534720 (PoUserShutdownInitiated.c)
 *     MiSessionCreate @ 0x140535B44 (MiSessionCreate.c)
 *     IopUnloadDriver @ 0x140545368 (IopUnloadDriver.c)
 *     NtInitializeRegistry @ 0x1405476A4 (NtInitializeRegistry.c)
 *     RtlSetActiveConsoleId @ 0x140548CB8 (RtlSetActiveConsoleId.c)
 *     SepInitializationPhase1 @ 0x140553520 (SepInitializationPhase1.c)
 *     MiCreatePagingFile @ 0x140568764 (MiCreatePagingFile.c)
 *     SepRmSetAuditEventWrkr @ 0x14056BDF8 (SepRmSetAuditEventWrkr.c)
 *     CmLockKeyForWrite @ 0x140575108 (CmLockKeyForWrite.c)
 *     NtSetDefaultHardErrorPort @ 0x14057FC38 (NtSetDefaultHardErrorPort.c)
 *     PspConvertSiloToServerSilo @ 0x14067E604 (PspConvertSiloToServerSilo.c)
 *     PspCreateSilo @ 0x14067E740 (PspCreateSilo.c)
 *     PsShutdownSystem @ 0x14067F928 (PsShutdownSystem.c)
 *     PspConvertJobToMixed @ 0x1406805BC (PspConvertJobToMixed.c)
 *     EtwSetPerformanceTraceInformation @ 0x1406A3A4C (EtwSetPerformanceTraceInformation.c)
 *     EtwpGetSoftRestartInformation @ 0x1406A9DBC (EtwpGetSoftRestartInformation.c)
 *     EtwpSetSoftRestartInformation @ 0x1406AA840 (EtwpSetSoftRestartInformation.c)
 *     NtSetSystemTime @ 0x1406AD23C (NtSetSystemTime.c)
 *     ExpRaiseHardError @ 0x1406B6484 (ExpRaiseHardError.c)
 * Callees:
 *     PspIsServerSilo @ 0x1400B0D44 (PspIsServerSilo.c)
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
