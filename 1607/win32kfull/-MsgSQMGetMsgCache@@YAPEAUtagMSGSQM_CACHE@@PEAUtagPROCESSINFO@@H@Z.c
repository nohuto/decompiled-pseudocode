/*
 * XREFs of ?MsgSQMGetMsgCache@@YAPEAUtagMSGSQM_CACHE@@PEAUtagPROCESSINFO@@H@Z @ 0x1C01E3894
 * Callers:
 *     ?MsgSQMAddTargetNode@@YAHPEAUtagPROCESSINFO@@PEAUtagMSGSQM_PROCESSPAIR@@@Z @ 0x1C01E3624 (-MsgSQMAddTargetNode@@YAHPEAUtagPROCESSINFO@@PEAUtagMSGSQM_PROCESSPAIR@@@Z.c)
 *     ?MsgSQMGetSourceListProcessPair@@YAPEAUtagMSGSQM_PROCESSPAIR@@PEAUtagPROCESSINFO@@0H@Z @ 0x1C01E39BC (-MsgSQMGetSourceListProcessPair@@YAPEAUtagMSGSQM_PROCESSPAIR@@PEAUtagPROCESSINFO@@0H@Z.c)
 * Callees:
 *     ?MsgSQMPopulateProcessSQMInfo@@YAXPEAUtagPROCESSINFO@@PEAUtagMSGSQM_PROCESSSQMINFO@@@Z @ 0x1C01E3AAC (-MsgSQMPopulateProcessSQMInfo@@YAXPEAUtagPROCESSINFO@@PEAUtagMSGSQM_PROCESSSQMINFO@@@Z.c)
 */

struct tagMSGSQM_CACHE *__fastcall MsgSQMGetMsgCache(struct tagPROCESSINFO *a1, int a2)
{
  struct tagMSGSQM_PROCESSSQMINFO *v3; // rax
  _QWORD *v4; // rax
  _QWORD *v5; // rax

  if ( a2 )
  {
    if ( !*((_QWORD *)a1 + 101) )
    {
      v3 = (struct tagMSGSQM_PROCESSSQMINFO *)Win32AllocPoolZInit(80LL, 1937077077LL);
      *((_QWORD *)a1 + 101) = v3;
      if ( v3 )
      {
        MsgSQMPopulateProcessSQMInfo(a1, v3);
        v4 = (_QWORD *)(*((_QWORD *)a1 + 101) + 48LL);
        v4[1] = v4;
        *v4 = v4;
        v5 = (_QWORD *)(*((_QWORD *)a1 + 101) + 64LL);
        v5[1] = v5;
        *v5 = v5;
      }
    }
  }
  return (struct tagMSGSQM_CACHE *)*((_QWORD *)a1 + 101);
}
