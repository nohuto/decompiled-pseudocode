/*
 * XREFs of FsRtlpCleanupEcps @ 0x14050AD28
 * Callers:
 *     IopCreateFile @ 0x14050A2E0 (IopCreateFile.c)
 *     NtQueryFullAttributesFile @ 0x140524CA0 (NtQueryFullAttributesFile.c)
 *     NtQueryAttributesFile @ 0x140526CC0 (NtQueryAttributesFile.c)
 *     IopCleanupExtraCreateParameters @ 0x1405BE5D8 (IopCleanupExtraCreateParameters.c)
 * Callees:
 *     FsRtlFreeExtraCreateParameterList @ 0x1404765E4 (FsRtlFreeExtraCreateParameterList.c)
 *     FsRtlFreeExtraCreateParameter @ 0x140476654 (FsRtlFreeExtraCreateParameter.c)
 */

char __fastcall FsRtlpCleanupEcps(struct _ECP_LIST *a1)
{
  _LIST_ENTRY *p_EcpList; // rdi
  struct _LIST_ENTRY *Flink; // rbx
  struct _LIST_ENTRY **p_Blink; // rcx
  struct _LIST_ENTRY *v4; // rax
  struct _LIST_ENTRY *v5; // r8
  struct _LIST_ENTRY *v6; // rdx

  if ( (a1->Flags & 1) != 0 )
  {
    p_EcpList = &a1->EcpList;
    Flink = a1->EcpList.Flink;
    while ( Flink != p_EcpList )
    {
      p_Blink = &Flink[-1].Blink;
      Flink = Flink->Flink;
      if ( ((_DWORD)p_Blink[6] & 1) == 0 )
      {
        v4 = (struct _LIST_ENTRY *)(p_Blink + 1);
        v5 = p_Blink[1];
        v6 = p_Blink[2];
        if ( (struct _LIST_ENTRY **)v5->Blink != p_Blink + 1 || v6->Flink != v4 )
          __fastfail(3u);
        v6->Flink = v5;
        v5->Blink = v6;
        p_Blink[2] = 0LL;
        v4->Flink = 0LL;
        FsRtlFreeExtraCreateParameter(p_Blink + 9);
      }
    }
    return 0;
  }
  else
  {
    FsRtlFreeExtraCreateParameterList(a1);
    return 1;
  }
}
