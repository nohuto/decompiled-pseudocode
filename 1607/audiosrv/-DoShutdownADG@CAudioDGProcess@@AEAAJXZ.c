/*
 * XREFs of ?DoShutdownADG@CAudioDGProcess@@AEAAJXZ @ 0x180001230
 * Callers:
 *     ?DoTerminateADG@CAudioDGProcess@@AEAAJXZ @ 0x1800014A8 (-DoTerminateADG@CAudioDGProcess@@AEAAJXZ.c)
 * Callees:
 *     ?CloseWait@CAudioThreadPool@@UEAAXPEAU_TP_WAIT@@@Z @ 0x180001520 (-CloseWait@CAudioThreadPool@@UEAAXPEAU_TP_WAIT@@@Z.c)
 *     ?WaitForADGStartup@CAudioDGProcess@@AEAAJPEAK@Z @ 0x180016F6C (-WaitForADGStartup@CAudioDGProcess@@AEAAJPEAK@Z.c)
 *     ?GetADGProcessBindingHandle@CAudioDGProcess@@SAJPEAPEAX@Z @ 0x1800278E0 (-GetADGProcessBindingHandle@CAudioDGProcess@@SAJPEAPEAX@Z.c)
 *     _TlgWrite @ 0x180029790 (_TlgWrite.c)
 *     _TlgCreateSz @ 0x180029AE0 (_TlgCreateSz.c)
 *     ?FreeADGProcessBindingHandle@CAudioDGProcess@@SAXPEAX@Z @ 0x18002A0A4 (-FreeADGProcessBindingHandle@CAudioDGProcess@@SAXPEAX@Z.c)
 *     __security_check_cookie @ 0x180035F50 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180038F30 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_ @ 0x180054338 (WPP_SF_.c)
 *     WPP_SF_D @ 0x18005435C (WPP_SF_D.c)
 */

CLIENT_CALL_RETURN __fastcall CAudioDGProcess::DoShutdownADG(CAudioDGProcess *this)
{
  CLIENT_CALL_RETURN result; // rax
  struct _TP_WAIT *v3; // rdx
  char *v4; // rcx
  char *v5; // rcx
  LPCGUID v6; // r8
  LPCGUID v7; // r9
  unsigned int Pointer; // [rsp+30h] [rbp-98h] BYREF
  CAudioDGProcess *v9; // [rsp+38h] [rbp-90h] BYREF
  RPC_BINDING_HANDLE Binding; // [rsp+40h] [rbp-88h] BYREF
  unsigned int v11; // [rsp+48h] [rbp-80h] BYREF
  CLIENT_CALL_RETURN v12; // [rsp+50h] [rbp-78h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+60h] [rbp-68h] BYREF
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+80h] [rbp-48h] BYREF
  CAudioDGProcess **v15; // [rsp+90h] [rbp-38h]
  int v16; // [rsp+98h] [rbp-30h]
  int v17; // [rsp+9Ch] [rbp-2Ch]
  unsigned int *p_Pointer; // [rsp+A0h] [rbp-28h]
  int v19; // [rsp+A8h] [rbp-20h]
  int v20; // [rsp+ACh] [rbp-1Ch]

  v9 = this;
  result.Simple = 0LL;
  Pointer = 0;
  Binding = 0LL;
  if ( !*((_QWORD *)this + 11) )
  {
LABEL_24:
    v5 = (char *)*((_QWORD *)this + 13);
    if ( (unsigned __int64)(v5 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
    {
      CloseHandle(v5);
      *((_QWORD *)this + 13) = 0LL;
      result.Simple = Pointer;
    }
    goto LABEL_26;
  }
  v3 = (struct _TP_WAIT *)*((_QWORD *)this + 14);
  if ( v3 )
  {
    if ( *(void (__fastcall **)(CAudioThreadPool *__hidden, struct _TP_WAIT *))(*(_QWORD *)ThreadPool + 96LL) == CAudioThreadPool::CloseWait )
      CAudioThreadPool::CloseWait(ThreadPool, v3);
    else
      _guard_dispatch_icall_fptr();
    *((_QWORD *)this + 14) = 0LL;
  }
  Pointer = CAudioDGProcess::WaitForADGStartup(this, &v11);
  if ( (Pointer & 0x80000000) != 0 )
    goto LABEL_15;
  if ( WPP_GLOBAL_Control != (CAudioSession *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 4) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 40LL, &WPP_1980ef3193d738ecffc607926aa7df6d_Traceguids);
  }
  result.Simple = CAudioDGProcess::GetADGProcessBindingHandle(&Binding);
  Pointer = (unsigned int)result.Pointer;
  if ( SLODWORD(result.Simple) >= 0 )
  {
    result.Pointer = NdrClientCall3((MIDL_STUBLESS_PROXY_INFO *)&pProxyInfo, 0, 0LL, Binding).Pointer;
    v12.Pointer = result.Pointer;
    Pointer = (unsigned int)result.Pointer;
    if ( SLODWORD(result.Simple) >= 0 )
    {
LABEL_15:
      if ( WPP_GLOBAL_Control != (CAudioSession *)&WPP_GLOBAL_Control
        && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 4) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
      {
        WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 41LL, &WPP_1980ef3193d738ecffc607926aa7df6d_Traceguids);
      }
      WaitForSingleObjectEx(*((HANDLE *)this + 11), 0xFFFFFFFF, 0);
      v4 = (char *)*((_QWORD *)this + 11);
      if ( (unsigned __int64)(v4 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
      {
        CloseHandle(v4);
        *((_QWORD *)this + 11) = 0LL;
      }
      if ( WPP_GLOBAL_Control != (CAudioSession *)&WPP_GLOBAL_Control
        && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 4) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
      {
        WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 42LL, &WPP_1980ef3193d738ecffc607926aa7df6d_Traceguids);
      }
      *((_BYTE *)this + 97) = 1;
      *((_DWORD *)this + 32) = GetTickCount();
      result.Simple = Pointer;
      goto LABEL_24;
    }
  }
LABEL_26:
  if ( Binding )
  {
    CAudioDGProcess::FreeADGProcessBindingHandle(Binding);
    result.Simple = Pointer;
  }
  if ( SLODWORD(result.Simple) < 0 )
  {
    if ( WPP_GLOBAL_Control != (CAudioSession *)&WPP_GLOBAL_Control
      && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 4) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
    {
      WPP_SF_D(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        43LL,
        &WPP_1980ef3193d738ecffc607926aa7df6d_Traceguids,
        LODWORD(result.Pointer));
      result.Simple = Pointer;
    }
    if ( (unsigned int)hProvider > 2 )
    {
      TlgCreateSz(&pDesc, "CAudioDGProcess::DoShutdownADG");
      LODWORD(v9) = 935;
      v15 = &v9;
      v16 = 4;
      v17 = 0;
      p_Pointer = &Pointer;
      v19 = 4;
      v20 = 0;
      TlgWrite((TraceLoggingHProvider)&hProvider, &unk_1800A877D, v6, v7, 5u, &pData);
      return (CLIENT_CALL_RETURN)Pointer;
    }
  }
  return result;
}
