/*
 * XREFs of IopGetFileObjectExtension @ 0x1400716C0
 * Callers:
 *     IopfCompleteRequest @ 0x140048F80 (IopfCompleteRequest.c)
 *     IopSetLockOperationProcess @ 0x14006DB64 (IopSetLockOperationProcess.c)
 *     NtSetInformationFile @ 0x14006DCE0 (NtSetInformationFile.c)
 *     IoGetOplockFullFoExt @ 0x140070F68 (IoGetOplockFullFoExt.c)
 *     IopGetSetSpecificExtension @ 0x14007123C (IopGetSetSpecificExtension.c)
 *     IoGetOplockKeyContextEx @ 0x140071324 (IoGetOplockKeyContextEx.c)
 *     FsRtlRemovePerFileObjectContext @ 0x140071350 (FsRtlRemovePerFileObjectContext.c)
 *     IoChangeFileObjectFilterContext @ 0x140071654 (IoChangeFileObjectFilterContext.c)
 *     IoSetOplockPrivateFoExt @ 0x140073CAC (IoSetOplockPrivateFoExt.c)
 *     IoGetInitiatorProcess @ 0x14012D94C (IoGetInitiatorProcess.c)
 *     IoSetOplockKeyContext @ 0x14015AC04 (IoSetOplockKeyContext.c)
 *     IoFreeSfioStreamIdentifier @ 0x1401F5E8C (IoFreeSfioStreamIdentifier.c)
 *     IoGetOplockKeyContext @ 0x1401F6008 (IoGetOplockKeyContext.c)
 *     IopAdjustFileObjectKeepAliveCount @ 0x1401F737C (IopAdjustFileObjectKeepAliveCount.c)
 *     IopParseDevice @ 0x14048B640 (IopParseDevice.c)
 *     IopXxxControlFile @ 0x14048DB80 (IopXxxControlFile.c)
 *     IopCloseFile @ 0x14048F8A0 (IopCloseFile.c)
 *     IopOpenLinkOrRenameTarget @ 0x1404A6950 (IopOpenLinkOrRenameTarget.c)
 *     IopSynchronousServiceTail @ 0x1404BDDC0 (IopSynchronousServiceTail.c)
 *     IopSymlinkCreateECP @ 0x140548C44 (IopSymlinkCreateECP.c)
 *     IopGraftName @ 0x140548FF4 (IopGraftName.c)
 *     IopSymlinkSetFoExtension @ 0x140559B88 (IopSymlinkSetFoExtension.c)
 *     IopSetFileObjectIosbRange @ 0x140672E30 (IopSetFileObjectIosbRange.c)
 *     IoCopyDeviceObjectHint @ 0x140673FA8 (IoCopyDeviceObjectHint.c)
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
