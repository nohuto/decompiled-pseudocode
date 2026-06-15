/*
 * XREFs of ?OnADGProcessTerminated@CAudioDGProcess@@AEAAXXZ @ 0x18006B3A0
 * Callers:
 *     ?OnADGProcessTerminatedHandler@CAudioDGProcess@@CAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WAIT@@J@Z @ 0x18006B5A0 (-OnADGProcessTerminatedHandler@CAudioDGProcess@@CAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WAIT@@.c)
 * Callees:
 *     WPP_SF_ @ 0x180001600 (WPP_SF_.c)
 *     ?VAD_AudiosrvAudioDGProcessTerminated@@YAX_N@Z @ 0x180001AB0 (-VAD_AudiosrvAudioDGProcessTerminated@@YAX_N@Z.c)
 *     ?Unlock@CCritSecLock@ATL@@QEAAXXZ @ 0x18001B220 (-Unlock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ??0CCritSecLock@ATL@@QEAA@AEAU_RTL_CRITICAL_SECTION@@_N@Z @ 0x18001B244 (--0CCritSecLock@ATL@@QEAA@AEAU_RTL_CRITICAL_SECTION@@_N@Z.c)
 *     GetSAProvider @ 0x18002E018 (GetSAProvider.c)
 *     ?Release@?$CComObject@VCSaProvider@@@ATL@@UEAAKXZ @ 0x18002E1D0 (-Release@-$CComObject@VCSaProvider@@@ATL@@UEAAKXZ.c)
 *     WPP_SF_D @ 0x180031934 (WPP_SF_D.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x180043A70 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 *     WPP_SF_q @ 0x1800448AC (WPP_SF_q.c)
 *     Template_q @ 0x18006B918 (Template_q.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall CAudioDGProcess::OnADGProcessTerminated(CAudioDGProcess *this)
{
  void *v2; // rcx
  __int64 v3; // rcx
  char *v4; // rcx
  volatile int *v5; // rdx
  __int64 (__fastcall *v6)(__int64, volatile int *); // rdi
  LPCRITICAL_SECTION v7; // [rsp+28h] [rbp-30h] BYREF
  char v8; // [rsp+30h] [rbp-28h]
  DWORD ExitCode; // [rsp+60h] [rbp+8h] BYREF
  __int64 v10; // [rsp+68h] [rbp+10h] BYREF

  ATL::CCritSecLock::CCritSecLock((ATL::CCritSecLock *)&v7, (struct _RTL_CRITICAL_SECTION *)((char *)this + 48));
  if ( *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
    && (*(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 4) != 0
    && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 2u )
  {
    WPP_SF_q(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
      0x2Du,
      (__int64)&WPP_790b6676494959b41396352d3c3efd49_Traceguids,
      *((_QWORD *)this + 11),
      -2LL);
  }
  v2 = (void *)*((_QWORD *)this + 11);
  if ( v2 && GetExitCodeProcess(v2, &ExitCode) )
  {
    v10 = 0LL;
    v3 = *(_QWORD *)&WPP_GLOBAL_Control.Data1;
    if ( *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
      && (*(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 4) != 0
      && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 2u )
    {
      WPP_SF_D(
        *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
        0x2Eu,
        (__int64)&WPP_790b6676494959b41396352d3c3efd49_Traceguids,
        ExitCode);
    }
    if ( (Microsoft_Windows_AudioEnableBits & 4) != 0 )
      Template_q(v3, &EVT_AUDIOSRV_FAIL_AUDIODG_CRASHED, ExitCode);
    ShipAssert(90114LL, ExitCode);
    v4 = (char *)*((_QWORD *)this + 11);
    if ( (unsigned __int64)(v4 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
    {
      CloseHandle(v4);
      *((_QWORD *)this + 11) = 0LL;
    }
    (*(void (__fastcall **)(CAudioThreadPool *, _QWORD))(*(_QWORD *)ThreadPool + 96LL))(
      ThreadPool,
      *((_QWORD *)this + 14));
    *((_QWORD *)this + 14) = 0LL;
    if ( *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
      && (*(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 4) != 0
      && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 2u )
    {
      WPP_SF_(
        *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
        0x2Fu,
        (__int64)&WPP_790b6676494959b41396352d3c3efd49_Traceguids);
    }
    VAD_AudiosrvAudioDGProcessTerminated(1);
    if ( (int)GetSAProvider((__int64)&v10) >= 0 )
      (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v10 + 40LL))(v10, 4294967294LL);
    if ( v10 )
    {
      v6 = *(__int64 (__fastcall **)(__int64, volatile int *))(*(_QWORD *)v10 + 16LL);
      if ( v6 == ATL::CComObject<CSaProvider>::Release )
        ATL::CComObject<CSaProvider>::Release(v10, v5);
      else
        ((void (__fastcall *)(__int64))v6)(v10);
    }
  }
  if ( v8 )
    ATL::CCritSecLock::Unlock(&v7);
}
