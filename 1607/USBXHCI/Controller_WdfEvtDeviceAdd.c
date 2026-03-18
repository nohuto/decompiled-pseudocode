/*
 * XREFs of Controller_WdfEvtDeviceAdd @ 0x1C004E2E0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C0005BA0 (WPP_RECORDER_SF_d.c)
 *     Etw_ControllerCreate @ 0x1C0009500 (Etw_ControllerCreate.c)
 *     Controller_AddControllerToGlobalControllerList @ 0x1C0009540 (Controller_AddControllerToGlobalControllerList.c)
 *     __security_check_cookie @ 0x1C000FA40 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C000FEA0 (_guard_dispatch_icall_nop.c)
 *     Controller_CreateWdfDevice @ 0x1C004A040 (Controller_CreateWdfDevice.c)
 *     Interrupter_Create @ 0x1C004A798 (Interrupter_Create.c)
 *     Controller_Create @ 0x1C004AA30 (Controller_Create.c)
 *     IoControl_Create @ 0x1C004C368 (IoControl_Create.c)
 *     Register_Create @ 0x1C004C4A4 (Register_Create.c)
 *     Controller_ConfigureS0IdleSettings @ 0x1C004C8CC (Controller_ConfigureS0IdleSettings.c)
 *     DeviceSlot_Create @ 0x1C004D668 (DeviceSlot_Create.c)
 *     RootHub_Create @ 0x1C004D774 (RootHub_Create.c)
 *     Controller_ConfigureSxWakeSettings @ 0x1C004E524 (Controller_ConfigureSxWakeSettings.c)
 *     Wmi_Create @ 0x1C004E5B0 (Wmi_Create.c)
 *     Command_Create @ 0x1C004E6E4 (Command_Create.c)
 *     IntelPptFilter_Create @ 0x1C0054910 (IntelPptFilter_Create.c)
 */

__int64 __fastcall Controller_WdfEvtDeviceAdd(__int64 a1, __int64 a2)
{
  int v3; // eax
  int WdfDevice; // ebx
  __int64 v5; // rdi
  _QWORD *v6; // rcx
  _QWORD *v7; // rax
  __int64 v8; // rcx
  unsigned __int16 v10; // r9
  int v11; // [rsp+28h] [rbp-11h]
  int v12[2]; // [rsp+30h] [rbp-9h] BYREF
  int v13[2]; // [rsp+38h] [rbp-1h] BYREF
  int v14; // [rsp+40h] [rbp+7h] BYREF
  __int64 v15; // [rsp+48h] [rbp+Fh] BYREF
  _DWORD v16[4]; // [rsp+50h] [rbp+17h] BYREF
  __int64 v17; // [rsp+60h] [rbp+27h]
  char v18; // [rsp+68h] [rbp+2Fh]
  int v19; // [rsp+6Ch] [rbp+33h]
  char v20; // [rsp+70h] [rbp+37h]

  v17 = 0LL;
  v16[1] = 0;
  v16[0] = 48;
  v20 = 0;
  v19 = 16;
  v18 = 0;
  v16[2] = 1024;
  v16[3] = 200;
  imp_WppRecorderLogCreate(WPP_GLOBAL_Control, v16, v12);
  v3 = ((__int64 (__fastcall *)(void *, __int64))qword_1C00447C8)(WPP_MAIN_CB.Dpc.SystemArgument2, a2);
  WdfDevice = v3;
  if ( v3 < 0 )
  {
    v10 = 10;
    goto LABEL_18;
  }
  WdfDevice = Controller_CreateWdfDevice(a2, *(__int64 *)v12, v13, (unsigned int *)&v14);
  if ( WdfDevice >= 0 )
  {
    v3 = Controller_Create(*(__int64 *)v13, *(__int64 *)v12, v14, &v15);
    WdfDevice = v3;
    if ( v3 < 0 )
    {
      v10 = 11;
    }
    else
    {
      v5 = v15;
      v3 = IoControl_Create(*(__int64 *)v13, v15, (__int64 **)(v15 + 72));
      WdfDevice = v3;
      if ( v3 < 0 )
      {
        v10 = 12;
      }
      else
      {
        v3 = Register_Create(*(__int64 *)v13, v5, (__int64 **)(v5 + 80));
        WdfDevice = v3;
        if ( v3 < 0 )
        {
          v10 = 13;
        }
        else
        {
          v3 = Interrupter_Create(v13[0], v5, (_QWORD *)(v5 + 96));
          WdfDevice = v3;
          if ( v3 < 0 )
          {
            v10 = 14;
          }
          else
          {
            v3 = DeviceSlot_Create(*(__int64 *)v13, v5, (__int64 **)(v5 + 104));
            WdfDevice = v3;
            if ( v3 < 0 )
            {
              v10 = 15;
            }
            else
            {
              v3 = Command_Create(*(_QWORD *)v13, v5, v5 + 112);
              WdfDevice = v3;
              if ( v3 < 0 )
              {
                v10 = 16;
              }
              else
              {
                v6 = (_QWORD *)(v5 + 136);
                if ( (*(_QWORD *)(v5 + 232) & 0x800000LL) != 0 )
                {
                  WdfDevice = IntelPptFilter_Create(*(_QWORD *)v13, v5, v5 + 136);
                }
                else
                {
                  *v6 = 0LL;
                  WdfDevice = 0;
                }
                if ( WdfDevice < 0 )
                {
                  v10 = 17;
                  v11 = WdfDevice;
                  goto LABEL_20;
                }
                v3 = RootHub_Create((__int64)v6, v5, (__int64 **)(v5 + 120));
                WdfDevice = v3;
                if ( v3 < 0 )
                {
                  v10 = 18;
                }
                else
                {
                  v3 = Wmi_Create(*(_QWORD *)v13, v5, v5 + 128);
                  WdfDevice = v3;
                  if ( v3 >= 0 )
                  {
                    v7 = (_QWORD *)(*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, void *))(WdfFunctions_01015
                                                                                                  + 1616))(
                                     WdfDriverGlobals,
                                     *(_QWORD *)v13,
                                     off_1C0043318);
                    *v7 = &g_UsbXhciTriageInfo;
                    v7[1] = v5;
                    Controller_ConfigureS0IdleSettings((__int64 *)v5);
                    Controller_ConfigureSxWakeSettings(v5);
                    KeInitializeSpinLock((PKSPIN_LOCK)(v5 + 32));
                    *(_QWORD *)(v5 + 48) = v5 + 40;
                    *(_QWORD *)(v5 + 40) = v5 + 40;
                    *(_DWORD *)(v5 + 56) = 0;
                    *(_DWORD *)(v5 + 288) = 5;
                    Controller_AddControllerToGlobalControllerList((_SINGLE_LIST_ENTRY *)v5);
                    Etw_ControllerCreate(v8, v5);
                    return (unsigned int)WdfDevice;
                  }
                  v10 = 19;
                }
              }
            }
          }
        }
      }
    }
LABEL_18:
    v11 = v3;
LABEL_20:
    WPP_RECORDER_SF_d(*(__int64 *)v12, 2u, 3u, v10, (__int64)&WPP_30b8102214563469b125fcb27e814bad_Traceguids, v11);
  }
  return (unsigned int)WdfDevice;
}
