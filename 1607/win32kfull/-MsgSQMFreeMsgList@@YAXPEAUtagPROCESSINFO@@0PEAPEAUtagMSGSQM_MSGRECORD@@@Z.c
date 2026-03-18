/*
 * XREFs of ?MsgSQMFreeMsgList@@YAXPEAUtagPROCESSINFO@@0PEAPEAUtagMSGSQM_MSGRECORD@@@Z @ 0x1C01E380C
 * Callers:
 *     ?MsgSQMFreeProcessPair@@YAXPEAUtagMSGSQM_PROCESSPAIR@@@Z @ 0x1C01E3868 (-MsgSQMFreeProcessPair@@YAXPEAUtagMSGSQM_PROCESSPAIR@@@Z.c)
 * Callees:
 *     ?MsgSQMFlushMsgRecord@@YAXPEAUtagPROCESSINFO@@0PEAUtagMSGSQM_MSGRECORD@@@Z @ 0x1C01E3710 (-MsgSQMFlushMsgRecord@@YAXPEAUtagPROCESSINFO@@0PEAUtagMSGSQM_MSGRECORD@@@Z.c)
 */

void __fastcall MsgSQMFreeMsgList(
        struct tagPROCESSINFO *a1,
        struct tagPROCESSINFO *a2,
        struct tagMSGSQM_MSGRECORD **a3)
{
  struct tagMSGSQM_MSGRECORD *i; // rbx
  __int64 v7; // rdx
  __int64 v8; // r8

  for ( i = *a3; i; i = *a3 )
  {
    *a3 = *(struct tagMSGSQM_MSGRECORD **)i;
    MsgSQMFlushMsgRecord(a1, a2, i);
    Win32FreePool(i, v7, v8);
  }
}
