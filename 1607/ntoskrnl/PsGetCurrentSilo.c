/*
 * XREFs of PsGetCurrentSilo @ 0x140406380
 * Callers:
 *     PsGetThreadProperty @ 0x1400EE530 (PsGetThreadProperty.c)
 *     IoRevokeHandlesForProcess @ 0x1401C9AC0 (IoRevokeHandlesForProcess.c)
 *     NtQueryFullAttributesFile @ 0x140405988 (NtQueryFullAttributesFile.c)
 *     ObReferenceObjectByName @ 0x140405BE0 (ObReferenceObjectByName.c)
 *     NtOpenSection @ 0x140405E24 (NtOpenSection.c)
 *     ObpInsertOrLocateNamedObject @ 0x140405EE0 (ObpInsertOrLocateNamedObject.c)
 *     ObQueryNameStringMode @ 0x140434B90 (ObQueryNameStringMode.c)
 *     ObReferenceObjectByNameEx @ 0x140499E04 (ObReferenceObjectByNameEx.c)
 *     ObpCreateSymbolicLinkName @ 0x1404B8FE8 (ObpCreateSymbolicLinkName.c)
 *     VRegEnabledInJob @ 0x1404E9244 (VRegEnabledInJob.c)
 *     EtwpWriteAppStateChangeSummary @ 0x14054A9D8 (EtwpWriteAppStateChangeSummary.c)
 *     PsRegisterSiloMonitor @ 0x140551E98 (PsRegisterSiloMonitor.c)
 *     NtDeleteFile @ 0x14057D42C (NtDeleteFile.c)
 *     PsGetSiloIdentifier @ 0x140581118 (PsGetSiloIdentifier.c)
 *     IopFastQueryNetworkAttributes @ 0x140623EB8 (IopFastQueryNetworkAttributes.c)
 *     PsRootSiloInformation @ 0x14067E078 (PsRootSiloInformation.c)
 *     ObGetSiloRootDirectoryPath @ 0x1406E6284 (ObGetSiloRootDirectoryPath.c)
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
