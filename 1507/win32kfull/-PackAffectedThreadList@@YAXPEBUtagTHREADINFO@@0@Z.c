/*
 * XREFs of ?PackAffectedThreadList@@YAXPEBUtagTHREADINFO@@0@Z @ 0x1C0043750
 * Callers:
 *     PackAffectedThreadsFromThreadCleanup @ 0x1C00438A0 (PackAffectedThreadsFromThreadCleanup.c)
 *     zzzReattachThreads @ 0x1C004392C (zzzReattachThreads.c)
 * Callees:
 *     ?InAffectedThreadList@@YAPEAUPTI_LIST@@PEBUtagTHREADINFO@@@Z @ 0x1C00438D8 (-InAffectedThreadList@@YAPEAUPTI_LIST@@PEBUtagTHREADINFO@@@Z.c)
 *     ?UnpackAffectedThreadList@@YAXXZ @ 0x1C0044250 (-UnpackAffectedThreadList@@YAXXZ.c)
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

  v2 = (struct _LIST_ENTRY *)*((_QWORD *)a1 + 52);
  v5 = v2 + 10;
  if ( gListAffectedThreadsForQueueRecalc.Flink != &gListAffectedThreadsForQueueRecalc )
  {
    Flink = off_1C031B448[1].Flink;
    if ( Flink )
    {
      if ( Flink[26].Flink != v2 )
        UnpackAffectedThreadList();
    }
  }
  for ( i = v5->Flink; i != v5; i = i->Flink )
  {
    v7 = (struct _LIST_ENTRY *)((char *)i - 664);
    v8 = i[-17].Flink;
    if ( (v8 == *((struct _LIST_ENTRY **)a1 + 49)
       || v8 == (struct _LIST_ENTRY *)gpqForeground
       || v8 == (struct _LIST_ENTRY *)gpqForegroundPrev
       || a2 && v8 == a2[49])
      && ((__int64)v7[28].Flink & 1) == 0
      && !InAffectedThreadList((const struct tagTHREADINFO *)&i[-42].Blink) )
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
      v10 = off_1C031B448;
      v9->Flink = &gListAffectedThreadsForQueueRecalc;
      v9->Blink = v10;
      if ( v10->Flink != &gListAffectedThreadsForQueueRecalc )
        __fastfail(3u);
      v10->Flink = v9;
      off_1C031B448 = v9;
      ++gnThreadsAffectedForQueueRecalc;
    }
  }
}
