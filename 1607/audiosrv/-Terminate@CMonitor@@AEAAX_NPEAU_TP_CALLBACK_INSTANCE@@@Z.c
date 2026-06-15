/*
 * XREFs of ?Terminate@CMonitor@@AEAAX_NPEAU_TP_CALLBACK_INSTANCE@@@Z @ 0x1800820F0
 * Callers:
 *     ?Initialize@CMonitorManager@@QEAAJK_KPEBK@Z @ 0x18003314C (-Initialize@CMonitorManager@@QEAAJK_KPEBK@Z.c)
 *     ?AbortMonitor@CMonitor@@AEAAXXZ @ 0x18004F908 (-AbortMonitor@CMonitor@@AEAAXXZ.c)
 *     ?DoCreateMonitorForCaptureDeviceIfAppropriate@CMonitorManager@@AEAAJPEAUIMMDevice@@@Z @ 0x18007B808 (-DoCreateMonitorForCaptureDeviceIfAppropriate@CMonitorManager@@AEAAJPEAUIMMDevice@@@Z.c)
 *     ?RestartMonitorIfAppropriate@CaptureMonitor@CMonitorManager@@QEAAJXZ @ 0x18007E758 (-RestartMonitorIfAppropriate@CaptureMonitor@CMonitorManager@@QEAAJXZ.c)
 *     ?Uninitialize@CaptureMonitor@CMonitorManager@@QEAAXXZ @ 0x18007ED64 (-Uninitialize@CaptureMonitor@CMonitorManager@@QEAAXXZ.c)
 *     ?UninitializeSynchronously@CaptureMonitor@CMonitorManager@@QEAAXXZ @ 0x18007EDAC (-UninitializeSynchronously@CaptureMonitor@CMonitorManager@@QEAAXXZ.c)
 *     ?TerminateMonitorInWorkerThread@CMonitor@@CAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z @ 0x180082470 (-TerminateMonitorInWorkerThread@CMonitor@@CAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z.c)
 * Callees:
 *     ??0CCritSecLock@ATL@@QEAA@AEAU_RTL_CRITICAL_SECTION@@_N@Z @ 0x180017B40 (--0CCritSecLock@ATL@@QEAA@AEAU_RTL_CRITICAL_SECTION@@_N@Z.c)
 *     ?Unlock@CCritSecLock@ATL@@QEAAXXZ @ 0x180017BA0 (-Unlock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     WPP_SF_q @ 0x180038C50 (WPP_SF_q.c)
 *     _guard_dispatch_icall_nop @ 0x180038F30 (_guard_dispatch_icall_nop.c)
 *     ?Release@?$CComPtrBase@UIPart@@@ATL@@QEAAXXZ @ 0x18004FFB4 (-Release@-$CComPtrBase@UIPart@@@ATL@@QEAAXXZ.c)
 *     ?Close@CHandle@ATL@@QEAAXXZ @ 0x18007B320 (-Close@CHandle@ATL@@QEAAXXZ.c)
 *     ?Release@?$CComPtrBase@VCMonitorNotification@CMonitor@@@ATL@@QEAAXXZ @ 0x18008153C (-Release@-$CComPtrBase@VCMonitorNotification@CMonitor@@@ATL@@QEAAXXZ.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall CMonitor::Terminate(CMonitor *this, char a2, struct _TP_CALLBACK_INSTANCE *a3)
{
  void *v6; // rcx
  void *v7; // rcx
  __int64 v8; // rcx
  __int64 v9; // rcx
  __int64 v10; // rcx
  __int64 v11; // rcx
  LPCRITICAL_SECTION v12; // [rsp+28h] [rbp-20h] BYREF
  char v13; // [rsp+30h] [rbp-18h]

  if ( *((_DWORD *)this + 14) != 6 && (!a2 || *((_DWORD *)this + 14) != 5) )
  {
    ATL::CCritSecLock::CCritSecLock((ATL::CCritSecLock *)&v12, (struct _RTL_CRITICAL_SECTION *)((char *)this + 16));
    if ( *((_DWORD *)this + 14) == 6 || *((_DWORD *)this + 14) == 5 && a2 && *((_QWORD *)this + 61) )
    {
LABEL_45:
      if ( v13 )
        ATL::CCritSecLock::Unlock(&v12);
      return;
    }
    *((_DWORD *)this + 14) = 5;
    if ( a2 && *((_QWORD *)this + 61) )
    {
      if ( WPP_GLOBAL_Control != (CAudioSession *)&WPP_GLOBAL_Control
        && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x800000) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
      {
        WPP_SF_q(
          *((_QWORD *)WPP_GLOBAL_Control + 2),
          0x13u,
          (__int64)&WPP_bd0193786e9e34b543d459a2183e6794_Traceguids,
          (__int64)this);
      }
      (*(void (__fastcall **)(CMonitor *))(*(_QWORD *)this + 8LL))(this);
      SubmitThreadpoolWork(*((PTP_WORK *)this + 61));
      goto LABEL_45;
    }
    if ( v13 )
      ATL::CCritSecLock::Unlock(&v12);
    if ( WPP_GLOBAL_Control != (CAudioSession *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x800000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_q(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        0x14u,
        (__int64)&WPP_bd0193786e9e34b543d459a2183e6794_Traceguids,
        (__int64)this);
    }
    v6 = (void *)*((_QWORD *)this + 36);
    if ( v6 )
    {
      SetEvent(v6);
      v7 = (void *)*((_QWORD *)this + 34);
      if ( v7 )
      {
        WaitForSingleObjectEx(v7, 0xFFFFFFFF, 0);
        ATL::CHandle::Close((void **)this + 34);
      }
      ATL::CHandle::Close((void **)this + 36);
    }
    v8 = *((_QWORD *)this + 13);
    if ( v8 )
    {
      (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v8 + 88LL))(v8, *((_QWORD *)this + 20));
      ATL::CComPtrBase<IPart>::Release((_QWORD *)this + 13);
      ATL::CComPtrBase<CMonitor::CMonitorNotification>::Release((CMonitor::CMonitorNotification **)this + 20);
    }
    CoTaskMemFree(*((LPVOID *)this + 12));
    *((_QWORD *)this + 12) = 0LL;
    ATL::CHandle::Close((void **)this + 14);
    ATL::CComPtrBase<IPart>::Release((_QWORD *)this + 11);
    ATL::CComPtrBase<IPart>::Release((_QWORD *)this + 9);
    v9 = *((_QWORD *)this + 10);
    if ( v9 )
    {
      *((_QWORD *)this + 10) = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
    }
    CoTaskMemFree(*((LPVOID *)this + 8));
    *((_QWORD *)this + 8) = 0LL;
    v10 = *((_QWORD *)this + 27);
    if ( v10 )
    {
      (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v10 + 88LL))(v10, *((_QWORD *)this + 28));
      ATL::CComPtrBase<IPart>::Release((_QWORD *)this + 27);
      ATL::CComPtrBase<CMonitor::CMonitorNotification>::Release((CMonitor::CMonitorNotification **)this + 28);
    }
    CoTaskMemFree(*((LPVOID *)this + 25));
    *((_QWORD *)this + 25) = 0LL;
    ATL::CHandle::Close((void **)this + 29);
    ATL::CComPtrBase<IPart>::Release((_QWORD *)this + 24);
    ATL::CComPtrBase<IPart>::Release((_QWORD *)this + 22);
    v11 = *((_QWORD *)this + 23);
    if ( v11 )
    {
      *((_QWORD *)this + 23) = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
    }
    CoTaskMemFree(*((LPVOID *)this + 21));
    *((_QWORD *)this + 21) = 0LL;
    *((_DWORD *)this + 14) = 6;
    if ( *((_QWORD *)this + 33) )
    {
      if ( a3 )
      {
        if ( WPP_GLOBAL_Control != (CAudioSession *)&WPP_GLOBAL_Control
          && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x800000) != 0
          && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
        {
          WPP_SF_q(
            *((_QWORD *)WPP_GLOBAL_Control + 2),
            0x15u,
            (__int64)&WPP_bd0193786e9e34b543d459a2183e6794_Traceguids,
            (__int64)this);
        }
        SetEventWhenCallbackReturns(a3, *((HANDLE *)this + 33));
      }
      else
      {
        if ( WPP_GLOBAL_Control != (CAudioSession *)&WPP_GLOBAL_Control
          && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x800000) != 0
          && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
        {
          WPP_SF_q(
            *((_QWORD *)WPP_GLOBAL_Control + 2),
            0x16u,
            (__int64)&WPP_bd0193786e9e34b543d459a2183e6794_Traceguids,
            (__int64)this);
        }
        SetEvent(*((HANDLE *)this + 33));
      }
    }
  }
}
