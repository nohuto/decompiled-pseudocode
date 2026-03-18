/*
 * XREFs of FsRtlAllocateExtraCreateParameterList @ 0x14045C9A0
 * Callers:
 *     PspCreateUserProcessEcp @ 0x14045C848 (PspCreateUserProcessEcp.c)
 *     IopSymlinkAllocateAndAddECP @ 0x140540F84 (IopSymlinkAllocateAndAddECP.c)
 * Callees:
 *     ExAllocatePoolWithQuotaTag @ 0x1400127B0 (ExAllocatePoolWithQuotaTag.c)
 *     RtlpInterlockedPopEntrySList @ 0x140166E00 (RtlpInterlockedPopEntrySList.c)
 */

NTSTATUS __stdcall FsRtlAllocateExtraCreateParameterList(FSRTL_ALLOCATE_ECPLIST_FLAGS Flags, PECP_LIST *EcpList)
{
  int v2; // ebx
  struct _ECP_LIST *PoolWithQuotaTag; // rax
  _LOOKASIDE_LIST_EX *v5; // r9

  v2 = 0;
  *EcpList = 0LL;
  if ( (Flags & 1) != 0 )
  {
    PoolWithQuotaTag = (struct _ECP_LIST *)ExAllocatePoolWithQuotaTag((POOL_TYPE)9, 0x18uLL, 0x6C655346u);
  }
  else
  {
    ++FsRtlEcpListLookaside.L.TotalAllocates;
    PoolWithQuotaTag = (struct _ECP_LIST *)RtlpInterlockedPopEntrySList(&FsRtlEcpListLookaside.L.ListHead);
    if ( !PoolWithQuotaTag )
    {
      ++FsRtlEcpListLookaside.L.AllocateMisses;
      PoolWithQuotaTag = (struct _ECP_LIST *)FsRtlEcpListLookaside.L.AllocateEx(
                                               FsRtlEcpListLookaside.L.Type,
                                               FsRtlEcpListLookaside.L.Size,
                                               FsRtlEcpListLookaside.L.Tag,
                                               v5);
    }
    v2 = 4;
  }
  if ( !PoolWithQuotaTag )
    return -1073741670;
  PoolWithQuotaTag->EcpList.Blink = &PoolWithQuotaTag->EcpList;
  PoolWithQuotaTag->EcpList.Flink = &PoolWithQuotaTag->EcpList;
  PoolWithQuotaTag->Flags = v2 | 2;
  PoolWithQuotaTag->Signature = 1282433861;
  *EcpList = PoolWithQuotaTag;
  return 0;
}
