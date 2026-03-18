/*
 * XREFs of UnpackAffectedThreadList @ 0x1C01D8B24
 * Callers:
 *     zzzReattachThreads @ 0x1C00DB9C8 (zzzReattachThreads.c)
 *     ?PackAffectedThreadList@@YAXPEBUtagTHREADINFO@@0@Z @ 0x1C00DC3B8 (-PackAffectedThreadList@@YAXPEBUtagTHREADINFO@@0@Z.c)
 *     ?DestroyDesktop@@YAHPEAUtagDESKTOP@@@Z @ 0x1C0131480 (-DestroyDesktop@@YAHPEAUtagDESKTOP@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall UnpackAffectedThreadList(__int64 a1, __int64 a2, __int64 a3)
{
  struct _LIST_ENTRY *Flink; // rbx
  struct _LIST_ENTRY *v4; // rcx
  __int64 result; // rax

  Flink = gListAffectedThreadsForQueueRecalc.Flink;
  while ( Flink && Flink != &gListAffectedThreadsForQueueRecalc )
  {
    v4 = Flink;
    Flink = Flink[94].Blink;
    result = Win32FreePool(v4, a2, a3);
  }
  gnThreadsAffectedForQueueRecalc = 0;
  off_1C03206C8 = &gListAffectedThreadsForQueueRecalc;
  gListAffectedThreadsForQueueRecalc.Flink = &gListAffectedThreadsForQueueRecalc;
  return result;
}
