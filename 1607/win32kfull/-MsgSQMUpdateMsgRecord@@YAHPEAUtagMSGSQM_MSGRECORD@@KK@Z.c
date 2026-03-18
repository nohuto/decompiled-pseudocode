/*
 * XREFs of ?MsgSQMUpdateMsgRecord@@YAHPEAUtagMSGSQM_MSGRECORD@@KK@Z @ 0x1C01E3B48
 * Callers:
 *     xxxInterSendMsgEx @ 0x1C0085BE0 (xxxInterSendMsgEx.c)
 *     MSGSQMAddMessage @ 0x1C009B960 (MSGSQMAddMessage.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MsgSQMUpdateMsgRecord(struct tagMSGSQM_MSGRECORD *a1, int a2)
{
  unsigned __int64 v3; // r10
  unsigned int v4; // eax
  unsigned int v5; // edx
  __int64 result; // rax

  v3 = *((_QWORD *)a1 + 4) + (unsigned int)(a2 - *((_DWORD *)a1 + 7));
  if ( v3 < *((_QWORD *)a1 + 4) )
    return 0LL;
  v4 = *((_DWORD *)a1 + 6);
  v5 = v4 + 1;
  if ( v4 + 1 < v4 )
    return 0LL;
  *((_QWORD *)a1 + 4) = v3;
  result = 1LL;
  *((_DWORD *)a1 + 6) = v5;
  *((_DWORD *)a1 + 7) = a2;
  return result;
}
