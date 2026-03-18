/*
 * XREFs of FsRtlAllocateExtraCreateParameterFromLookasideList @ 0x140472540
 * Callers:
 *     IopParseDevice @ 0x14048B640 (IopParseDevice.c)
 *     IopSymlinkAllocateAndAddECP @ 0x140548E7C (IopSymlinkAllocateAndAddECP.c)
 * Callees:
 *     ExAllocateFromNPagedLookasideList @ 0x140030738 (ExAllocateFromNPagedLookasideList.c)
 *     FsRtlAllocateExtraCreateParameter @ 0x14050B22C (FsRtlAllocateExtraCreateParameter.c)
 */

NTSTATUS __stdcall FsRtlAllocateExtraCreateParameterFromLookasideList(
        LPCGUID EcpType,
        ULONG SizeOfContext,
        FSRTL_ALLOCATE_ECP_FLAGS Flags,
        PFSRTL_EXTRA_CREATE_PARAMETER_CLEANUP_CALLBACK CleanupCallback,
        PVOID LookasideList,
        PVOID *EcpContext)
{
  ULONG v6; // edi
  int v7; // esi
  char *v10; // rax
  GUID v11; // xmm0

  v6 = SizeOfContext + 72;
  v7 = 2;
  if ( (Flags & 2) != 0 )
    v7 = 66;
  if ( v6 > *((_DWORD *)LookasideList + 11) )
    return FsRtlAllocateExtraCreateParameter(
             EcpType,
             SizeOfContext,
             (unsigned __int8)Flags,
             CleanupCallback,
             *((_DWORD *)LookasideList + 10),
             EcpContext);
  v10 = (char *)ExAllocateFromNPagedLookasideList((PNPAGED_LOOKASIDE_LIST)LookasideList);
  if ( v10 )
  {
    *((_QWORD *)v10 + 2) = 0LL;
    *((_QWORD *)v10 + 1) = 0LL;
    *(_QWORD *)v10 = 1215324997LL;
    v11 = *EcpType;
    *((_QWORD *)v10 + 8) = 0LL;
    *((_QWORD *)v10 + 5) = CleanupCallback;
    *(GUID *)(v10 + 24) = v11;
    *((_DWORD *)v10 + 12) = v7;
    *((_DWORD *)v10 + 13) = v6;
    *((_QWORD *)v10 + 7) = LookasideList;
    *EcpContext = v10 + 72;
    return 0;
  }
  else
  {
    *EcpContext = 0LL;
    return -1073741670;
  }
}
