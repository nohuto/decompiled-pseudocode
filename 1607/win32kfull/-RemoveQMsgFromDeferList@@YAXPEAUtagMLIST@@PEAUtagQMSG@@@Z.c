/*
 * XREFs of ?RemoveQMsgFromDeferList@@YAXPEAUtagMLIST@@PEAUtagQMSG@@@Z @ 0x1C01CADC4
 * Callers:
 *     DestroyThreadsMessages @ 0x1C00FDE00 (DestroyThreadsMessages.c)
 *     FreeMessageList @ 0x1C00FDEB0 (FreeMessageList.c)
 *     MergeDeferredMessagesOfThreadOnQueue @ 0x1C01CB1E8 (MergeDeferredMessagesOfThreadOnQueue.c)
 *     RedistributeDeferredMsgsOnQueue @ 0x1C01CB388 (RedistributeDeferredMsgsOnQueue.c)
 * Callees:
 *     <none>
 */

void __fastcall RemoveQMsgFromDeferList(struct tagMLIST *a1, struct tagQMSG *a2)
{
  _QWORD *v2; // r8

  v2 = (_QWORD *)*((_QWORD *)a2 + 1);
  if ( v2 )
    *v2 = *(_QWORD *)a2;
  if ( *(_QWORD *)a2 )
    *(_QWORD *)(*(_QWORD *)a2 + 8LL) = *((_QWORD *)a2 + 1);
  else
    *((_QWORD *)a1 + 3) = 0LL;
  *((_QWORD *)a2 + 1) = 0LL;
  *(_QWORD *)a2 = 0LL;
}
