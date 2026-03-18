/*
 * XREFs of FsRtlFreeExtraCreateParameter @ 0x140476654
 * Callers:
 *     IopDeleteFileObjectExtension @ 0x140033110 (IopDeleteFileObjectExtension.c)
 *     FsRtlpAttachOplockKey @ 0x14006DA88 (FsRtlpAttachOplockKey.c)
 *     FsRtlCheckOplockEx @ 0x140070120 (FsRtlCheckOplockEx.c)
 *     FsRtlFreeExtraCreateParameterList @ 0x1404765E4 (FsRtlFreeExtraCreateParameterList.c)
 *     IopParseDevice @ 0x14048B640 (IopParseDevice.c)
 *     FsRtlpCleanupEcps @ 0x14050AD28 (FsRtlpCleanupEcps.c)
 *     PspCreateUserProcessEcp @ 0x14050B0E0 (PspCreateUserProcessEcp.c)
 *     IopSymlinkUpdateECP @ 0x140548AC0 (IopSymlinkUpdateECP.c)
 *     IopSymlinkAllocateAndAddECP @ 0x140548E7C (IopSymlinkAllocateAndAddECP.c)
 *     IopGraftName @ 0x140548FF4 (IopGraftName.c)
 * Callees:
 *     ExFreeToNPagedLookasideList @ 0x140033280 (ExFreeToNPagedLookasideList.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 */

void __stdcall FsRtlFreeExtraCreateParameter(PVOID EcpContext)
{
  char *v1; // rbx
  void (__fastcall *v3)(PVOID, char *); // rax
  struct _NPAGED_LOOKASIDE_LIST *v4; // rcx

  v1 = (char *)EcpContext - 72;
  v3 = (void (__fastcall *)(PVOID, char *))*((_QWORD *)EcpContext - 4);
  if ( v3 )
    v3(EcpContext, v1 + 24);
  if ( (*((_DWORD *)v1 + 12) & 0x20) != 0 && FltMgrCallbacks )
    (*(void (__fastcall **)(_QWORD, PVOID))FltMgrCallbacks)(*((_QWORD *)v1 + 8), EcpContext);
  v4 = (struct _NPAGED_LOOKASIDE_LIST *)*((_QWORD *)v1 + 7);
  if ( v4 )
    ExFreeToNPagedLookasideList(v4, v1);
  else
    ExFreePoolWithTag(v1, 0);
}
