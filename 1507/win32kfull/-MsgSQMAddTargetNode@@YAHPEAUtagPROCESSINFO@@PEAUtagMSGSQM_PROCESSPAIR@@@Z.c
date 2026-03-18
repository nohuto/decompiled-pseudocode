/*
 * XREFs of ?MsgSQMAddTargetNode@@YAHPEAUtagPROCESSINFO@@PEAUtagMSGSQM_PROCESSPAIR@@@Z @ 0x1C01EC548
 * Callers:
 *     ?MsgSQMGetSourceListProcessPair@@YAPEAUtagMSGSQM_PROCESSPAIR@@PEAUtagPROCESSINFO@@0H@Z @ 0x1C01EC8E0 (-MsgSQMGetSourceListProcessPair@@YAPEAUtagMSGSQM_PROCESSPAIR@@PEAUtagPROCESSINFO@@0H@Z.c)
 * Callees:
 *     ?MsgSQMGetMsgCache@@YAPEAUtagMSGSQM_CACHE@@PEAUtagPROCESSINFO@@H@Z @ 0x1C01EC7B8 (-MsgSQMGetMsgCache@@YAPEAUtagMSGSQM_CACHE@@PEAUtagPROCESSINFO@@H@Z.c)
 */

__int64 __fastcall MsgSQMAddTargetNode(struct tagPROCESSINFO *a1, struct tagMSGSQM_PROCESSPAIR *a2)
{
  __int64 result; // rax
  __int64 v5; // rcx
  char *v6; // rax
  _QWORD *v7; // rdx
  __int64 v8; // rcx

  result = (__int64)MsgSQMGetMsgCache(a1, 1);
  v5 = result;
  if ( result )
  {
    *((_QWORD *)a2 + 5) = a1;
    v6 = (char *)a2 + 16;
    v7 = *(_QWORD **)(v5 + 72);
    v8 = v5 + 64;
    *((_QWORD *)a2 + 2) = v8;
    *((_QWORD *)a2 + 3) = v7;
    if ( *v7 != v8 )
      __fastfail(3u);
    *v7 = v6;
    *(_QWORD *)(v8 + 8) = v6;
    return 1LL;
  }
  return result;
}
