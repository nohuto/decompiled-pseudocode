/*
 * XREFs of ?Terminate@CMonitor@@AEAAX_NPEAU_TP_CALLBACK_INSTANCE@@@Z @ 0x18009C9C0
 * Callers:
 *     ?Initialize@CMonitorManager@@QEAAJK_KPEBK@Z @ 0x180040374 (-Initialize@CMonitorManager@@QEAAJK_KPEBK@Z.c)
 *     ?DoCreateMonitorForCaptureDeviceIfAppropriate@CMonitorManager@@AEAAJPEAUIMMDevice@@@Z @ 0x180094F88 (-DoCreateMonitorForCaptureDeviceIfAppropriate@CMonitorManager@@AEAAJPEAUIMMDevice@@@Z.c)
 *     ?RestartMonitorIfAppropriate@CaptureMonitor@CMonitorManager@@QEAAJXZ @ 0x180097FA4 (-RestartMonitorIfAppropriate@CaptureMonitor@CMonitorManager@@QEAAJXZ.c)
 *     ?Uninitialize@CaptureMonitor@CMonitorManager@@QEAAXXZ @ 0x180098614 (-Uninitialize@CaptureMonitor@CMonitorManager@@QEAAXXZ.c)
 *     ?UninitializeSynchronously@CaptureMonitor@CMonitorManager@@QEAAXXZ @ 0x180098678 (-UninitializeSynchronously@CaptureMonitor@CMonitorManager@@QEAAXXZ.c)
 *     ?AbortMonitor@CMonitor@@AEAAXXZ @ 0x180098D8C (-AbortMonitor@CMonitor@@AEAAXXZ.c)
 *     ?TerminateMonitorInWorkerThread@CMonitor@@CAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z @ 0x18009CD50 (-TerminateMonitorInWorkerThread@CMonitor@@CAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z.c)
 * Callees:
 *     ?Unlock@CCritSecLock@ATL@@QEAAXXZ @ 0x18001B220 (-Unlock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ??0CCritSecLock@ATL@@QEAA@AEAU_RTL_CRITICAL_SECTION@@_N@Z @ 0x18001B244 (--0CCritSecLock@ATL@@QEAA@AEAU_RTL_CRITICAL_SECTION@@_N@Z.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x180043A70 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 *     WPP_SF_q @ 0x1800448AC (WPP_SF_q.c)
 *     ?Release@?$CComPtrBase@UIPart@@@ATL@@QEAAXXZ @ 0x180068230 (-Release@-$CComPtrBase@UIPart@@@ATL@@QEAAXXZ.c)
 *     ?Close@CHandle@ATL@@QEAAXXZ @ 0x180094AB4 (-Close@CHandle@ATL@@QEAAXXZ.c)
 *     ?Release@?$CComPtrBase@VCMonitorNotification@CMonitor@@@ATL@@QEAAXXZ @ 0x18009BCE0 (-Release@-$CComPtrBase@VCMonitorNotification@CMonitor@@@ATL@@QEAAXXZ.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall CMonitor::Terminate(CMonitor *this, char a2, struct _TP_CALLBACK_INSTANCE *a3)
{
  void *v5; // rcx
  void *v6; // rcx
  __int64 v7; // r12
  __int64 v8; // rdi
  __int64 v9; // r12
  __int64 v10; // rdi
  LPCRITICAL_SECTION v11; // [rsp+28h] [rbp-40h] BYREF
  char v12; // [rsp+30h] [rbp-38h]

  if ( *((_DWORD *)this + 14) != 6 && (!a2 || *((_DWORD *)this + 14) != 5) )
  {
    ATL::CCritSecLock::CCritSecLock((ATL::CCritSecLock *)&v11, (struct _RTL_CRITICAL_SECTION *)((char *)this + 16));
    if ( *((_DWORD *)this + 14) != 6 )
    {
      *((_DWORD *)this + 14) = 5;
      if ( a2 && *((_QWORD *)this + 61) )
      {
        if ( *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
          && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 0x800000) != 0
          && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 4u )
        {
          WPP_SF_q(
            *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
            0x13u,
            (__int64)&WPP_082d2a75d43eaef10a91d7b66e1bdbbb_Traceguids,
            this,
            -2LL);
        }
        (*(void (__fastcall **)(CMonitor *))(*(_QWORD *)this + 8LL))(this);
        SubmitThreadpoolWork(*((PTP_WORK *)this + 61));
      }
      else
      {
        if ( *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
          && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 0x800000) != 0
          && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 4u )
        {
          WPP_SF_q(
            *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
            0x14u,
            (__int64)&WPP_082d2a75d43eaef10a91d7b66e1bdbbb_Traceguids,
            this,
            -2LL);
        }
        v5 = (void *)*((_QWORD *)this + 36);
        if ( v5 )
        {
          SetEvent(v5);
          v6 = (void *)*((_QWORD *)this + 34);
          if ( v6 )
          {
            WaitForSingleObjectEx(v6, 0xFFFFFFFF, 0);
            ATL::CHandle::Close((void **)this + 34);
          }
          ATL::CHandle::Close((void **)this + 36);
        }
        v7 = *((_QWORD *)this + 13);
        if ( v7 )
        {
          (*(void (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)v7 + 88LL))(
            *((_QWORD *)this + 13),
            *((_QWORD *)this + 20));
          ATL::CComPtrBase<IPart>::Release((__int64 *)this + 13);
          ATL::CComPtrBase<CMonitor::CMonitorNotification>::Release((CMonitor::CMonitorNotification **)this + 20);
        }
        CoTaskMemFree(*((LPVOID *)this + 12));
        *((_QWORD *)this + 12) = 0LL;
        ATL::CHandle::Close((void **)this + 14);
        ATL::CComPtrBase<IPart>::Release((__int64 *)this + 11);
        ATL::CComPtrBase<IPart>::Release((__int64 *)this + 9);
        v8 = *((_QWORD *)this + 10);
        if ( v8 )
        {
          *((_QWORD *)this + 10) = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
        }
        CoTaskMemFree(*((LPVOID *)this + 8));
        *((_QWORD *)this + 8) = 0LL;
        v9 = *((_QWORD *)this + 27);
        if ( v9 )
        {
          (*(void (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)v9 + 88LL))(
            *((_QWORD *)this + 27),
            *((_QWORD *)this + 28));
          ATL::CComPtrBase<IPart>::Release((__int64 *)this + 27);
          ATL::CComPtrBase<CMonitor::CMonitorNotification>::Release((CMonitor::CMonitorNotification **)this + 28);
        }
        CoTaskMemFree(*((LPVOID *)this + 25));
        *((_QWORD *)this + 25) = 0LL;
        ATL::CHandle::Close((void **)this + 29);
        ATL::CComPtrBase<IPart>::Release((__int64 *)this + 24);
        ATL::CComPtrBase<IPart>::Release((__int64 *)this + 22);
        v10 = *((_QWORD *)this + 23);
        if ( v10 )
        {
          *((_QWORD *)this + 23) = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
        }
        CoTaskMemFree(*((LPVOID *)this + 21));
        *((_QWORD *)this + 21) = 0LL;
        *((_DWORD *)this + 14) = 6;
        if ( *((_QWORD *)this + 33) )
        {
          if ( a3 )
          {
            if ( *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
              && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 0x800000) != 0
              && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 4u )
            {
              WPP_SF_q(
                *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
                0x15u,
                (__int64)&WPP_082d2a75d43eaef10a91d7b66e1bdbbb_Traceguids,
                this);
            }
            SetEventWhenCallbackReturns(a3, *((HANDLE *)this + 33));
          }
          else
          {
            if ( *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
              && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 0x800000) != 0
              && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 4u )
            {
              WPP_SF_q(
                *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
                0x16u,
                (__int64)&WPP_082d2a75d43eaef10a91d7b66e1bdbbb_Traceguids,
                this);
            }
            SetEvent(*((HANDLE *)this + 33));
          }
        }
      }
    }
    if ( v12 )
      ATL::CCritSecLock::Unlock(&v11);
  }
}
