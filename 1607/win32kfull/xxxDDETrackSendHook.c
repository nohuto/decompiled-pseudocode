/*
 * XREFs of xxxDDETrackSendHook @ 0x1C01E3110
 * Callers:
 *     xxxSendTransformableMessageTimeout @ 0x1C0087910 (xxxSendTransformableMessageTimeout.c)
 * Callees:
 *     _PostMessage @ 0x1C00A4CB0 (_PostMessage.c)
 *     ?AnticipatePost@@YAPEAXPEAUtagDDECONV@@P6AKPEAKPEA_J0@ZPEAX4PEAUtagINTDDEINFO@@K@Z @ 0x1C01E16B0 (-AnticipatePost@@YAPEAXPEAUtagDDECONV@@P6AKPEAKPEA_J0@ZPEAX4PEAUtagINTDDEINFO@@K@Z.c)
 *     ?FindDdeConv@@YAPEAUtagDDECONV@@PEAUtagWND@@0@Z @ 0x1C01E17C0 (-FindDdeConv@@YAPEAUtagDDECONV@@PEAUtagWND@@0@Z.c)
 *     ?NewConversation@@YAHPEAPEAUtagDDECONV@@0PEAUtagWND@@1@Z @ 0x1C01E18CC (-NewConversation@@YAHPEAPEAUtagDDECONV@@0PEAUtagWND@@1@Z.c)
 *     xxxMessageEvent @ 0x1C0231780 (xxxMessageEvent.c)
 */

__int64 __fastcall xxxDDETrackSendHook(struct tagWND *a1, int a2, __int64 a3, int a4)
{
  unsigned int v5; // ebx
  struct tagWND *v9; // rax
  struct tagWND *v10; // rdi
  struct tagDDECONV *DdeConv; // rax
  struct tagDDECONV *v12; // [rsp+30h] [rbp-48h] BYREF
  _QWORD v13[2]; // [rsp+38h] [rbp-40h] BYREF
  int v14; // [rsp+48h] [rbp-30h]
  struct tagDDECONV *v15; // [rsp+80h] [rbp+8h] BYREF

  v5 = 0;
  if ( (MonitorFlags & 0x2000000) != 0 )
  {
    v14 = 0;
    v13[0] = (unsigned __int16)a4;
    v13[1] = HIWORD(a4);
    xxxMessageEvent((_DWORD)a1, a2, a3, a4, 0x2000000, (__int64)v13);
  }
  if ( *(_QWORD *)(gptiCurrent + 376LL) == *(_QWORD *)(*((_QWORD *)a1 + 2) + 376LL) )
    return 1LL;
  if ( a2 == 996 )
  {
    v9 = (struct tagWND *)ValidateHwnd(a3);
    v10 = v9;
    if ( v9 )
    {
      DdeConv = FindDdeConv(v9, a1);
      if ( !DdeConv )
      {
        LOBYTE(v5) = (unsigned int)NewConversation(&v12, &v15, a1, v10) != 0;
        return v5;
      }
      AnticipatePost(
        DdeConv,
        (unsigned int (*)(unsigned int *, __int64 *, struct tagDDECONV *))xxxDupConvTerminate,
        0LL,
        0LL,
        0LL,
        0);
      PostMessage((__int64)v10, 993LL, *(_QWORD *)a1, 0LL);
    }
    return 0LL;
  }
  LOBYTE(v5) = a2 == 992;
  return v5;
}
