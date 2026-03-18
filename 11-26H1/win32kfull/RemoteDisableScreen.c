/*
 * XREFs of RemoteDisableScreen @ 0x1401B25E8
 * Callers:
 *     xxxRemoteStopScreenUpdates @ 0x1401B3EEC (xxxRemoteStopScreenUpdates.c)
 *     ?DestroyPendingDesktops@@YAXPEAUtagTHREADINFO@@PEAUtagTERMINAL@@@Z @ 0x140277DD8 (-DestroyPendingDesktops@@YAXPEAUtagTHREADINFO@@PEAUtagTERMINAL@@@Z.c)
 * Callees:
 *     PopAndFreeW32ThreadLock @ 0x14004B8D0 (PopAndFreeW32ThreadLock.c)
 *     ??0?$Win32RawLockedNtObject@UtagDESKTOP@@@@QEAA@PEAUtagDESKTOP@@@Z @ 0x14017B358 (--0-$Win32RawLockedNtObject@UtagDESKTOP@@@@QEAA@PEAUtagDESKTOP@@@Z.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1401913D0 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     xxxSwitchDesktop @ 0x1401B29E0 (xxxSwitchDesktop.c)
 */

__int64 __fastcall RemoteDisableScreen(_QWORD *a1, _QWORD *a2, __int64 a3, _DWORD *a4)
{
  unsigned int v8; // ebx
  char v9; // si
  bool v10; // bp
  __int64 UserSessionState; // rax
  int v12; // r8d
  int v13; // edx
  void *v14; // rbx
  _QWORD v16[2]; // [rsp+40h] [rbp-48h] BYREF
  __int64 v17; // [rsp+50h] [rbp-38h]
  _QWORD v18[3]; // [rsp+58h] [rbp-30h] BYREF

  v8 = 0;
  if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
    || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 4) == 0
    || (v9 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
  {
    v9 = 0;
  }
  v10 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
  if ( v9 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    UserSessionState = W32GetUserSessionState(a1, WPP_GLOBAL_Control);
    LOBYTE(v12) = v10;
    LOBYTE(v13) = v9;
    WPP_RECORDER_AND_TRACE_SF_(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v13,
      v12,
      *(_QWORD *)(UserSessionState + 69152),
      4,
      3,
      14,
      (__int64)&WPP_3ec08e089dee332c19828920b6c3c996_Traceguids);
  }
  if ( a1 == a2 )
  {
    if ( a2 )
      *a4 = 1;
  }
  else if ( a2 )
  {
    v14 = (void *)a2[5];
    LockObjectAssignment(a3, a1);
    *a4 = 1;
    Win32RawLockedNtObject<tagDESKTOP>::Win32RawLockedNtObject<tagDESKTOP>(v18, v14);
    Win32RawLockedNtObject<tagDESKTOP>::Win32RawLockedNtObject<tagDESKTOP>(v16, a2);
    v8 = xxxSwitchDesktop(v14, a2, 2LL);
    if ( v17 != -1 )
    {
      PopAndFreeW32ThreadLock((__int64)v16);
      v17 = -1LL;
    }
    if ( v18[2] != -1LL )
      PopAndFreeW32ThreadLock((__int64)v18);
  }
  return v8;
}
