/*
 * XREFs of FsRtlFreeExtraCreateParameter @ 0x140413F90
 * Callers:
 *     FsRtlCheckOplockEx @ 0x14007A100 (FsRtlCheckOplockEx.c)
 *     FsRtlpAttachOplockKey @ 0x14007BA34 (FsRtlpAttachOplockKey.c)
 *     IopDeleteFileObjectExtension @ 0x1400990A0 (IopDeleteFileObjectExtension.c)
 *     FsRtlFreeExtraCreateParameterList @ 0x140413E58 (FsRtlFreeExtraCreateParameterList.c)
 *     FsRtlpCleanupEcps @ 0x140413ED0 (FsRtlpCleanupEcps.c)
 *     IopParseDevice @ 0x14043F7C0 (IopParseDevice.c)
 *     IopCreateFile @ 0x14045A850 (IopCreateFile.c)
 *     PspCreateUserProcessEcp @ 0x14045B718 (PspCreateUserProcessEcp.c)
 *     IopSymlinkUpdateECP @ 0x140541110 (IopSymlinkUpdateECP.c)
 *     IopSymlinkAllocateAndAddECP @ 0x1405414C4 (IopSymlinkAllocateAndAddECP.c)
 *     IopGraftName @ 0x140541568 (IopGraftName.c)
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
