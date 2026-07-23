/*
 * XREFs of FsRtlAllocateExtraCreateParameterFromLookasideList @ 0x14041CA30
 * Callers:
 *     IopParseDevice @ 0x14043F7C0 (IopParseDevice.c)
 *     IopSymlinkAllocateAndAddECP @ 0x1405414C4 (IopSymlinkAllocateAndAddECP.c)
 * Callees:
 *     ExAllocatePoolWithQuotaTag @ 0x140012330 (ExAllocatePoolWithQuotaTag.c)
 *     ExAllocateFromNPagedLookasideList @ 0x14006FA30 (ExAllocateFromNPagedLookasideList.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
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
  int v7; // ebp
  int v10; // r14d
  ULONG v11; // r9d
  NTSTATUS v12; // ebx
  POOL_TYPE v13; // ecx
  char *PoolWithQuotaTag; // rax
  GUID v15; // xmm0
  char *v17; // rax
  GUID v18; // xmm0

  v6 = SizeOfContext + 72;
  v7 = 2;
  v10 = 2;
  v11 = *((_DWORD *)LookasideList + 10);
  if ( (Flags & 2) != 0 )
    v10 = 66;
  if ( v6 <= *((_DWORD *)LookasideList + 11) )
  {
    v17 = (char *)ExAllocateFromNPagedLookasideList((PNPAGED_LOOKASIDE_LIST)LookasideList);
    if ( v17 )
    {
      *(_QWORD *)v17 = 1215324997LL;
      *((_QWORD *)v17 + 2) = 0LL;
      *((_QWORD *)v17 + 1) = 0LL;
      v18 = *EcpType;
      *((_QWORD *)v17 + 5) = CleanupCallback;
      *((_DWORD *)v17 + 12) = v10;
      *(GUID *)(v17 + 24) = v18;
      *((_DWORD *)v17 + 13) = v6;
      *((_QWORD *)v17 + 7) = LookasideList;
      *((_QWORD *)v17 + 8) = 0LL;
      *EcpContext = v17 + 72;
      return 0;
    }
    else
    {
      *EcpContext = 0LL;
      return -1073741670;
    }
  }
  else
  {
    v12 = 0;
    *EcpContext = 0LL;
    if ( v6 < 0x48 )
      return -1073741675;
    if ( (Flags & 2) != 0 )
    {
      v13 = NonPagedPoolNx;
      v7 = 66;
    }
    else
    {
      v13 = PagedPool;
    }
    if ( (Flags & 1) != 0 )
      PoolWithQuotaTag = (char *)ExAllocatePoolWithQuotaTag((POOL_TYPE)(v13 | 8), v6, v11);
    else
      PoolWithQuotaTag = (char *)ExAllocatePoolWithTag(v13, v6, v11);
    if ( !PoolWithQuotaTag )
      return -1073741670;
    *(_QWORD *)PoolWithQuotaTag = 1215324997LL;
    *((_QWORD *)PoolWithQuotaTag + 2) = 0LL;
    *((_QWORD *)PoolWithQuotaTag + 1) = 0LL;
    v15 = *EcpType;
    *((_QWORD *)PoolWithQuotaTag + 5) = CleanupCallback;
    *((_DWORD *)PoolWithQuotaTag + 12) = v7;
    *(GUID *)(PoolWithQuotaTag + 24) = v15;
    *((_DWORD *)PoolWithQuotaTag + 13) = v6;
    *((_QWORD *)PoolWithQuotaTag + 7) = 0LL;
    *((_QWORD *)PoolWithQuotaTag + 8) = 0LL;
    *EcpContext = PoolWithQuotaTag + 72;
    return v12;
  }
}
