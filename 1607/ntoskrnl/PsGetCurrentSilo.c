/*
 * XREFs of PsGetCurrentSilo @ 0x140405240
 * Callers:
 *     PsGetThreadProperty @ 0x1400EC3B0 (PsGetThreadProperty.c)
 *     IoRevokeHandlesForProcess @ 0x1401C9960 (IoRevokeHandlesForProcess.c)
 *     ObReferenceObjectByNameEx @ 0x1403E4434 (ObReferenceObjectByNameEx.c)
 *     NtQueryFullAttributesFile @ 0x140404848 (NtQueryFullAttributesFile.c)
 *     ObReferenceObjectByName @ 0x140404AA0 (ObReferenceObjectByName.c)
 *     NtOpenSection @ 0x140404CE4 (NtOpenSection.c)
 *     ObpInsertOrLocateNamedObject @ 0x140404DA0 (ObpInsertOrLocateNamedObject.c)
 *     ObQueryNameStringMode @ 0x140433A60 (ObQueryNameStringMode.c)
 *     ObpCreateSymbolicLinkName @ 0x1404A33C8 (ObpCreateSymbolicLinkName.c)
 *     VRegEnabledInJob @ 0x1404CB334 (VRegEnabledInJob.c)
 *     EtwpWriteAppStateChangeSummary @ 0x14054AF18 (EtwpWriteAppStateChangeSummary.c)
 *     PsRegisterSiloMonitor @ 0x1405523D8 (PsRegisterSiloMonitor.c)
 *     NtDeleteFile @ 0x14057D8D8 (NtDeleteFile.c)
 *     PsGetSiloIdentifier @ 0x1405815C4 (PsGetSiloIdentifier.c)
 *     IopFastQueryNetworkAttributes @ 0x140623F6C (IopFastQueryNetworkAttributes.c)
 *     PsRootSiloInformation @ 0x14067E15C (PsRootSiloInformation.c)
 *     ObGetSiloRootDirectoryPath @ 0x1406E63BC (ObGetSiloRootDirectoryPath.c)
 * Callees:
 *     <none>
 */

__int64 PsGetCurrentSilo()
{
  struct _KTHREAD *CurrentThread; // rax

  CurrentThread = KeGetCurrentThread();
  if ( *(_QWORD *)&CurrentThread[1].WaitBlockFill11[160] == -3LL )
    return PspGetJobSilo(CurrentThread->Process[1].Affinity.Bitmap[16]);
  else
    return *(_QWORD *)&CurrentThread[1].WaitBlockFill11[160];
}
