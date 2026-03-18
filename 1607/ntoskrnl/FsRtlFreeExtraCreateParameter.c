/*
 * XREFs of FsRtlFreeExtraCreateParameter @ 0x1404150D0
 * Callers:
 *     FsRtlCheckOplockEx @ 0x14007A080 (FsRtlCheckOplockEx.c)
 *     FsRtlpAttachOplockKey @ 0x14007B9B4 (FsRtlpAttachOplockKey.c)
 *     IopDeleteFileObjectExtension @ 0x1400998A0 (IopDeleteFileObjectExtension.c)
 *     FsRtlFreeExtraCreateParameterList @ 0x140414F98 (FsRtlFreeExtraCreateParameterList.c)
 *     FsRtlpCleanupEcps @ 0x140415010 (FsRtlpCleanupEcps.c)
 *     IopParseDevice @ 0x1404408F0 (IopParseDevice.c)
 *     IopCreateFile @ 0x14045B980 (IopCreateFile.c)
 *     PspCreateUserProcessEcp @ 0x14045C848 (PspCreateUserProcessEcp.c)
 *     IopSymlinkUpdateECP @ 0x140540BD0 (IopSymlinkUpdateECP.c)
 *     IopSymlinkAllocateAndAddECP @ 0x140540F84 (IopSymlinkAllocateAndAddECP.c)
 *     IopGraftName @ 0x140541028 (IopGraftName.c)
 * Callees:
 *     <none>
 */

void __stdcall FsRtlFreeExtraCreateParameter(PVOID EcpContext)
{
  void (__fastcall *v1)(PVOID, char *); // rax
  struct _NPAGED_LOOKASIDE_LIST *v3; // rcx

  v1 = (void (__fastcall *)(PVOID, char *))*((_QWORD *)EcpContext - 4);
  if ( v1 )
    v1(EcpContext, (char *)EcpContext - 48);
  if ( (*((_DWORD *)EcpContext - 6) & 0x20) != 0 && FltMgrCallbacks )
    (*(void (__fastcall **)(_QWORD, PVOID))FltMgrCallbacks)(*((_QWORD *)EcpContext - 1), EcpContext);
  v3 = (struct _NPAGED_LOOKASIDE_LIST *)*((_QWORD *)EcpContext - 2);
  if ( v3 )
    ExFreeToNPagedLookasideList(v3, (char *)EcpContext - 72);
  else
    ExFreePoolWithTag((char *)EcpContext - 72, 0);
}
