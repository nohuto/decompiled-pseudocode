/*
 * XREFs of UnlinkSendListSms @ 0x140056568
 * Callers:
 *     ?xxxReceiveMessage@@YAXPEAUtagTHREADINFO@@@Z @ 0x1400245B8 (-xxxReceiveMessage@@YAXPEAUtagTHREADINFO@@@Z.c)
 *     xxxInterSendMsgEx @ 0x140051EE4 (xxxInterSendMsgEx.c)
 *     xxxReceiverDied @ 0x140054ED4 (xxxReceiverDied.c)
 *     SendMsgCleanup @ 0x140056310 (SendMsgCleanup.c)
 *     ?SenderDied@@YAXPEAUtagSMS@@@Z @ 0x1400566D4 (-SenderDied@@YAXPEAUtagSMS@@@Z.c)
 *     SuspendThreadQueue @ 0x1402A7460 (SuspendThreadQueue.c)
 * Callees:
 *     _FreeGestureInfo @ 0x1401EDD90 (_FreeGestureInfo.c)
 *     _FreeTouchInputInfo @ 0x1401EE500 (_FreeTouchInputInfo.c)
 */

__int64 __fastcall UnlinkSendListSms(__int64 *a1, __int64 a2)
{
  unsigned int v2; // eax
  __int64 v4; // rcx
  __int64 *v5; // rcx
  __int64 **v6; // rax
  __int64 v7; // rdx
  void *v8; // rcx
  __int64 v9; // rax
  unsigned int v11; // eax
  __int64 v12; // rbx
  __int64 UserSessionState; // rax

  v2 = *((_DWORD *)a1 + 26);
  v4 = 576LL;
  if ( v2 >= 0x240 )
  {
    if ( v2 <= 0x240 )
      FreeTouchInputInfo(a1[12], 0LL);
  }
  else if ( v2 == 281 )
  {
    FreeGestureInfo(a1[12], 0LL);
  }
  if ( (*((_DWORD *)a1 + 21) & 0x200) == 0 )
  {
    v11 = *((_DWORD *)a1 + 26);
    if ( v11 < 0x241 || v11 > 0x244 )
    {
      if ( v11 >= 0x245 )
      {
        if ( v11 > 0x257 || v11 == 589 || v11 == 595 )
          goto LABEL_5;
      }
      else if ( v11 != 528 || *((_WORD *)a1 + 44) != 582 )
      {
        goto LABEL_5;
      }
    }
    v12 = a1[12];
    UserSessionState = W32GetUserSessionState(v4, a2);
    CTouchProcessor::UnreferenceMsgDataExternal(*(_QWORD *)(UserSessionState + 3256), v12, 6LL, a1);
  }
LABEL_5:
  v5 = (__int64 *)*a1;
  if ( *(__int64 **)(*a1 + 8) != a1 || (v6 = (__int64 **)a1[1], *v6 != a1) )
    __fastfail(3u);
  *v6 = v5;
  v5[1] = (__int64)v6;
  HMAssignmentUnlock(a1 + 14);
  v8 = (void *)a1[15];
  if ( v8 && (*((_DWORD *)a1 + 21) & 0x40000) == 0 )
    Win32FreePool(v8);
  v9 = W32GetUserSessionState(v8, v7);
  return Win32FreeToPagedLookasideList(*(_QWORD *)(v9 + 69080), a1);
}
