/*
 * XREFs of ?Terminate@CAudioSrv@@UEAAXXZ @ 0x180069810
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_ @ 0x1800025C0 (WPP_SF_.c)
 *     ??3@YAXPEAX@Z @ 0x1800301D0 (--3@YAXPEAX@Z.c)
 *     ?CancelADGTerminationTimer@CAudioDGProcess@@QEAAXXZ @ 0x180033668 (-CancelADGTerminationTimer@CAudioDGProcess@@QEAAXXZ.c)
 *     ?VAD_AudiosrvServiceStop@CAudioSrv@@AEAAJXZ @ 0x180069980 (-VAD_AudiosrvServiceStop@CAudioSrv@@AEAAJXZ.c)
 *     ?TerminateADG@CAudioDGProcess@@QEAAJXZ @ 0x18006A5B8 (-TerminateADG@CAudioDGProcess@@QEAAJXZ.c)
 *     ?DeletePnpInfo@@YAXXZ @ 0x180090FFC (-DeletePnpInfo@@YAXXZ.c)
 *     ??_GTSSession@@QEAAPEAXI@Z @ 0x18009BE30 (--_GTSSession@@QEAAPEAXI@Z.c)
 */

void __fastcall CAudioSrv::Terminate(CAudioSrv *this)
{
  void *v2; // rcx
  _QWORD *v3; // rax
  TSSession *v4; // rdi
  unsigned int v5; // edx
  CAudioDGProcess *v6; // rcx
  struct _RTL_CRITICAL_SECTION *v7; // rbx

  if ( g_ADGProcess )
    CAudioDGProcess::CancelADGTerminationTimer(g_ADGProcess);
  if ( *((_DWORD *)this + 23) )
  {
    EnterCriticalSection((LPCRITICAL_SECTION)((char *)g_ApplicationManager + 24));
    while ( 1 )
    {
      v2 = qword_1800E68A0;
      if ( !qword_1800E68A0 )
        break;
      v3 = *(_QWORD **)qword_1800E68A0;
      v4 = (TSSession *)*((_QWORD *)qword_1800E68A0 + 2);
      qword_1800E68A0 = v3;
      if ( v3 )
        v3[1] = 0LL;
      else
        qword_1800E68A8 = 0LL;
      operator delete(v2);
      --dword_1800E68B0;
      if ( v4 )
        TSSession::`scalar deleting destructor'(v4, v5);
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)((char *)g_ApplicationManager + 24));
  }
  CAudioSrv::VAD_AudiosrvServiceStop(this);
  if ( WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x20) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x20u, (__int64)&WPP_37d224ffc57d66a46fb94c867bf1aa0a_Traceguids);
  }
  DeletePnpInfo();
  if ( AudioEndpointBuilderSid )
    LocalFree(AudioEndpointBuilderSid);
  v6 = (CAudioDGProcess *)AudiosrvSid;
  if ( AudiosrvSid )
    LocalFree(AudiosrvSid);
  AudioEndpointBuilderSid = 0LL;
  AudiosrvSid = 0LL;
  if ( g_ADGProcess )
  {
    CAudioDGProcess::TerminateADG(v6);
    v7 = g_ADGProcess;
    if ( g_ADGProcess )
    {
      DeleteCriticalSection((LPCRITICAL_SECTION)((char *)g_ADGProcess + 48));
      DeleteCriticalSection(v7);
      operator delete(v7);
    }
    g_ADGProcess = 0LL;
  }
  KsNotifications_ServiceStop();
}
