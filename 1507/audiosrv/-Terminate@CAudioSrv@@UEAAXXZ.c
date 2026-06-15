/*
 * XREFs of ?Terminate@CAudioSrv@@UEAAXXZ @ 0x18006AB00
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_ @ 0x180001600 (WPP_SF_.c)
 *     ?CancelADGTerminationTimer@CAudioDGProcess@@QEAAXXZ @ 0x180006880 (-CancelADGTerminationTimer@CAudioDGProcess@@QEAAXXZ.c)
 *     ??3@YAXPEAX@Z @ 0x180006F70 (--3@YAXPEAX@Z.c)
 *     ?VAD_AudiosrvServiceStop@CAudioSrv@@AEAAJXZ @ 0x18006AC70 (-VAD_AudiosrvServiceStop@CAudioSrv@@AEAAJXZ.c)
 *     ?TerminateADG@CAudioDGProcess@@QEAAJXZ @ 0x18006B828 (-TerminateADG@CAudioDGProcess@@QEAAJXZ.c)
 *     ?DeletePnpInfo@@YAXXZ @ 0x1800937CC (-DeletePnpInfo@@YAXXZ.c)
 *     ??_GTSSession@@QEAAPEAXI@Z @ 0x18009EFFC (--_GTSSession@@QEAAPEAXI@Z.c)
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
      v2 = qword_1800E88D0;
      if ( !qword_1800E88D0 )
        break;
      v3 = *(_QWORD **)qword_1800E88D0;
      v4 = (TSSession *)*((_QWORD *)qword_1800E88D0 + 2);
      qword_1800E88D0 = v3;
      if ( v3 )
        v3[1] = 0LL;
      else
        qword_1800E88D8 = 0LL;
      operator delete(v2);
      --dword_1800E88E0;
      if ( v4 )
        TSSession::`scalar deleting destructor'(v4, v5);
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)((char *)g_ApplicationManager + 24));
  }
  CAudioSrv::VAD_AudiosrvServiceStop(this);
  if ( *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
    && (*(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 0x20) != 0
    && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 4u )
  {
    WPP_SF_(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
      0x20u,
      (__int64)&WPP_37d224ffc57d66a46fb94c867bf1aa0a_Traceguids);
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
