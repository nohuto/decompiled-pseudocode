/*
 * XREFs of Controller_WdfEvtDeviceAdd @ 0x1C00487D0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C0006B30 (WPP_RECORDER_SF_d.c)
 *     Etw_ControllerCreate @ 0x1C0008168 (Etw_ControllerCreate.c)
 *     Controller_AddControllerToGlobalControllerList @ 0x1C00081A0 (Controller_AddControllerToGlobalControllerList.c)
 *     __security_check_cookie @ 0x1C0010810 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0010C80 (_guard_dispatch_icall_nop.c)
 *     Controller_CreateWdfDevice @ 0x1C0048040 (Controller_CreateWdfDevice.c)
 *     Command_Create @ 0x1C00485F8 (Command_Create.c)
 *     Controller_ConfigureSxWakeSettings @ 0x1C0048A14 (Controller_ConfigureSxWakeSettings.c)
 *     Wmi_Create @ 0x1C0048AA0 (Wmi_Create.c)
 *     Interrupter_Create @ 0x1C0048E98 (Interrupter_Create.c)
 *     RootHub_Create @ 0x1C00493FC (RootHub_Create.c)
 *     Controller_ConfigureS0IdleSettings @ 0x1C0049DBC (Controller_ConfigureS0IdleSettings.c)
 *     Register_Create @ 0x1C004A83C (Register_Create.c)
 *     IoControl_Create @ 0x1C004A948 (IoControl_Create.c)
 *     DeviceSlot_Create @ 0x1C004AA84 (DeviceSlot_Create.c)
 *     Controller_Create @ 0x1C004BE90 (Controller_Create.c)
 *     IntelPptFilter_Create @ 0x1C00527F0 (IntelPptFilter_Create.c)
 */

__int64 __fastcall Controller_WdfEvtDeviceAdd(__int64 a1, __int64 a2)
{
  int v3; // eax
  int v4; // ebx
  __int64 v5; // rdi
  _QWORD *v6; // rcx
  _QWORD *v7; // rax
  __int64 v8; // rcx
  unsigned __int16 v10; // r9
  int v11; // [rsp+28h] [rbp-11h]
  int v12[2]; // [rsp+30h] [rbp-9h] BYREF
  int v13[2]; // [rsp+38h] [rbp-1h] BYREF
  unsigned int v14; // [rsp+40h] [rbp+7h] BYREF
  __int64 v15; // [rsp+48h] [rbp+Fh]
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
  v3 = ((__int64 (__fastcall *)(void *, __int64))qword_1C00427E8)(WPP_MAIN_CB.Dpc.DpcData, a2);
  v4 = v3;
  if ( v3 < 0 )
  {
    v10 = 10;
    goto LABEL_18;
  }
  v4 = Controller_CreateWdfDevice(a2, *(__int64 *)v12, v13, &v14);
  if ( v4 >= 0 )
  {
    v3 = Controller_Create(v13[0], v12[0]);
    v4 = v3;
    if ( v3 < 0 )
    {
      v10 = 11;
    }
    else
    {
      v5 = v15;
      v3 = IoControl_Create(*(_QWORD *)v13, v15, v15 + 72);
      v4 = v3;
      if ( v3 < 0 )
      {
        v10 = 12;
      }
      else
      {
        v3 = Register_Create(*(_QWORD *)v13, v5, v5 + 80);
        v4 = v3;
        if ( v3 < 0 )
        {
          v10 = 13;
        }
        else
        {
          v3 = Interrupter_Create(*(_QWORD *)v13, v5, v5 + 96);
          v4 = v3;
          if ( v3 < 0 )
          {
            v10 = 14;
          }
          else
          {
            v3 = DeviceSlot_Create(*(_QWORD *)v13, v5, v5 + 104);
            v4 = v3;
            if ( v3 < 0 )
            {
              v10 = 15;
            }
            else
            {
              v3 = Command_Create(*(__int64 *)v13, v5, (__int64 *)(v5 + 112));
              v4 = v3;
              if ( v3 < 0 )
              {
                v10 = 16;
              }
              else
              {
                v6 = (_QWORD *)(v5 + 136);
                if ( (*(_QWORD *)(v5 + 232) & 0x800000LL) != 0 )
                {
                  v4 = IntelPptFilter_Create(*(_QWORD *)v13, v5, v5 + 136);
                }
                else
                {
                  *v6 = 0LL;
                  v4 = 0;
                }
                if ( v4 < 0 )
                {
                  v10 = 17;
                  v11 = v4;
                  goto LABEL_20;
                }
                v3 = RootHub_Create(v6, v5, v5 + 120);
                v4 = v3;
                if ( v3 < 0 )
                {
                  v10 = 18;
                }
                else
                {
                  v3 = Wmi_Create(*(_QWORD *)v13, v5, v5 + 128);
                  v4 = v3;
                  if ( v3 >= 0 )
                  {
                    v7 = (_QWORD *)(*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, void *))(WdfFunctions_01015
                                                                                                  + 1616))(
                                     WdfDriverGlobals,
                                     *(_QWORD *)v13,
                                     off_1C00412A0);
                    *v7 = &g_UsbXhciTriageInfo;
                    v7[1] = v5;
                    Controller_ConfigureS0IdleSettings(v5);
                    Controller_ConfigureSxWakeSettings(v5);
                    KeInitializeSpinLock((PKSPIN_LOCK)(v5 + 32));
                    *(_QWORD *)(v5 + 48) = v5 + 40;
                    *(_QWORD *)(v5 + 40) = v5 + 40;
                    *(_DWORD *)(v5 + 56) = 0;
                    *(_DWORD *)(v5 + 280) = 5;
                    Controller_AddControllerToGlobalControllerList(v5);
                    Etw_ControllerCreate(v8, v5);
                    return (unsigned int)v4;
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
    WPP_RECORDER_SF_d(*(__int64 *)v12, 2u, 3u, v10, (__int64)&WPP_a6e1c58309a3d9966a339d413262311d_Traceguids, v11);
  }
  return (unsigned int)v4;
}
