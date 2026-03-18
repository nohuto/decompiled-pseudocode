/*
 * XREFs of FsRtlFreeExtraCreateParameter @ 0x1404232E0
 * Callers:
 *     FsRtlCheckOplockEx @ 0x140037050 (FsRtlCheckOplockEx.c)
 *     IopDeleteFileObjectExtension @ 0x140091B50 (IopDeleteFileObjectExtension.c)
 *     FsRtlpAttachOplockKey @ 0x1400CB06C (FsRtlpAttachOplockKey.c)
 *     IopParseDevice @ 0x140412F10 (IopParseDevice.c)
 *     FsRtlFreeExtraCreateParameterList @ 0x140422F98 (FsRtlFreeExtraCreateParameterList.c)
 *     FsRtlpCleanupEcps @ 0x140423220 (FsRtlpCleanupEcps.c)
 *     IopCreateFile @ 0x140439640 (IopCreateFile.c)
 *     PspCreateUserProcessEcp @ 0x1404484C4 (PspCreateUserProcessEcp.c)
 *     IopSymlinkUpdateECP @ 0x1404C0B58 (IopSymlinkUpdateECP.c)
 *     IopSymlinkAllocateAndAddECP @ 0x1404C0F0C (IopSymlinkAllocateAndAddECP.c)
 *     IopGraftName @ 0x1404C0FB0 (IopGraftName.c)
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
