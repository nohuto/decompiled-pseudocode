/*
 * XREFs of ?OnMonitorEnabledChanged@CMonitorManager@@AEAAXPEBGPEBU_tagpropertykey@@@Z @ 0x180096F30
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_ @ 0x180001600 (WPP_SF_.c)
 *     WPP_SF_D @ 0x180031934 (WPP_SF_D.c)
 *     ?IsCaptureMonitorEnabled@CMonitor@@KA_NPEAUIMMDevice@@PEAPEAGPEA_N@Z @ 0x180040604 (-IsCaptureMonitorEnabled@CMonitor@@KA_NPEAUIMMDevice@@PEAPEAGPEA_N@Z.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x180043A70 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 *     WPP_SF_S @ 0x18006B12C (WPP_SF_S.c)
 *     WPP_SF_qS @ 0x18006D1E0 (WPP_SF_qS.c)
 *     ?CreateMonitorForCaptureDeviceIfAppropriate@CMonitorManager@@AEAAJPEAUIMMDevice@@@Z @ 0x180094E10 (-CreateMonitorForCaptureDeviceIfAppropriate@CMonitorManager@@AEAAJPEAUIMMDevice@@@Z.c)
 *     ?FindMonitor@CMonitorManager@@AEAA?AV?$CComPtr@VCaptureMonitor@CMonitorManager@@@ATL@@PEBG@Z @ 0x180095A7C (-FindMonitor@CMonitorManager@@AEAA-AV-$CComPtr@VCaptureMonitor@CMonitorManager@@@ATL@@PEBG@Z.c)
 *     ?RemoveMonitor@CMonitorManager@@AEAAXQEBVCaptureMonitor@1@@Z @ 0x180097E2C (-RemoveMonitor@CMonitorManager@@AEAAXQEBVCaptureMonitor@1@@Z.c)
 */

// Hidden C++ exception states: #wind=4
void __fastcall CMonitorManager::OnMonitorEnabledChanged(
        CMonitorManager *this,
        const unsigned __int16 *a2,
        const struct _tagpropertykey *a3)
{
  int MonitorForCaptureDeviceIfAppropriate; // esi
  wchar_t *v6; // rbx
  __int64 v7; // rcx
  char IsCaptureMonitorEnabled; // al
  struct CMonitorManager::CaptureMonitor *v9; // rbx
  struct IMMDevice *v10; // [rsp+30h] [rbp-20h] BYREF
  wchar_t *String2; // [rsp+38h] [rbp-18h] BYREF
  _QWORD v12[2]; // [rsp+40h] [rbp-10h] BYREF
  int v13; // [rsp+80h] [rbp+30h] BYREF
  struct CMonitorManager::CaptureMonitor *v14; // [rsp+98h] [rbp+48h] BYREF

  v12[1] = -2LL;
  v10 = 0LL;
  v12[0] = 0LL;
  MonitorForCaptureDeviceIfAppropriate = (*(__int64 (__fastcall **)(_QWORD, const unsigned __int16 *, struct IMMDevice **))(**((_QWORD **)this + 8) + 40LL))(
                                           *((_QWORD *)this + 8),
                                           a2,
                                           &v10);
  if ( MonitorForCaptureDeviceIfAppropriate >= 0 )
  {
    MonitorForCaptureDeviceIfAppropriate = ((__int64 (__fastcall *)(struct IMMDevice *, GUID *, _QWORD *))v10->lpVtbl->QueryInterface)(
                                             v10,
                                             &GUID_1be09788_6894_4089_8586_9a2a6c265ac5,
                                             v12);
    if ( MonitorForCaptureDeviceIfAppropriate >= 0 )
    {
      MonitorForCaptureDeviceIfAppropriate = (*(__int64 (__fastcall **)(_QWORD, int *))(*(_QWORD *)v12[0] + 24LL))(
                                               v12[0],
                                               &v13);
      if ( MonitorForCaptureDeviceIfAppropriate >= 0 )
      {
        if ( v13 != 1 )
          goto LABEL_37;
        if ( *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
          && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 0x800000) != 0
          && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 4u )
        {
          WPP_SF_S(
            *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
            0x23u,
            (__int64)&WPP_ddb6baaf2876bc9badd045ab2d226c42_Traceguids,
            a2);
        }
        CMonitorManager::FindMonitor((__int64)this, (struct IUnknown **)&v14, a2);
        if ( v14 )
        {
          v6 = 0LL;
          String2 = 0LL;
          v7 = *(_QWORD *)&WPP_GLOBAL_Control.Data1;
          if ( *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
            && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 0x800000) != 0
            && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 4u )
          {
            WPP_SF_qS(
              *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
              0x24u,
              (__int64)&WPP_ddb6baaf2876bc9badd045ab2d226c42_Traceguids);
            v7 = *(_QWORD *)&WPP_GLOBAL_Control.Data1;
          }
          if ( !*((_BYTE *)v14 + 12) )
          {
            IsCaptureMonitorEnabled = CMonitor::IsCaptureMonitorEnabled(v10, &String2, 0LL);
            v6 = String2;
            if ( IsCaptureMonitorEnabled && !_wcsicoll(*((const wchar_t **)v14 + 10), String2) )
            {
              if ( *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
                && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 0x800000) != 0
                && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 4u )
              {
                WPP_SF_(
                  *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
                  0x25u,
                  (__int64)&WPP_ddb6baaf2876bc9badd045ab2d226c42_Traceguids);
              }
              CoTaskMemFree(v6);
              v9 = v14;
              goto LABEL_22;
            }
            v7 = *(_QWORD *)&WPP_GLOBAL_Control.Data1;
          }
          if ( (struct _GUID *)v7 != &WPP_GLOBAL_Control
            && (*(_DWORD *)(v7 + 28) & 0x800000) != 0
            && *(_BYTE *)(v7 + 25) >= 4u )
          {
            WPP_SF_S(*(_QWORD *)(v7 + 16), 0x26u, (__int64)&WPP_ddb6baaf2876bc9badd045ab2d226c42_Traceguids, a2);
          }
          CMonitorManager::RemoveMonitor(this, v14);
          CoTaskMemFree(v6);
        }
        MonitorForCaptureDeviceIfAppropriate = CMonitorManager::CreateMonitorForCaptureDeviceIfAppropriate(this, v10);
        v9 = v14;
        if ( MonitorForCaptureDeviceIfAppropriate >= 0 )
        {
LABEL_22:
          if ( v9 )
            (*(void (__fastcall **)(struct CMonitorManager::CaptureMonitor *))(*(_QWORD *)v9 + 16LL))(v9);
          goto LABEL_37;
        }
        if ( v14 )
          (*(void (__fastcall **)(struct CMonitorManager::CaptureMonitor *))(*(_QWORD *)v14 + 16LL))(v14);
      }
    }
  }
  if ( *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
    && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 0x800000) != 0
    && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 2u )
  {
    WPP_SF_D(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
      0x27u,
      (__int64)&WPP_ddb6baaf2876bc9badd045ab2d226c42_Traceguids,
      MonitorForCaptureDeviceIfAppropriate);
  }
LABEL_37:
  if ( v12[0] )
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v12[0] + 16LL))(v12[0]);
  if ( v10 )
    ((void (__fastcall *)(struct IMMDevice *))v10->lpVtbl->Release)(v10);
}
