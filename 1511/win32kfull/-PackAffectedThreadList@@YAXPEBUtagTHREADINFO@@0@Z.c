/*
 * XREFs of ?PackAffectedThreadList@@YAXPEBUtagTHREADINFO@@0@Z @ 0x1C008B1E0
 * Callers:
 *     PackAffectedThreadsFromThreadCleanup @ 0x1C008B330 (PackAffectedThreadsFromThreadCleanup.c)
 *     zzzReattachThreads @ 0x1C008B6B4 (zzzReattachThreads.c)
 * Callees:
 *     ?InAffectedThreadList@@YAPEAUPTI_LIST@@PEBUtagTHREADINFO@@@Z @ 0x1C008B368 (-InAffectedThreadList@@YAPEAUPTI_LIST@@PEBUtagTHREADINFO@@@Z.c)
 *     ?UnpackAffectedThreadList@@YAXXZ @ 0x1C008BF9C (-UnpackAffectedThreadList@@YAXXZ.c)
 */

void __fastcall PackAffectedThreadList(const struct tagTHREADINFO *a1, struct _LIST_ENTRY **a2)
{
  struct _LIST_ENTRY *v2; // r10
  struct _LIST_ENTRY *v5; // rsi
  struct _LIST_ENTRY *i; // rbx
  struct _LIST_ENTRY *v7; // rdi
  struct _LIST_ENTRY *v8; // rcx
  struct _LIST_ENTRY *v9; // r8
  struct _LIST_ENTRY *v10; // rax
  struct _LIST_ENTRY *Flink; // rax

  v2 = (struct _LIST_ENTRY *)*((_QWORD *)a1 + 51);
  v5 = v2 + 10;
  if ( gListAffectedThreadsForQueueRecalc.Flink != &gListAffectedThreadsForQueueRecalc )
  {
    Flink = off_1C031B808[1].Flink;
    if ( Flink )
    {
      if ( Flink[25].Blink != v2 )
        UnpackAffectedThreadList();
    }
  }
  for ( i = v5->Flink; i != v5; i = i->Flink )
  {
    v7 = i - 41;
    v8 = i[-17].Flink;
    if ( (v8 == *((struct _LIST_ENTRY **)a1 + 48)
       || v8 == (struct _LIST_ENTRY *)gpqForeground
       || v8 == (struct _LIST_ENTRY *)gpqForegroundPrev
       || a2 && v8 == a2[48])
      && ((__int64)v7[27].Blink & 1) == 0
      && !InAffectedThreadList((const struct tagTHREADINFO *)&i[-41]) )
    {
      if ( (gnThreadsAffectedForQueueRecalc & 0x3F) == 0 )
      {
        v9 = (struct _LIST_ENTRY *)Win32AllocPoolZInit(1536LL, 1767994197LL);
        if ( !v9 )
        {
          UnpackAffectedThreadList();
          return;
        }
      }
      v9[1].Flink = v7;
      v10 = off_1C031B808;
      v9->Flink = &gListAffectedThreadsForQueueRecalc;
      v9->Blink = v10;
      if ( v10->Flink != &gListAffectedThreadsForQueueRecalc )
        __fastfail(3u);
      v10->Flink = v9;
      off_1C031B808 = v9;
      ++gnThreadsAffectedForQueueRecalc;
    }
  }
}
