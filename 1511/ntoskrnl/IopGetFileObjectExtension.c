/*
 * XREFs of IopGetFileObjectExtension @ 0x14007CDA0
 * Callers:
 *     IoGetOplockFullFoExt @ 0x140036368 (IoGetOplockFullFoExt.c)
 *     IoChangeFileObjectFilterContext @ 0x14007BE18 (IoChangeFileObjectFilterContext.c)
 *     IopfCompleteRequest @ 0x140084CF0 (IopfCompleteRequest.c)
 *     NtSetInformationFile @ 0x14008E8E0 (NtSetInformationFile.c)
 *     IoSetOplockPrivateFoExt @ 0x1400CAF20 (IoSetOplockPrivateFoExt.c)
 *     IoGetOplockKeyContextEx @ 0x1400CC128 (IoGetOplockKeyContextEx.c)
 *     IopSetLockOperationProcess @ 0x1400CC17C (IopSetLockOperationProcess.c)
 *     IopGetSetSpecificExtension @ 0x1400CC2E8 (IopGetSetSpecificExtension.c)
 *     IoGetInitiatorProcess @ 0x1400F2C2C (IoGetInitiatorProcess.c)
 *     IoSetOplockKeyContext @ 0x14012BCAC (IoSetOplockKeyContext.c)
 *     IoFreeSfioStreamIdentifier @ 0x1401BACB0 (IoFreeSfioStreamIdentifier.c)
 *     IoGetOplockKeyContext @ 0x1401BADEC (IoGetOplockKeyContext.c)
 *     IopAdjustFileObjectKeepAliveCount @ 0x1401BBE08 (IopAdjustFileObjectKeepAliveCount.c)
 *     IopXxxControlFile @ 0x140410C30 (IopXxxControlFile.c)
 *     IopParseDevice @ 0x140412F10 (IopParseDevice.c)
 *     IopCloseFile @ 0x14042ECB0 (IopCloseFile.c)
 *     IopSynchronousServiceTail @ 0x140437580 (IopSynchronousServiceTail.c)
 *     IopSymlinkSetFoExtension @ 0x14049118C (IopSymlinkSetFoExtension.c)
 *     IopOpenLinkOrRenameTarget @ 0x1404B43D0 (IopOpenLinkOrRenameTarget.c)
 *     IopSymlinkCreateECP @ 0x1404C0CD4 (IopSymlinkCreateECP.c)
 *     IopGraftName @ 0x1404C0FB0 (IopGraftName.c)
 *     IopSetFileObjectIosbRange @ 0x1405F8D44 (IopSetFileObjectIosbRange.c)
 *     IoCopyDeviceObjectHint @ 0x1405F9D1C (IoCopyDeviceObjectHint.c)
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
