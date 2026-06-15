/*
 * XREFs of ?DoTerminateADG@CAudioDGProcess@@AEAAJXZ @ 0x180001B68
 * Callers:
 *     ?OnADGInactivityTimerFired@CAudioDGProcess@@AEAAXXZ @ 0x180001D28 (-OnADGInactivityTimerFired@CAudioDGProcess@@AEAAXXZ.c)
 *     ?TerminateADG@CAudioDGProcess@@QEAAJXZ @ 0x18006B828 (-TerminateADG@CAudioDGProcess@@QEAAJXZ.c)
 * Callees:
 *     WPP_SF_ @ 0x180001600 (WPP_SF_.c)
 *     ?WaitForADGStartup@CAudioDGProcess@@AEAAJXZ @ 0x180006300 (-WaitForADGStartup@CAudioDGProcess@@AEAAJXZ.c)
 *     ?CloseWait@CAudioThreadPool@@UEAAXPEAU_TP_WAIT@@@Z @ 0x180006D10 (-CloseWait@CAudioThreadPool@@UEAAXPEAU_TP_WAIT@@@Z.c)
 *     ?FreeADGProcessBindingHandle@CAudioDGProcess@@SAXPEAX@Z @ 0x180006E30 (-FreeADGProcessBindingHandle@CAudioDGProcess@@SAXPEAX@Z.c)
 *     ?GetADGProcessBindingHandle@CAudioDGProcess@@SAJPEAPEAX@Z @ 0x180006E58 (-GetADGProcessBindingHandle@CAudioDGProcess@@SAJPEAPEAX@Z.c)
 *     WPP_SF_D @ 0x180031934 (WPP_SF_D.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x180043A70 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 */

__int64 __fastcall CAudioDGProcess::DoTerminateADG(CAudioDGProcess *this)
{
  CLIENT_CALL_RETURN v2; // rbx
  struct _GUID *v3; // rdx
  struct _TP_WAIT *v4; // rbx
  CAudioThreadPool *v5; // r14
  void (__fastcall *v6)(CAudioThreadPool *__hidden, struct _TP_WAIT *); // r15
  char *v7; // rcx
  char *v8; // rcx
  int Pointer; // [rsp+20h] [rbp-28h]
  RPC_BINDING_HANDLE Binding; // [rsp+58h] [rbp+10h] BYREF
  CLIENT_CALL_RETURN v12; // [rsp+60h] [rbp+18h]

  LODWORD(v2.Pointer) = 0;
  Binding = 0LL;
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 48));
  if ( !*((_QWORD *)this + 11) )
  {
LABEL_24:
    v8 = (char *)*((_QWORD *)this + 13);
    if ( (unsigned __int64)(v8 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
    {
      CloseHandle(v8);
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
  LODWORD(v2.Pointer) = CAudioDGProcess::WaitForADGStartup(this);
  if ( SLODWORD(v2.Simple) < 0 )
    goto LABEL_15;
  if ( *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
    && (*(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 4) != 0
    && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 4u )
  {
    WPP_SF_(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
      0x28u,
      (__int64)&WPP_790b6676494959b41396352d3c3efd49_Traceguids);
  }
  LODWORD(v2.Pointer) = CAudioDGProcess::GetADGProcessBindingHandle(&Binding);
  if ( SLODWORD(v2.Simple) >= 0 )
  {
    v2.Pointer = NdrClientCall3((MIDL_STUBLESS_PROXY_INFO *)&pProxyInfo, 0, 0LL, Binding).Pointer;
    v12.Pointer = v2.Pointer;
    Pointer = (int)v2.Pointer;
    if ( SLODWORD(v2.Simple) >= 0 )
    {
LABEL_15:
      if ( *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
        && (*(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 4) != 0
        && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 4u )
      {
        WPP_SF_(
          *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
          0x29u,
          (__int64)&WPP_790b6676494959b41396352d3c3efd49_Traceguids);
      }
      WaitForSingleObjectEx(*((HANDLE *)this + 11), 0xFFFFFFFF, 0);
      v7 = (char *)*((_QWORD *)this + 11);
      if ( (unsigned __int64)(v7 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
      {
        CloseHandle(v7);
        *((_QWORD *)this + 11) = 0LL;
      }
      if ( *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
        && (*(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 4) != 0
        && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 4u )
      {
        WPP_SF_(
          *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
          0x2Au,
          (__int64)&WPP_790b6676494959b41396352d3c3efd49_Traceguids);
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
  if ( SLODWORD(v2.Simple) < 0
    && *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
    && (*(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 4) != 0
    && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 2u )
  {
    WPP_SF_D(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
      43LL,
      &WPP_790b6676494959b41396352d3c3efd49_Traceguids,
      LODWORD(v2.Pointer),
      Pointer);
  }
  return LODWORD(v2.Pointer);
}
