/*
 * XREFs of ?MsgSQMFlushMsgRecord@@YAXPEAUtagPROCESSINFO@@0PEAUtagMSGSQM_MSGRECORD@@@Z @ 0x1C01ECB58
 * Callers:
 *     xxxInterSendMsgEx @ 0x1C005DAE0 (xxxInterSendMsgEx.c)
 *     MSGSQMAddMessage @ 0x1C0092610 (MSGSQMAddMessage.c)
 *     ?MsgSQMFreeMsgList@@YAXPEAUtagPROCESSINFO@@0PEAPEAUtagMSGSQM_MSGRECORD@@@Z @ 0x1C01ECC54 (-MsgSQMFreeMsgList@@YAXPEAUtagPROCESSINFO@@0PEAPEAUtagMSGSQM_MSGRECORD@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1C01512D0 (__security_check_cookie.c)
 *     ?MsgSQMWriteOutMsgRecord@@YAXPEBUtagMSGSQM_PROCESSSQMINFO@@0PEAUtagMSGSQM_BASERECORD@@KK_KPEBG@Z @ 0x1C01ECFC4 (-MsgSQMWriteOutMsgRecord@@YAXPEBUtagMSGSQM_PROCESSSQMINFO@@0PEAUtagMSGSQM_BASERECORD@@KK_KPEBG@Z.c)
 */

void __fastcall MsgSQMFlushMsgRecord(
        struct tagPROCESSINFO *a1,
        struct tagPROCESSINFO *a2,
        struct tagMSGSQM_MSGRECORD *a3)
{
  const struct tagMSGSQM_PROCESSSQMINFO *v3; // r14
  const struct tagMSGSQM_PROCESSSQMINFO *v5; // rsi
  int v6; // eax
  unsigned __int64 v7; // rbp
  __int64 v8; // rcx
  unsigned __int16 *v9; // rax
  unsigned __int16 v10[256]; // [rsp+40h] [rbp-238h] BYREF

  v3 = (const struct tagMSGSQM_PROCESSSQMINFO *)*((_QWORD *)a1 + 102);
  v5 = (const struct tagMSGSQM_PROCESSSQMINFO *)*((_QWORD *)a2 + 102);
  if ( v3 || v5 )
  {
    v6 = *((_DWORD *)a3 + 6);
    if ( v6 == 1 )
      LODWORD(v7) = ((MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24)
                  - *((_DWORD *)a3 + 7);
    else
      v7 = *((_QWORD *)a3 + 4) / (unsigned __int64)(unsigned int)(v6 - 1);
    v8 = *((unsigned __int16 *)a3 + 4);
    if ( (unsigned __int16)v8 >= 0xC000u && (unsigned int)UserGetAtomName(v8, v10, 255LL) )
      v9 = v10;
    else
      v9 = 0LL;
    MsgSQMWriteOutMsgRecord(
      v3,
      v5,
      (struct tagMSGSQM_MSGRECORD *)((char *)a3 + 8),
      *((_DWORD *)a3 + 6),
      v7,
      *((_QWORD *)a3 + 2),
      v9);
  }
  *((_DWORD *)a3 + 6) = 0;
  *((_QWORD *)a3 + 4) = 0LL;
}
