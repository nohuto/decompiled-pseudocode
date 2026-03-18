/*
 * XREFs of ?MsgSQMCleanupMsgCache@@YAXPEAUtagPROCESSINFO@@@Z @ 0x1C01E3680
 * Callers:
 *     MSGSQMRemoveProcess @ 0x1C0116DB0 (MSGSQMRemoveProcess.c)
 *     ?MsgSQMGetSourceListProcessPair@@YAPEAUtagMSGSQM_PROCESSPAIR@@PEAUtagPROCESSINFO@@0H@Z @ 0x1C01E39BC (-MsgSQMGetSourceListProcessPair@@YAPEAUtagMSGSQM_PROCESSPAIR@@PEAUtagPROCESSINFO@@0H@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall MsgSQMCleanupMsgCache(struct tagPROCESSINFO *a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rcx

  v3 = *((_QWORD *)a1 + 101);
  if ( v3 && *(_QWORD *)(v3 + 48) == v3 + 48 && *(_QWORD *)(v3 + 64) == v3 + 64 )
    Win32FreePool(v3, a2, a3);
}
