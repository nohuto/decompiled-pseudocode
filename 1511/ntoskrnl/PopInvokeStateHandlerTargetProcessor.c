/*
 * XREFs of PopInvokeStateHandlerTargetProcessor @ 0x1403A0ABC
 * Callers:
 *     <none>
 * Callees:
 *     RtlpInterlockedPushEntrySList @ 0x14015B9A0 (RtlpInterlockedPushEntrySList.c)
 *     memset @ 0x140166CC0 (memset.c)
 *     PopHandleNextState @ 0x1403A0B10 (PopHandleNextState.c)
 */

void __fastcall PopInvokeStateHandlerTargetProcessor(
        struct _KDPC *Dpc,
        _SLIST_HEADER *DeferredContext,
        PVOID SystemArgument1,
        PVOID SystemArgument2)
{
  __int64 v5; // r8
  _SLIST_ENTRY v6[6]; // [rsp+20h] [rbp-68h] BYREF

  memset(v6, 0, sizeof(v6));
  LODWORD(v6[0].Next) = 0;
  RtlpInterlockedPushEntrySList(DeferredContext + 4, &v6[5]);
  do
    PopHandleNextState(DeferredContext, v6, v5);
  while ( LODWORD(v6[0].Next) != 13 );
}
