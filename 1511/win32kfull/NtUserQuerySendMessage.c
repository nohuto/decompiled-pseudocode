/*
 * XREFs of NtUserQuerySendMessage @ 0x1C021EC50
 * Callers:
 *     <none>
 * Callees:
 *     memset @ 0x1C0152CC0 (memset.c)
 *     _QuerySendMessage @ 0x1C01ED2C4 (_QuerySendMessage.c)
 */

_BOOL8 __fastcall NtUserQuerySendMessage(_OWORD *a1)
{
  __int64 v2; // rax
  __int64 v3; // rdx
  __int64 v4; // rcx
  BOOL SendMessage; // ebx
  _OWORD v7[4]; // [rsp+28h] [rbp-40h] BYREF

  memset(v7, 0, 0x30uLL);
  v2 = EnterSharedCrit(0LL, 1LL);
  if ( *(_QWORD *)(v2 + 464) )
  {
    SendMessage = QuerySendMessage(v2, (__int64)v7);
    if ( SendMessage && a1 )
    {
      HIDWORD(v7[0]) = 0;
      HIDWORD(v7[2]) = 0;
      if ( (unsigned __int64)a1 >= W32UserProbeAddress )
        a1 = (_OWORD *)W32UserProbeAddress;
      *a1 = v7[0];
      a1[1] = v7[1];
      a1[2] = v7[2];
    }
  }
  else
  {
    SendMessage = 0;
  }
  UserSessionSwitchLeaveCrit(v4, v3);
  return SendMessage;
}
