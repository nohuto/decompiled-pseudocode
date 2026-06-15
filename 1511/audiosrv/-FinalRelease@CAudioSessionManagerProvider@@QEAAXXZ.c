/*
 * XREFs of ?FinalRelease@CAudioSessionManagerProvider@@QEAAXXZ @ 0x18007C374
 * Callers:
 *     ??1?$CComObject@VCAudioSessionManagerProvider@@@ATL@@UEAA@XZ @ 0x18007C0C8 (--1-$CComObject@VCAudioSessionManagerProvider@@@ATL@@UEAA@XZ.c)
 * Callees:
 *     ?Disconnect@CAudioSessionManager@@QEAAJW4AudioServerSessionDisconnectReason@@_N@Z @ 0x1800024FC (-Disconnect@CAudioSessionManager@@QEAAJW4AudioServerSessionDisconnectReason@@_N@Z.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x1800479B0 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 *     WPP_SF_q @ 0x180048AAC (WPP_SF_q.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x180067B60 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 */

void __fastcall CAudioSessionManagerProvider::FinalRelease(CAudioSessionManagerProvider *this)
{
  unsigned int v1; // ebp
  __int64 v3; // rcx
  __int64 v4; // rax
  __int64 v5; // rsi

  v1 = 0;
  if ( *((_QWORD *)this + 14) )
  {
    v3 = 0LL;
    do
    {
      v4 = *((_QWORD *)this + 13);
      v5 = *(_QWORD *)(v4 + 8 * v3);
      *(_QWORD *)(v4 + 8 * v3) = 0LL;
      CAudioSessionManager::Disconnect(v5, 1u, 1);
      if ( WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
        && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
      {
        WPP_SF_q(
          *((_QWORD *)WPP_GLOBAL_Control + 2),
          0xBu,
          (__int64)&WPP_f5a98effc09751b25bbbf82349451d2d_Traceguids,
          v5);
      }
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
      v3 = ++v1;
    }
    while ( (unsigned __int64)v1 < *((_QWORD *)this + 14) );
  }
  if ( g_PolicyEventsHandler )
  {
    (*(void (__fastcall **)(struct ISessionInternalEvents *))(*(_QWORD *)g_PolicyEventsHandler + 16LL))(g_PolicyEventsHandler);
    g_PolicyEventsHandler = 0LL;
  }
  if ( g_DuckingManager )
  {
    (*(void (__fastcall **)(CDuckingManager *))(*(_QWORD *)g_DuckingManager + 16LL))(g_DuckingManager);
    g_DuckingManager = 0LL;
  }
  if ( g_PolicyManager )
  {
    (*(void (__fastcall **)(CWindowsPolicyManager *))(*(_QWORD *)g_PolicyManager + 240LL))(g_PolicyManager);
    if ( g_PolicyManager )
    {
      (*(void (__fastcall **)(CWindowsPolicyManager *))(*(_QWORD *)g_PolicyManager + 16LL))(g_PolicyManager);
      g_PolicyManager = 0LL;
    }
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)((char *)this + 64));
}
