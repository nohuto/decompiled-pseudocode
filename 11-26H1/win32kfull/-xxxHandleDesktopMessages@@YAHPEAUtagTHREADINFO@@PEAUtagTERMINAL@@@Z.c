/*
 * XREFs of ?xxxHandleDesktopMessages@@YAHPEAUtagTHREADINFO@@PEAUtagTERMINAL@@@Z @ 0x140057734
 * Callers:
 *     xxxDesktopThread @ 0x14020A3B0 (xxxDesktopThread.c)
 * Callees:
 *     xxxDispatchMessage @ 0x140035320 (xxxDispatchMessage.c)
 *     xxxInternalGetMessage @ 0x140057C40 (xxxInternalGetMessage.c)
 *     WPP_RECORDER_AND_TRACE_SF_d @ 0x1401A4EE4 (WPP_RECORDER_AND_TRACE_SF_d.c)
 *     ?xxxCleanupMotherDesktopWindow@@YAXPEAUtagTERMINAL@@@Z @ 0x14025CD50 (-xxxCleanupMotherDesktopWindow@@YAXPEAUtagTERMINAL@@@Z.c)
 *     ?DestroyPendingDesktops@@YAXPEAUtagTHREADINFO@@PEAUtagTERMINAL@@@Z @ 0x140277DD8 (-DestroyPendingDesktops@@YAXPEAUtagTHREADINFO@@PEAUtagTERMINAL@@@Z.c)
 */

__int64 __fastcall xxxHandleDesktopMessages(struct tagTHREADINFO *a1, struct tagTERMINAL *a2)
{
  char v4; // bl
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v8; // rdx
  int v9; // eax
  unsigned int v10; // ebp
  bool v11; // di
  __int64 UserSessionState; // rax
  int v13; // r8d
  int v14; // edx
  unsigned __int64 v15; // [rsp+20h] [rbp-68h]
  __int128 v16; // [rsp+50h] [rbp-38h] BYREF
  __int128 v17; // [rsp+60h] [rbp-28h]
  __int128 v18; // [rsp+70h] [rbp-18h]

  v16 = 0LL;
  v4 = 1;
  v17 = 0LL;
  v18 = 0LL;
  while ( 1 )
  {
    LODWORD(v15) = 1;
    if ( !(unsigned int)xxxInternalGetMessage((__int64)&v16, v15, 0) )
      return 1LL;
    if ( a2 == (struct tagTERMINAL *)(W32GetUserSessionState(v6, v5) + 68528) )
    {
      v9 = DWORD2(v16);
      if ( DWORD2(v16) != 18 )
        goto LABEL_6;
      xxxCleanupMotherDesktopWindow(a2);
    }
    v9 = DWORD2(v16);
    if ( DWORD2(v16) == 18 )
    {
      v10 = *((_DWORD *)a1 + 233);
      if ( v10 <= 1 )
        break;
    }
LABEL_6:
    if ( v9 == 796 )
    {
      if ( (_QWORD)v17 == 2LL )
        DestroyPendingDesktops(a1, a2);
    }
    else
    {
      xxxDispatchMessage((struct tagMSG *)&v16);
    }
  }
  if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
    || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x80u) == 0
    || *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u )
  {
    v4 = 0;
  }
  v11 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
  if ( v4 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    UserSessionState = W32GetUserSessionState(WPP_GLOBAL_Control, v8);
    LOBYTE(v13) = v11;
    LOBYTE(v14) = v4;
    WPP_RECORDER_AND_TRACE_SF_d(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v14,
      v13,
      *(_QWORD *)(UserSessionState + 69152),
      4,
      8,
      22,
      (__int64)&WPP_a33b1e5f7b3e3e982b3dd7cd6c940086_Traceguids,
      v10);
  }
  return 0LL;
}
