/*
 * XREFs of FsRtlAllocateExtraCreateParameter @ 0x1404E3950
 * Callers:
 *     PspCreateUserProcessEcp @ 0x14045B718 (PspCreateUserProcessEcp.c)
 *     IopSymlinkEnforceEnabledTypes @ 0x1405807BC (IopSymlinkEnforceEnabledTypes.c)
 * Callees:
 *     ExAllocatePoolWithQuotaTag @ 0x140012330 (ExAllocatePoolWithQuotaTag.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 */

NTSTATUS __stdcall FsRtlAllocateExtraCreateParameter(
        LPCGUID EcpType,
        ULONG SizeOfContext,
        FSRTL_ALLOCATE_ECP_FLAGS Flags,
        PFSRTL_EXTRA_CREATE_PARAMETER_CLEANUP_CALLBACK CleanupCallback,
        ULONG PoolTag,
        PVOID *EcpContext)
{
  ULONG v6; // edi
  int v9; // ebx
  POOL_TYPE v10; // ecx
  char *PoolWithQuotaTag; // rax
  GUID v12; // xmm0

  v6 = SizeOfContext + 72;
  v9 = 2;
  *EcpContext = 0LL;
  if ( SizeOfContext >= 0xFFFFFFB8 )
    return -1073741675;
  if ( (Flags & 2) != 0 )
  {
    v10 = NonPagedPoolNx;
    v9 = 66;
  }
  else
  {
    v10 = PagedPool;
  }
  if ( (Flags & 1) != 0 )
    PoolWithQuotaTag = (char *)ExAllocatePoolWithQuotaTag((POOL_TYPE)(v10 | 8), v6, PoolTag);
  else
    PoolWithQuotaTag = (char *)ExAllocatePoolWithTag(v10, v6, PoolTag);
  if ( !PoolWithQuotaTag )
    return -1073741670;
  *((_DWORD *)PoolWithQuotaTag + 1) = 0;
  *((_QWORD *)PoolWithQuotaTag + 2) = 0LL;
  *((_QWORD *)PoolWithQuotaTag + 1) = 0LL;
  *(_DWORD *)PoolWithQuotaTag = 1215324997;
  v12 = *EcpType;
  *((_QWORD *)PoolWithQuotaTag + 7) = 0LL;
  *((_QWORD *)PoolWithQuotaTag + 8) = 0LL;
  *(GUID *)(PoolWithQuotaTag + 24) = v12;
  *((_QWORD *)PoolWithQuotaTag + 5) = CleanupCallback;
  *((_DWORD *)PoolWithQuotaTag + 12) = v9;
  *((_DWORD *)PoolWithQuotaTag + 13) = v6;
  *EcpContext = PoolWithQuotaTag + 72;
  return 0;
}
