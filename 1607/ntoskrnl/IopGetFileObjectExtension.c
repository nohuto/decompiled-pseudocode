/*
 * XREFs of IopGetFileObjectExtension @ 0x14007B520
 * Callers:
 *     IopfCompleteRequest @ 0x140053570 (IopfCompleteRequest.c)
 *     IoSetOplockPrivateFoExt @ 0x140078384 (IoSetOplockPrivateFoExt.c)
 *     IopSetLockOperationProcess @ 0x1400784D8 (IopSetLockOperationProcess.c)
 *     NtSetInformationFile @ 0x140079360 (NtSetInformationFile.c)
 *     IoGetSilo @ 0x140079F48 (IoGetSilo.c)
 *     IopGetSetSpecificExtension @ 0x14007AE90 (IopGetSetSpecificExtension.c)
 *     IoGetOplockFullFoExt @ 0x14007AF5C (IoGetOplockFullFoExt.c)
 *     IoGetOplockKeyContextEx @ 0x14007B498 (IoGetOplockKeyContextEx.c)
 *     IoChangeFileObjectFilterContext @ 0x14007B4BC (IoChangeFileObjectFilterContext.c)
 *     IoGetInitiatorProcess @ 0x1400B410C (IoGetInitiatorProcess.c)
 *     IoSetOplockKeyContext @ 0x140133160 (IoSetOplockKeyContext.c)
 *     IoFreeSfioStreamIdentifier @ 0x1401C8AF8 (IoFreeSfioStreamIdentifier.c)
 *     IoGetOplockKeyContext @ 0x1401C8C34 (IoGetOplockKeyContext.c)
 *     IopAdjustFileObjectKeepAliveCount @ 0x1401C9C40 (IopAdjustFileObjectKeepAliveCount.c)
 *     IopParseDevice @ 0x1404408F0 (IopParseDevice.c)
 *     IopCloseFile @ 0x140443140 (IopCloseFile.c)
 *     IopSynchronousServiceTail @ 0x1404457B0 (IopSynchronousServiceTail.c)
 *     IopOpenLinkOrRenameTarget @ 0x1404D9450 (IopOpenLinkOrRenameTarget.c)
 *     IopSymlinkSetFoExtension @ 0x140533B70 (IopSymlinkSetFoExtension.c)
 *     IopSymlinkCreateECP @ 0x140540D4C (IopSymlinkCreateECP.c)
 *     IopGraftName @ 0x140541028 (IopGraftName.c)
 *     IopSetFileObjectIosbRange @ 0x140622BE4 (IopSetFileObjectIosbRange.c)
 *     IoCopyDeviceObjectHint @ 0x140623694 (IoCopyDeviceObjectHint.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall IopGetFileObjectExtension(__int64 a1, int a2, _QWORD *a3)
{
  _QWORD *v3; // rax
  __int64 v4; // rdx

  v3 = *(_QWORD **)(a1 + 208);
  if ( !v3 )
  {
    if ( a3 )
      *a3 = 0LL;
    return 0LL;
  }
  if ( v3 == IopRevocationExtension )
    return 0LL;
  v4 = v3[a2 + 1];
  if ( a3 )
    *a3 = v3;
  return v4;
}
