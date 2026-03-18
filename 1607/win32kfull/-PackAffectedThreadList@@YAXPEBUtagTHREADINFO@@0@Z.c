/*
 * XREFs of ?PackAffectedThreadList@@YAXPEBUtagTHREADINFO@@0@Z @ 0x1C00DC3B8
 * Callers:
 *     zzzReattachThreads @ 0x1C00DB9C8 (zzzReattachThreads.c)
 *     PackAffectedThreadsFromThreadCleanup @ 0x1C00DC510 (PackAffectedThreadsFromThreadCleanup.c)
 * Callees:
 *     ?InAffectedThreadList@@YAPEAUPTI_LIST@@PEBUtagTHREADINFO@@@Z @ 0x1C00DC548 (-InAffectedThreadList@@YAPEAUPTI_LIST@@PEBUtagTHREADINFO@@@Z.c)
 *     UnpackAffectedThreadList @ 0x1C01D8B24 (UnpackAffectedThreadList.c)
 */

void __fastcall PackAffectedThreadList(const struct tagTHREADINFO *a1, const struct tagTHREADINFO *a2)
{
  __int64 v2; // r10
  _QWORD **v5; // rsi
  _QWORD *i; // rbx
  _QWORD *v7; // rdi
  __int64 v8; // rcx
  _QWORD *v9; // r8
  _QWORD *v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // rax

  v2 = *((_QWORD *)a1 + 51);
  v5 = (_QWORD **)(v2 + 160);
  if ( gListAffectedThreadsForQueueRecalc.Flink != &gListAffectedThreadsForQueueRecalc )
  {
    v13 = *(_QWORD *)(off_1C03206C8 + 16LL);
    if ( v13 )
    {
      if ( *(_QWORD *)(v13 + 408) != v2 )
        UnpackAffectedThreadList(a1, a2, 0LL);
    }
  }
  for ( i = *v5; i != v5; i = (_QWORD *)*i )
  {
    v7 = i - 82;
    v8 = *(i - 34);
    if ( (v8 == *((_QWORD *)a1 + 48)
       || v8 == gpqForeground
       || v8 == gpqForegroundPrev
       || a2 && v8 == *((_QWORD *)a2 + 48))
      && (v7[55] & 1) == 0
      && !InAffectedThreadList((const struct tagTHREADINFO *)(i - 82)) )
    {
      if ( (gnThreadsAffectedForQueueRecalc & 0x3F) == 0 )
      {
        v9 = (_QWORD *)Win32AllocPoolZInit(1536LL, 1767994197LL);
        if ( !v9 )
        {
          UnpackAffectedThreadList(v12, v11, 0LL);
          return;
        }
      }
      v9[2] = v7;
      v10 = (_QWORD *)off_1C03206C8;
      if ( (struct _LIST_ENTRY *)*off_1C03206C8 != &gListAffectedThreadsForQueueRecalc )
        __fastfail(3u);
      *v9 = &gListAffectedThreadsForQueueRecalc;
      v9[1] = v10;
      *v10 = v9;
      off_1C03206C8 = v9;
      ++gnThreadsAffectedForQueueRecalc;
    }
  }
}
