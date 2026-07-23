/*
 * XREFs of FsRtlpRestoreCallerEcpsToCallerList @ 0x1401B8004
 * Callers:
 *     IopFastQueryNetworkAttributes @ 0x140623F6C (IopFastQueryNetworkAttributes.c)
 * Callees:
 *     FsRtlFreeExtraCreateParameterList @ 0x140413E58 (FsRtlFreeExtraCreateParameterList.c)
 */

__int64 __fastcall FsRtlpRestoreCallerEcpsToCallerList(__int64 a1, struct _ECP_LIST *a2)
{
  _LIST_ENTRY *Flink; // rcx
  struct _LIST_ENTRY **p_Blink; // r9
  struct _LIST_ENTRY *v4; // rax
  struct _LIST_ENTRY *v5; // r11
  struct _LIST_ENTRY *v6; // r10
  struct _LIST_ENTRY *v7; // r9

  if ( (a2->Flags & 1) != 0 )
  {
    Flink = a2->EcpList.Flink;
    while ( Flink != &a2->EcpList )
    {
      p_Blink = &Flink[-1].Blink;
      Flink = Flink->Flink;
      if ( ((_DWORD)p_Blink[6] & 1) != 0 )
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
        v7 = (struct _LIST_ENTRY *)MEMORY[0x10];
        if ( *MEMORY[0x10] != 8LL )
          __fastfail(3u);
        v4->Flink = (struct _LIST_ENTRY *)8;
        v4->Blink = v7;
        v7->Flink = v4;
        MEMORY[0x10] = v4;
      }
    }
  }
  FsRtlFreeExtraCreateParameterList(a2);
  return 0LL;
}
