/*
 * XREFs of ?HandleDeviceAdded@CMonitorManager@@AEAAXPEBG@Z @ 0x180095C78
 * Callers:
 *     ?ProcessDeviceStateChanged@CMonitorManager@@AEAAXXZ @ 0x180097680 (-ProcessDeviceStateChanged@CMonitorManager@@AEAAXXZ.c)
 * Callees:
 *     WPP_SF_D @ 0x180031934 (WPP_SF_D.c)
 *     ?IsCaptureMonitorEnabled@CMonitor@@KA_NPEAUIMMDevice@@PEAPEAGPEA_N@Z @ 0x180040604 (-IsCaptureMonitorEnabled@CMonitor@@KA_NPEAUIMMDevice@@PEAPEAGPEA_N@Z.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x180043A70 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 *     ?CreateMonitorForCaptureDeviceIfAppropriate@CMonitorManager@@AEAAJPEAUIMMDevice@@@Z @ 0x180094E10 (-CreateMonitorForCaptureDeviceIfAppropriate@CMonitorManager@@AEAAJPEAUIMMDevice@@@Z.c)
 */

// Hidden C++ exception states: #wind=5
void __fastcall CMonitorManager::HandleDeviceAdded(CMonitorManager *this, wchar_t *String2)
{
  int MonitorForCaptureDeviceIfAppropriate; // esi
  unsigned int i; // esi
  wchar_t *v6; // rcx
  char IsCaptureMonitorEnabled; // al
  wchar_t *v8; // rbx
  int v9; // eax
  __int64 v10; // [rsp+20h] [rbp-30h] BYREF
  struct IMMDevice *v11; // [rsp+28h] [rbp-28h] BYREF
  __int64 v12; // [rsp+30h] [rbp-20h] BYREF
  wchar_t *String1[3]; // [rsp+38h] [rbp-18h] BYREF
  unsigned int v14; // [rsp+90h] [rbp+40h] BYREF
  int v15; // [rsp+A0h] [rbp+50h] BYREF
  struct IMMDevice *v16; // [rsp+A8h] [rbp+58h] BYREF

  String1[1] = (wchar_t *)-2LL;
  v11 = 0LL;
  v12 = 0LL;
  MonitorForCaptureDeviceIfAppropriate = (*(__int64 (__fastcall **)(_QWORD, wchar_t *, struct IMMDevice **))(**((_QWORD **)this + 8) + 40LL))(
                                           *((_QWORD *)this + 8),
                                           String2,
                                           &v11);
  if ( MonitorForCaptureDeviceIfAppropriate < 0
    || (MonitorForCaptureDeviceIfAppropriate = ((__int64 (__fastcall *)(struct IMMDevice *, GUID *, __int64 *))v11->lpVtbl->QueryInterface)(
                                                 v11,
                                                 &GUID_1be09788_6894_4089_8586_9a2a6c265ac5,
                                                 &v12),
        MonitorForCaptureDeviceIfAppropriate < 0)
    || (MonitorForCaptureDeviceIfAppropriate = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v12 + 24LL))(
                                                 v12,
                                                 &v15),
        MonitorForCaptureDeviceIfAppropriate < 0) )
  {
LABEL_27:
    if ( *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
      && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 0x800000) != 0
      && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 2u )
    {
      WPP_SF_D(
        *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
        0x48u,
        (__int64)&WPP_ddb6baaf2876bc9badd045ab2d226c42_Traceguids,
        MonitorForCaptureDeviceIfAppropriate);
    }
    goto LABEL_31;
  }
  if ( v15 == 1 )
  {
    MonitorForCaptureDeviceIfAppropriate = CMonitorManager::CreateMonitorForCaptureDeviceIfAppropriate(this, v11);
    if ( MonitorForCaptureDeviceIfAppropriate >= 0 )
      goto LABEL_31;
    goto LABEL_27;
  }
  v10 = 0LL;
  MonitorForCaptureDeviceIfAppropriate = (*(__int64 (__fastcall **)(_QWORD, __int64, __int64, __int64 *))(**((_QWORD **)this + 8) + 24LL))(
                                           *((_QWORD *)this + 8),
                                           1LL,
                                           1LL,
                                           &v10);
  if ( MonitorForCaptureDeviceIfAppropriate < 0
    || (MonitorForCaptureDeviceIfAppropriate = (*(__int64 (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v10 + 24LL))(
                                                 v10,
                                                 &v14),
        MonitorForCaptureDeviceIfAppropriate < 0) )
  {
    if ( v10 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
    goto LABEL_27;
  }
  for ( i = 0; i < v14; ++i )
  {
    v16 = 0LL;
    String1[0] = 0LL;
    if ( (*(int (__fastcall **)(__int64, _QWORD, struct IMMDevice **))(*(_QWORD *)v10 + 32LL))(v10, i, &v16) >= 0 )
    {
      IsCaptureMonitorEnabled = CMonitor::IsCaptureMonitorEnabled(v16, String1, 0LL);
      v8 = String1[0];
      if ( IsCaptureMonitorEnabled )
      {
        if ( !_wcsicmp(String1[0], String2) )
        {
          v9 = CMonitorManager::CreateMonitorForCaptureDeviceIfAppropriate(this, v16);
          if ( v9 < 0
            && *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
            && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 0x800000) != 0
            && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 2u )
          {
            WPP_SF_D(
              *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
              0x47u,
              (__int64)&WPP_ddb6baaf2876bc9badd045ab2d226c42_Traceguids,
              v9);
          }
        }
      }
      v6 = v8;
    }
    else
    {
      v6 = 0LL;
    }
    CoTaskMemFree(v6);
    if ( v16 )
      ((void (__fastcall *)(struct IMMDevice *))v16->lpVtbl->Release)(v16);
  }
  if ( v10 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
LABEL_31:
  if ( v12 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
  if ( v11 )
    ((void (__fastcall *)(struct IMMDevice *))v11->lpVtbl->Release)(v11);
}
