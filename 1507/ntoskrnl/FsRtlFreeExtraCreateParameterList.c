/*
 * XREFs of FsRtlFreeExtraCreateParameterList @ 0x1404765E4
 * Callers:
 *     FsRtlpRestoreCallerEcpsToCallerList @ 0x1401E1DB4 (FsRtlpRestoreCallerEcpsToCallerList.c)
 *     NtCreateUserProcess @ 0x140509350 (NtCreateUserProcess.c)
 *     FsRtlpCleanupEcps @ 0x14050AD28 (FsRtlpCleanupEcps.c)
 *     PspCreateUserProcessEcp @ 0x14050B0E0 (PspCreateUserProcessEcp.c)
 *     IopSymlinkAllocateAndAddECP @ 0x140548E7C (IopSymlinkAllocateAndAddECP.c)
 * Callees:
 *     ExFreeToNPagedLookasideList @ 0x140033280 (ExFreeToNPagedLookasideList.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     FsRtlFreeExtraCreateParameter @ 0x140476654 (FsRtlFreeExtraCreateParameter.c)
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
