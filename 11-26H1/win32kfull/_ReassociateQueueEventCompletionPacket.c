/*
 * XREFs of _ReassociateQueueEventCompletionPacket @ 0x1402055E8
 * Callers:
 *     NtUserReassociateQueueEventCompletionPacket @ 0x1402B95E0 (NtUserReassociateQueueEventCompletionPacket.c)
 * Callees:
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036890 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 */

__int64 __fastcall ReassociateQueueEventCompletionPacket(__int64 a1)
{
  struct tagTHREADINFO *v1; // rax

  v1 = PtiCurrent(a1);
  ZwAssociateWaitCompletionPacket(
    *((_QWORD *)v1 + 205),
    *((_QWORD *)v1 + 202),
    *((_QWORD *)v1 + 204),
    0LL,
    0xFFFFFFFF80000000uLL,
    0,
    0LL,
    0LL);
  return 1LL;
}
