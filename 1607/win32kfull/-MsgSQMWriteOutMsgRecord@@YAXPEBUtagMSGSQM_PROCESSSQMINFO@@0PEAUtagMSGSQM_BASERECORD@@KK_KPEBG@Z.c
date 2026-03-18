/*
 * XREFs of ?MsgSQMWriteOutMsgRecord@@YAXPEBUtagMSGSQM_PROCESSSQMINFO@@0PEAUtagMSGSQM_BASERECORD@@KK_KPEBG@Z @ 0x1C01E3B7C
 * Callers:
 *     ?MsgSQMFlushMsgRecord@@YAXPEAUtagPROCESSINFO@@0PEAUtagMSGSQM_MSGRECORD@@@Z @ 0x1C01E3710 (-MsgSQMFlushMsgRecord@@YAXPEAUtagPROCESSINFO@@0PEAUtagMSGSQM_MSGRECORD@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0158CD0 (__security_check_cookie.c)
 *     memset @ 0x1C015A380 (memset.c)
 *     ?WinSqmCreateStringStreamEntryEx@@YAXPEAU_SQM_STREAM_ENTRY_EX@@PEBG@Z @ 0x1C01E3D08 (-WinSqmCreateStringStreamEntryEx@@YAXPEAU_SQM_STREAM_ENTRY_EX@@PEBG@Z.c)
 */

void __fastcall MsgSQMWriteOutMsgRecord(
        const struct tagMSGSQM_PROCESSSQMINFO *a1,
        const struct tagMSGSQM_PROCESSSQMINFO *a2,
        struct tagMSGSQM_BASERECORD *a3,
        int a4,
        unsigned int a5,
        unsigned __int64 a6,
        unsigned __int16 *a7)
{
  int v11; // eax
  unsigned int v12; // r9d
  unsigned int v13; // r8d
  __int64 v14; // rdx
  _QWORD v15[28]; // [rsp+38h] [rbp-D0h] BYREF

  memset(v15, 0, sizeof(v15));
  WinSqmCreateStringStreamEntryEx((struct _SQM_STREAM_ENTRY_EX *)v15, (const unsigned __int16 *)a1);
  LODWORD(v15[3]) = *((_DWORD *)a1 + 8);
  LODWORD(v15[5]) = *((_DWORD *)a1 + 9);
  v11 = *((_DWORD *)a1 + 10);
  v15[2] = 0x100000010LL;
  v15[4] = 0x100000010LL;
  v15[6] = 0x100000010LL;
  LODWORD(v15[7]) = v11;
  WinSqmCreateStringStreamEntryEx((struct _SQM_STREAM_ENTRY_EX *)&v15[8], (const unsigned __int16 *)a2);
  LODWORD(v15[11]) = *((_DWORD *)a2 + 8);
  LODWORD(v15[13]) = *((_DWORD *)a2 + 9);
  LODWORD(v15[15]) = *((_DWORD *)a2 + 10);
  LODWORD(v15[17]) = *(_DWORD *)a3;
  LODWORD(v15[19]) = *((unsigned __int16 *)a3 + 2);
  LODWORD(v15[21]) = *((unsigned __int16 *)a3 + 3);
  LODWORD(v15[25]) = a5;
  v15[10] = __PAIR64__(v13, v12);
  v15[12] = __PAIR64__(v13, v12);
  v15[14] = __PAIR64__(v13, v12);
  v15[16] = __PAIR64__(v13, v12);
  v15[18] = __PAIR64__(v13, v12);
  v15[20] = __PAIR64__(v13, v12);
  v15[22] = __PAIR64__(v13, v12);
  LODWORD(v15[23]) = a4;
  v15[24] = __PAIR64__(v13, v12);
  if ( a7 )
  {
    WinSqmCreateStringStreamEntryEx((struct _SQM_STREAM_ENTRY_EX *)&v15[26], a7);
    v14 = 6267LL;
  }
  else
  {
    v14 = 6266LL;
    v15[27] = a6;
    v15[26] = v12 | 0x300000000LL;
  }
  WinSqmAddToStreamEx(gSqmSession, v14, 14LL, v15, 0);
}
