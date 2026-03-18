/*
 * XREFs of ?UnpackAffectedThreadList@@YAXXZ @ 0x1C008BF9C
 * Callers:
 *     ?PackAffectedThreadList@@YAXPEBUtagTHREADINFO@@0@Z @ 0x1C008B1E0 (-PackAffectedThreadList@@YAXPEBUtagTHREADINFO@@0@Z.c)
 *     zzzReattachThreads @ 0x1C008B6B4 (zzzReattachThreads.c)
 * Callees:
 *     <none>
 */

void UnpackAffectedThreadList(void)
{
  struct _LIST_ENTRY *Flink; // rbx
  struct _LIST_ENTRY *v1; // rcx

  Flink = gListAffectedThreadsForQueueRecalc.Flink;
  while ( Flink && Flink != &gListAffectedThreadsForQueueRecalc )
  {
    v1 = Flink;
    Flink = Flink[94].Blink;
    Win32FreePool(v1);
  }
  gnThreadsAffectedForQueueRecalc = 0;
  off_1C031B808 = &gListAffectedThreadsForQueueRecalc;
  gListAffectedThreadsForQueueRecalc.Flink = &gListAffectedThreadsForQueueRecalc;
}
