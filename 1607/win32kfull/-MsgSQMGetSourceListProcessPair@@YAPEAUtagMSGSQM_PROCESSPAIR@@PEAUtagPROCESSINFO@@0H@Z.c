/*
 * XREFs of ?MsgSQMGetSourceListProcessPair@@YAPEAUtagMSGSQM_PROCESSPAIR@@PEAUtagPROCESSINFO@@0H@Z @ 0x1C01E39BC
 * Callers:
 *     xxxInterSendMsgEx @ 0x1C0085BE0 (xxxInterSendMsgEx.c)
 *     MSGSQMAddMessage @ 0x1C009B960 (MSGSQMAddMessage.c)
 * Callees:
 *     ?MsgSQMAddTargetNode@@YAHPEAUtagPROCESSINFO@@PEAUtagMSGSQM_PROCESSPAIR@@@Z @ 0x1C01E3624 (-MsgSQMAddTargetNode@@YAHPEAUtagPROCESSINFO@@PEAUtagMSGSQM_PROCESSPAIR@@@Z.c)
 *     ?MsgSQMCleanupMsgCache@@YAXPEAUtagPROCESSINFO@@@Z @ 0x1C01E3680 (-MsgSQMCleanupMsgCache@@YAXPEAUtagPROCESSINFO@@@Z.c)
 *     ?MsgSQMGetMsgCache@@YAPEAUtagMSGSQM_CACHE@@PEAUtagPROCESSINFO@@H@Z @ 0x1C01E3894 (-MsgSQMGetMsgCache@@YAPEAUtagMSGSQM_CACHE@@PEAUtagPROCESSINFO@@H@Z.c)
 */

struct tagMSGSQM_PROCESSPAIR *__fastcall MsgSQMGetSourceListProcessPair(
        struct tagPROCESSINFO *a1,
        struct tagPROCESSINFO *a2)
{
  struct tagMSGSQM_PROCESSPAIR *result; // rax
  __int64 v5; // rdx
  __int64 v6; // r8
  struct tagMSGSQM_PROCESSPAIR *v7; // rax
  struct tagMSGSQM_PROCESSPAIR *v8; // rdi
  struct tagMSGSQM_PROCESSPAIR *v9; // rbx
  bool v10; // zf
  struct tagMSGSQM_PROCESSPAIR *v11; // rax
  struct tagMSGSQM_PROCESSPAIR **v12; // rax

  result = MsgSQMGetMsgCache(a1, 1);
  if ( result )
  {
    v7 = (struct tagMSGSQM_PROCESSPAIR *)((char *)result + 48);
    v8 = v7;
    if ( *(struct tagMSGSQM_PROCESSPAIR **)v7 == v7 )
      goto LABEL_11;
    v9 = (struct tagMSGSQM_PROCESSPAIR *)*((_QWORD *)v7 + 1);
    v10 = *((_QWORD *)v9 + 5) == (_QWORD)a2;
    if ( *((_QWORD *)v9 + 5) > (unsigned __int64)a2 )
    {
      v8 = *(struct tagMSGSQM_PROCESSPAIR **)v7;
      do
      {
        v9 = v8;
        if ( *((_QWORD *)v8 + 5) >= (unsigned __int64)a2 )
          break;
        v8 = *(struct tagMSGSQM_PROCESSPAIR **)v8;
      }
      while ( v8 != v7 );
      v10 = *((_QWORD *)v9 + 5) == (_QWORD)a2;
    }
    if ( !v10 )
      v9 = 0LL;
    if ( !v9 )
    {
LABEL_11:
      v11 = (struct tagMSGSQM_PROCESSPAIR *)Win32AllocPoolZInit(56LL, 1937077077LL);
      v9 = v11;
      if ( v11 )
      {
        if ( !(unsigned int)MsgSQMAddTargetNode(a2, v11) )
        {
          Win32FreePool(v9, v5, v6);
          v9 = 0LL;
        }
        if ( v9 )
        {
          *((_QWORD *)v9 + 4) = a1;
          v12 = (struct tagMSGSQM_PROCESSPAIR **)*((_QWORD *)v8 + 1);
          if ( *v12 != v8 )
            __fastfail(3u);
          *(_QWORD *)v9 = v8;
          *((_QWORD *)v9 + 1) = v12;
          *v12 = v9;
          *((_QWORD *)v8 + 1) = v9;
        }
      }
    }
    MsgSQMCleanupMsgCache(a1, v5, v6);
    return v9;
  }
  return result;
}
