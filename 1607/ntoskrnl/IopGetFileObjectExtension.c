/*
 * XREFs of IopGetFileObjectExtension @ 0x14007B5A0
 * Callers:
 *     IopfCompleteRequest @ 0x1400530F0 (IopfCompleteRequest.c)
 *     IoSetOplockPrivateFoExt @ 0x140078404 (IoSetOplockPrivateFoExt.c)
 *     IopSetLockOperationProcess @ 0x140078558 (IopSetLockOperationProcess.c)
 *     NtSetInformationFile @ 0x1400793E0 (NtSetInformationFile.c)
 *     IoGetSilo @ 0x140079FC8 (IoGetSilo.c)
 *     IopGetSetSpecificExtension @ 0x14007AF10 (IopGetSetSpecificExtension.c)
 *     IoGetOplockFullFoExt @ 0x14007AFDC (IoGetOplockFullFoExt.c)
 *     IoGetOplockKeyContextEx @ 0x14007B518 (IoGetOplockKeyContextEx.c)
 *     IoChangeFileObjectFilterContext @ 0x14007B53C (IoChangeFileObjectFilterContext.c)
 *     IoGetInitiatorProcess @ 0x1400B1F8C (IoGetInitiatorProcess.c)
 *     IoSetOplockKeyContext @ 0x1401336D0 (IoSetOplockKeyContext.c)
 *     IoFreeSfioStreamIdentifier @ 0x1401C8998 (IoFreeSfioStreamIdentifier.c)
 *     IoGetOplockKeyContext @ 0x1401C8AD4 (IoGetOplockKeyContext.c)
 *     IopAdjustFileObjectKeepAliveCount @ 0x1401C9AE0 (IopAdjustFileObjectKeepAliveCount.c)
 *     IopParseDevice @ 0x14043F7C0 (IopParseDevice.c)
 *     IopCloseFile @ 0x140442010 (IopCloseFile.c)
 *     IopSynchronousServiceTail @ 0x140444680 (IopSynchronousServiceTail.c)
 *     IopOpenLinkOrRenameTarget @ 0x1404BCA54 (IopOpenLinkOrRenameTarget.c)
 *     IopSymlinkSetFoExtension @ 0x1405340B0 (IopSymlinkSetFoExtension.c)
 *     IopSymlinkCreateECP @ 0x14054128C (IopSymlinkCreateECP.c)
 *     IopGraftName @ 0x140541568 (IopGraftName.c)
 *     IopSetFileObjectIosbRange @ 0x140622C98 (IopSetFileObjectIosbRange.c)
 *     IoCopyDeviceObjectHint @ 0x140623748 (IoCopyDeviceObjectHint.c)
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
