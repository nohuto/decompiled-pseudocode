/*
 * XREFs of FsRtlFreeExtraCreateParameterList @ 0x140414F98
 * Callers:
 *     FsRtlpRestoreCallerEcpsToCallerList @ 0x1401B8120 (FsRtlpRestoreCallerEcpsToCallerList.c)
 *     NtCreateUserProcess @ 0x14045AB40 (NtCreateUserProcess.c)
 *     PspCreateUserProcessEcp @ 0x14045C848 (PspCreateUserProcessEcp.c)
 *     IopSymlinkAllocateAndAddECP @ 0x140540F84 (IopSymlinkAllocateAndAddECP.c)
 * Callees:
 *     ExFreeToNPagedLookasideList @ 0x14000F4A4 (ExFreeToNPagedLookasideList.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     FsRtlFreeExtraCreateParameter @ 0x1404150D0 (FsRtlFreeExtraCreateParameter.c)
 */

void __stdcall FsRtlFreeExtraCreateParameterList(PECP_LIST EcpList)
{
  _LIST_ENTRY *p_EcpList; // rbx
  struct _LIST_ENTRY *Flink; // rcx
  struct _LIST_ENTRY *v4; // rax

  p_EcpList = &EcpList->EcpList;
  while ( p_EcpList->Flink != p_EcpList )
  {
    Flink = p_EcpList->Flink;
    v4 = p_EcpList->Flink->Flink;
    if ( p_EcpList->Flink->Blink != p_EcpList || v4->Blink != Flink )
      __fastfail(3u);
    p_EcpList->Flink = v4;
    v4->Blink = p_EcpList;
    Flink->Blink = 0LL;
    Flink->Flink = 0LL;
    FsRtlFreeExtraCreateParameter(&Flink[4]);
  }
  if ( (EcpList->Flags & 4) != 0 )
    ExFreeToNPagedLookasideList(&FsRtlEcpListLookaside, EcpList);
  else
    ExFreePoolWithTag(EcpList, 0);
}
