/*
 * XREFs of FsRtlAllocateExtraCreateParameterList @ 0x140472610
 * Callers:
 *     PspCreateUserProcessEcp @ 0x14050B0E0 (PspCreateUserProcessEcp.c)
 *     IopSymlinkAllocateAndAddECP @ 0x140548E7C (IopSymlinkAllocateAndAddECP.c)
 * Callees:
 *     ExAllocateFromNPagedLookasideList @ 0x140030738 (ExAllocateFromNPagedLookasideList.c)
 *     ExAllocatePoolWithQuotaTag @ 0x140045B50 (ExAllocatePoolWithQuotaTag.c)
 */

NTSTATUS __stdcall FsRtlAllocateExtraCreateParameterList(FSRTL_ALLOCATE_ECPLIST_FLAGS Flags, PECP_LIST *EcpList)
{
  int v2; // ebx
  struct _ECP_LIST *PoolWithQuotaTag; // rax
  struct _ECP_LIST *v5; // rcx
  _LIST_ENTRY *p_EcpList; // rax
  NTSTATUS result; // eax

  v2 = 0;
  *EcpList = 0LL;
  if ( (Flags & 1) != 0 )
  {
    PoolWithQuotaTag = (struct _ECP_LIST *)ExAllocatePoolWithQuotaTag((POOL_TYPE)9, 0x18uLL, 0x6C655346u);
  }
  else
  {
    PoolWithQuotaTag = (struct _ECP_LIST *)ExAllocateFromNPagedLookasideList(&FsRtlEcpListLookaside);
    v2 = 4;
  }
  v5 = PoolWithQuotaTag;
  if ( !PoolWithQuotaTag )
    return -1073741670;
  p_EcpList = &PoolWithQuotaTag->EcpList;
  p_EcpList->Blink = p_EcpList;
  p_EcpList->Flink = p_EcpList;
  result = 0;
  v5->Flags = v2 | 2;
  v5->Signature = 1282433861;
  *EcpList = v5;
  return result;
}
