/*
 * XREFs of FsRtlInsertExtraCreateParameter @ 0x14050B1D0
 * Callers:
 *     PspCreateUserProcessEcp @ 0x14050B0E0 (PspCreateUserProcessEcp.c)
 *     IopSymlinkAllocateAndAddECP @ 0x140548E7C (IopSymlinkAllocateAndAddECP.c)
 *     IopSymlinkEnforceEnabledTypes @ 0x1405C6F88 (IopSymlinkEnforceEnabledTypes.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall FsRtlInsertExtraCreateParameter(PECP_LIST EcpList, PVOID EcpContext)
{
  struct _LIST_ENTRY *Flink; // r8
  _LIST_ENTRY *p_EcpList; // rax
  char *v4; // r9
  struct _LIST_ENTRY *v5; // rcx
  struct _LIST_ENTRY *Blink; // rdx

  Flink = EcpList->EcpList.Flink;
  p_EcpList = &EcpList->EcpList;
  if ( Flink == &EcpList->EcpList )
  {
LABEL_6:
    v5 = (struct _LIST_ENTRY *)((char *)EcpContext - 64);
    Blink = p_EcpList->Blink;
    v5->Flink = p_EcpList;
    v5->Blink = Blink;
    if ( Blink->Flink != p_EcpList )
      __fastfail(3u);
    Blink->Flink = v5;
    p_EcpList->Blink = v5;
    return 0;
  }
  else
  {
    while ( 1 )
    {
      v4 = (char *)Flink[1].Flink - *((_QWORD *)EcpContext - 6);
      if ( !v4 )
        v4 = (char *)Flink[1].Blink - *((_QWORD *)EcpContext - 5);
      if ( !v4 )
        break;
      Flink = Flink->Flink;
      if ( Flink == p_EcpList )
        goto LABEL_6;
    }
    LODWORD(Flink[2].Blink) |= 4u;
    return -1073741811;
  }
}
