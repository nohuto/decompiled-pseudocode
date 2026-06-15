/*
 * XREFs of ?FinalRelease@CAudioSessionManagerProvider@@QEAAXXZ @ 0x180063A9C
 * Callers:
 *     ??1?$CComObject@VCAudioSessionManagerProvider@@@ATL@@UEAA@XZ @ 0x1800637EC (--1-$CComObject@VCAudioSessionManagerProvider@@@ATL@@UEAA@XZ.c)
 * Callees:
 *     ?Disconnect@CAudioSessionManager@@QEAAJW4AudioServerSessionDisconnectReason@@_N@Z @ 0x18000182C (-Disconnect@CAudioSessionManager@@QEAAJW4AudioServerSessionDisconnectReason@@_N@Z.c)
 *     WPP_SF_q @ 0x180038C50 (WPP_SF_q.c)
 *     _guard_dispatch_icall_nop @ 0x180038F30 (_guard_dispatch_icall_nop.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x180052240 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 */

void __fastcall CAudioSessionManagerProvider::FinalRelease(CAudioSessionManagerProvider *this)
{
  unsigned int v1; // esi
  unsigned __int64 v3; // rcx
  __int64 v4; // rax
  __int64 v5; // rdi

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
      if ( WPP_GLOBAL_Control != (CAudioSession *)&WPP_GLOBAL_Control
        && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
      {
        WPP_SF_q(
          *((_QWORD *)WPP_GLOBAL_Control + 2),
          0xBu,
          (__int64)&WPP_b9a93b86104e3ab68bd14cf374b2c987_Traceguids,
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
    (*(void (__fastcall **)(struct IAudioDuckingManager *))(*(_QWORD *)g_DuckingManager + 16LL))(g_DuckingManager);
    g_DuckingManager = 0LL;
  }
  if ( g_PolicyManager )
  {
    (*(void (__fastcall **)(struct IAudioPolicyManager *))(*(_QWORD *)g_PolicyManager + 232LL))(g_PolicyManager);
    if ( g_PolicyManager )
    {
      (*(void (__fastcall **)(struct IAudioPolicyManager *))(*(_QWORD *)g_PolicyManager + 16LL))(g_PolicyManager);
      g_PolicyManager = 0LL;
    }
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)((char *)this + 64));
}
