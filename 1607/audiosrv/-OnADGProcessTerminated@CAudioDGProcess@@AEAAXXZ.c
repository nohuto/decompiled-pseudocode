/*
 * XREFs of ?OnADGProcessTerminated@CAudioDGProcess@@AEAAXXZ @ 0x1800846C0
 * Callers:
 *     ?OnADGProcessTerminatedHandler@CAudioDGProcess@@CAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WAIT@@J@Z @ 0x1800848E0 (-OnADGProcessTerminatedHandler@CAudioDGProcess@@CAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WAIT@@.c)
 * Callees:
 *     ??0CCritSecLock@ATL@@QEAA@AEAU_RTL_CRITICAL_SECTION@@_N@Z @ 0x180017B40 (--0CCritSecLock@ATL@@QEAA@AEAU_RTL_CRITICAL_SECTION@@_N@Z.c)
 *     ?Unlock@CCritSecLock@ATL@@QEAAXXZ @ 0x180017BA0 (-Unlock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     _TlgWrite @ 0x180029790 (_TlgWrite.c)
 *     _TlgCreateSz @ 0x180029AE0 (_TlgCreateSz.c)
 *     Template_q @ 0x180029FA4 (Template_q.c)
 *     __security_check_cookie @ 0x180035F50 (__security_check_cookie.c)
 *     WPP_SF_q @ 0x180038C50 (WPP_SF_q.c)
 *     _guard_dispatch_icall_nop @ 0x180038F30 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_ @ 0x180054338 (WPP_SF_.c)
 *     WPP_SF_D @ 0x18005435C (WPP_SF_D.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall CAudioDGProcess::OnADGProcessTerminated(CAudioDGProcess *this)
{
  void *v2; // rcx
  CAudioSession *v3; // rcx
  LPCGUID v4; // r8
  LPCGUID v5; // r9
  char *v6; // rcx
  __int64 v7; // rdx
  void (__fastcall ***v8)(_QWORD, __int64); // rcx
  DWORD ExitCode; // [rsp+38h] [rbp-39h] BYREF
  int v10; // [rsp+3Ch] [rbp-35h] BYREF
  DWORD v11; // [rsp+40h] [rbp-31h] BYREF
  LPCRITICAL_SECTION v12; // [rsp+48h] [rbp-29h] BYREF
  char v13; // [rsp+50h] [rbp-21h]
  __int64 v14; // [rsp+58h] [rbp-19h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+68h] [rbp-9h] BYREF
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+88h] [rbp+17h] BYREF
  int *v17; // [rsp+98h] [rbp+27h]
  int v18; // [rsp+A0h] [rbp+2Fh]
  int v19; // [rsp+A4h] [rbp+33h]
  DWORD *v20; // [rsp+A8h] [rbp+37h]
  int v21; // [rsp+B0h] [rbp+3Fh]
  int v22; // [rsp+B4h] [rbp+43h]

  v14 = -2LL;
  ATL::CCritSecLock::CCritSecLock((ATL::CCritSecLock *)&v12, (struct _RTL_CRITICAL_SECTION *)((char *)this + 48));
  if ( WPP_GLOBAL_Control != (CAudioSession *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 4) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
  {
    WPP_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      0x2Du,
      (__int64)&WPP_1980ef3193d738ecffc607926aa7df6d_Traceguids,
      *((_QWORD *)this + 11));
  }
  v2 = (void *)*((_QWORD *)this + 11);
  if ( v2 && GetExitCodeProcess(v2, &ExitCode) )
  {
    v3 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control != (CAudioSession *)&WPP_GLOBAL_Control
      && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 4) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
    {
      WPP_SF_D(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        0x2Eu,
        (__int64)&WPP_1980ef3193d738ecffc607926aa7df6d_Traceguids,
        ExitCode);
    }
    if ( (unsigned int)hProvider > 2 )
    {
      TlgCreateSz(&pDesc, "CAudioDGProcess::OnADGProcessTerminated");
      v10 = 1060;
      v17 = &v10;
      v18 = 4;
      v19 = 0;
      v11 = ExitCode;
      v20 = &v11;
      v21 = 4;
      v22 = 0;
      TlgWrite((TraceLoggingHProvider)&hProvider, &unk_1800A877D, v4, v5, 5u, &pData);
    }
    if ( (Microsoft_Windows_AudioEnableBits & 4) != 0 )
      Template_q((__int64)v3, &EVT_AUDIOSRV_FAIL_AUDIODG_CRASHED, ExitCode);
    ShipAssert(90114LL, ExitCode);
    v6 = (char *)*((_QWORD *)this + 11);
    if ( (unsigned __int64)(v6 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
    {
      CloseHandle(v6);
      *((_QWORD *)this + 11) = 0LL;
    }
    (*(void (__fastcall **)(CAudioThreadPool *, _QWORD))(*(_QWORD *)ThreadPool + 96LL))(
      ThreadPool,
      *((_QWORD *)this + 14));
    *((_QWORD *)this + 14) = 0LL;
    if ( WPP_GLOBAL_Control != (CAudioSession *)&WPP_GLOBAL_Control
      && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 4) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
    {
      WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x2Fu, (__int64)&WPP_1980ef3193d738ecffc607926aa7df6d_Traceguids);
    }
    v8 = (void (__fastcall ***)(_QWORD, __int64))*((_QWORD *)this + 17);
    if ( v8 )
    {
      LOBYTE(v7) = 1;
      (**v8)(v8, v7);
    }
  }
  if ( v13 )
    ATL::CCritSecLock::Unlock(&v12);
}
