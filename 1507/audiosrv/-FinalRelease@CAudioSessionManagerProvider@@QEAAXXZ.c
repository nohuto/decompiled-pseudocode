/*
 * XREFs of ?FinalRelease@CAudioSessionManagerProvider@@QEAAXXZ @ 0x1800810C8
 * Callers:
 *     ??1?$CComObject@VCAudioSessionManagerProvider@@@ATL@@UEAA@XZ @ 0x180080F38 (--1-$CComObject@VCAudioSessionManagerProvider@@@ATL@@UEAA@XZ.c)
 * Callees:
 *     ?Disconnect@CAudioSessionManager@@QEAAJW4AudioServerSessionDisconnectReason@@_N@Z @ 0x18001A5D4 (-Disconnect@CAudioSessionManager@@QEAAJW4AudioServerSessionDisconnectReason@@_N@Z.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x180043A70 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 *     WPP_SF_q @ 0x1800448AC (WPP_SF_q.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x180069190 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 */

void __fastcall CAudioSessionManagerProvider::FinalRelease(CAudioSessionManagerProvider *this)
{
  unsigned int v1; // ebp
  unsigned __int64 v3; // rcx
  __int64 v4; // rax
  __int64 v5; // rsi

  v1 = 0;
  if ( *((_QWORD *)this + 14) )
  {
    v3 = 0LL;
    do
    {
      _mm_lfence();
      v4 = *((_QWORD *)this + 13);
      v5 = *(_QWORD *)(v4 + 8 * v3);
      if ( v3 >= *((_QWORD *)this + 14) )
        ATL::AtlThrowImpl(-2147024809);
      *(_QWORD *)(v4 + 8 * v3) = 0LL;
      CAudioSessionManager::Disconnect(v5, 1u, 1);
      if ( *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
        && (*(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 0x40) != 0
        && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 4u )
      {
        WPP_SF_q(
          *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
          0xBu,
          (__int64)&WPP_abd27309d5392e00f5af32e14a1baf25_Traceguids,
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
    (*(void (__fastcall **)(CWindowsPolicyManager *))(*(_QWORD *)g_PolicyManager + 16LL))(g_PolicyManager);
    g_PolicyManager = 0LL;
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)((char *)this + 64));
}
