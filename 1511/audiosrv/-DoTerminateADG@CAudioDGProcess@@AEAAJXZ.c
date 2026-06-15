/*
 * XREFs of ?DoTerminateADG@CAudioDGProcess@@AEAAJXZ @ 0x180001E10
 * Callers:
 *     ?OnADGInactivityTimerFiredHandler@CAudioDGProcess@@CAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_TIMER@@@Z @ 0x180001D70 (-OnADGInactivityTimerFiredHandler@CAudioDGProcess@@CAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_TIM.c)
 *     ?TerminateADG@CAudioDGProcess@@QEAAJXZ @ 0x18006A5B8 (-TerminateADG@CAudioDGProcess@@QEAAJXZ.c)
 * Callees:
 *     WPP_SF_ @ 0x1800025C0 (WPP_SF_.c)
 *     ?WaitForADGStartup@CAudioDGProcess@@AEAAJXZ @ 0x1800330E8 (-WaitForADGStartup@CAudioDGProcess@@AEAAJXZ.c)
 *     ?CloseWait@CAudioThreadPool@@UEAAXPEAU_TP_WAIT@@@Z @ 0x180033B10 (-CloseWait@CAudioThreadPool@@UEAAXPEAU_TP_WAIT@@@Z.c)
 *     ?FreeADGProcessBindingHandle@CAudioDGProcess@@SAXPEAX@Z @ 0x180033C30 (-FreeADGProcessBindingHandle@CAudioDGProcess@@SAXPEAX@Z.c)
 *     ?GetADGProcessBindingHandle@CAudioDGProcess@@SAJPEAPEAX@Z @ 0x180033C58 (-GetADGProcessBindingHandle@CAudioDGProcess@@SAJPEAPEAX@Z.c)
 *     WPP_SF_D @ 0x180039528 (WPP_SF_D.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x1800479B0 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 */

__int64 __fastcall CAudioDGProcess::DoTerminateADG(CAudioDGProcess *this)
{
  int ADGProcessBindingHandle; // ebx
  struct _GUID *v3; // rdx
  struct _TP_WAIT *v4; // rbx
  CAudioThreadPool *v5; // r14
  void (__fastcall *v6)(CAudioThreadPool *__hidden, struct _TP_WAIT *); // r15
  CLIENT_CALL_RETURN v7; // rax
  char *v8; // rcx
  char *v9; // rcx
  RPC_BINDING_HANDLE Binding; // [rsp+58h] [rbp+10h] BYREF
  CLIENT_CALL_RETURN v12; // [rsp+60h] [rbp+18h]

  ADGProcessBindingHandle = 0;
  Binding = 0LL;
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 48));
  if ( !*((_QWORD *)this + 11) )
  {
LABEL_24:
    v9 = (char *)*((_QWORD *)this + 13);
    if ( (unsigned __int64)(v9 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
    {
      CloseHandle(v9);
      *((_QWORD *)this + 13) = 0LL;
    }
    goto LABEL_26;
  }
  v4 = (struct _TP_WAIT *)*((_QWORD *)this + 14);
  if ( v4 )
  {
    v5 = ThreadPool;
    v6 = *(void (__fastcall **)(CAudioThreadPool *__hidden, struct _TP_WAIT *))(*(_QWORD *)ThreadPool + 96LL);
    if ( v6 == CAudioThreadPool::CloseWait )
    {
      CAudioThreadPool::CloseWait(ThreadPool, *((struct _TP_WAIT **)this + 14));
    }
    else
    {
      _guard_check_icall_fptr(*(CBackgroundSessionCallbacks **)(*(_QWORD *)ThreadPool + 96LL), v3);
      v6(v5, v4);
    }
    *((_QWORD *)this + 14) = 0LL;
  }
  ADGProcessBindingHandle = CAudioDGProcess::WaitForADGStartup(this);
  if ( ADGProcessBindingHandle < 0 )
    goto LABEL_15;
  if ( WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 4) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 40LL, &WPP_785362db39762c5e6daaa474a87b7ce9_Traceguids);
  }
  ADGProcessBindingHandle = CAudioDGProcess::GetADGProcessBindingHandle(&Binding);
  if ( ADGProcessBindingHandle >= 0 )
  {
    v7.Pointer = NdrClientCall3((MIDL_STUBLESS_PROXY_INFO *)&pProxyInfo, 0, 0LL, Binding).Pointer;
    ADGProcessBindingHandle = (int)v7.Pointer;
    v12.Pointer = v7.Pointer;
    if ( SLODWORD(v7.Simple) >= 0 )
    {
LABEL_15:
      if ( WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
        && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 4) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
      {
        WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 41LL, &WPP_785362db39762c5e6daaa474a87b7ce9_Traceguids);
      }
      WaitForSingleObjectEx(*((HANDLE *)this + 11), 0xFFFFFFFF, 0);
      v8 = (char *)*((_QWORD *)this + 11);
      if ( (unsigned __int64)(v8 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
      {
        CloseHandle(v8);
        *((_QWORD *)this + 11) = 0LL;
      }
      if ( WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
        && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 4) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
      {
        WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 42LL, &WPP_785362db39762c5e6daaa474a87b7ce9_Traceguids);
      }
      *((_BYTE *)this + 97) = 1;
      *((_DWORD *)this + 32) = GetTickCount();
      goto LABEL_24;
    }
  }
LABEL_26:
  LeaveCriticalSection((LPCRITICAL_SECTION)((char *)this + 48));
  if ( Binding )
    CAudioDGProcess::FreeADGProcessBindingHandle(Binding);
  if ( ADGProcessBindingHandle < 0
    && WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 4) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
  {
    WPP_SF_D(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      43LL,
      &WPP_785362db39762c5e6daaa474a87b7ce9_Traceguids,
      (unsigned int)ADGProcessBindingHandle);
  }
  return (unsigned int)ADGProcessBindingHandle;
}
