/*
 * XREFs of Controller_WdfEvtDeviceAdd @ 0x1C004FFB0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C0006370 (WPP_RECORDER_SF_d.c)
 *     Etw_ControllerCreate @ 0x1C000A390 (Etw_ControllerCreate.c)
 *     Controller_AddControllerToGlobalControllerList @ 0x1C000A3D0 (Controller_AddControllerToGlobalControllerList.c)
 *     __security_check_cookie @ 0x1C00105E0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0010A80 (_guard_dispatch_icall_nop.c)
 *     Controller_CreateWdfDevice @ 0x1C004C050 (Controller_CreateWdfDevice.c)
 *     Interrupter_Create @ 0x1C004C820 (Interrupter_Create.c)
 *     Controller_Create @ 0x1C004CAB0 (Controller_Create.c)
 *     DeviceSlot_Create @ 0x1C004E2C0 (DeviceSlot_Create.c)
 *     Controller_ConfigureS0IdleSettings @ 0x1C004EB04 (Controller_ConfigureS0IdleSettings.c)
 *     Register_Create @ 0x1C004F794 (Register_Create.c)
 *     IoControl_Create @ 0x1C004F8A4 (IoControl_Create.c)
 *     RootHub_Create @ 0x1C004FDDC (RootHub_Create.c)
 *     Controller_ConfigureSxWakeSettings @ 0x1C0050218 (Controller_ConfigureSxWakeSettings.c)
 *     Wmi_Create @ 0x1C00502A8 (Wmi_Create.c)
 *     Command_Create @ 0x1C00503E4 (Command_Create.c)
 *     Controller_ExecuteDSM @ 0x1C0053000 (Controller_ExecuteDSM.c)
 *     IntelPptFilter_Create @ 0x1C00564D4 (IntelPptFilter_Create.c)
 */

__int64 __fastcall Controller_WdfEvtDeviceAdd(__int64 a1, __int64 a2)
{
  int v3; // eax
  int WdfDevice; // ebx
  int v5; // eax
  __int64 v6; // rdi
  int v7; // eax
  int v8; // eax
  int v9; // eax
  int v10; // eax
  int v11; // eax
  _QWORD *v12; // rcx
  int v13; // eax
  int v14; // eax
  _QWORD *v15; // rax
  __int64 v16; // rcx
  int v18; // [rsp+28h] [rbp-11h]
  int v19; // [rsp+28h] [rbp-11h]
  int v20; // [rsp+28h] [rbp-11h]
  int v21; // [rsp+28h] [rbp-11h]
  int v22; // [rsp+28h] [rbp-11h]
  int v23; // [rsp+28h] [rbp-11h]
  int v24; // [rsp+28h] [rbp-11h]
  int v25; // [rsp+28h] [rbp-11h]
  int v26; // [rsp+28h] [rbp-11h]
  int v27; // [rsp+28h] [rbp-11h]
  int v28[2]; // [rsp+30h] [rbp-9h] BYREF
  int v29[2]; // [rsp+38h] [rbp-1h] BYREF
  int v30; // [rsp+40h] [rbp+7h] BYREF
  __int64 v31; // [rsp+48h] [rbp+Fh] BYREF
  _DWORD v32[4]; // [rsp+50h] [rbp+17h] BYREF
  __int64 v33; // [rsp+60h] [rbp+27h]
  char v34; // [rsp+68h] [rbp+2Fh]
  int v35; // [rsp+6Ch] [rbp+33h]
  char v36; // [rsp+70h] [rbp+37h]

  v33 = 0LL;
  v32[1] = 0;
  v32[0] = 48;
  v36 = 0;
  v35 = 16;
  v34 = 0;
  v32[2] = 1024;
  v32[3] = 200;
  imp_WppRecorderLogCreate(WPP_GLOBAL_Control, v32, v28);
  v3 = ((__int64 (__fastcall *)(void *, __int64))qword_1C00467C8)(WPP_MAIN_CB.Dpc.SystemArgument2, a2);
  WdfDevice = v3;
  if ( v3 < 0 )
  {
    v18 = v3;
    WPP_RECORDER_SF_d(*(__int64 *)v28, 2u, 3u, 0xAu, (__int64)&WPP_701346eebafd3a8cb9c6116049697060_Traceguids, v18);
  }
  else
  {
    WdfDevice = Controller_CreateWdfDevice(a2, *(__int64 *)v28, v29, (unsigned int *)&v30);
    if ( WdfDevice >= 0 )
    {
      v5 = Controller_Create(*(__int64 *)v29, *(__int64 *)v28, v30, &v31);
      WdfDevice = v5;
      if ( v5 < 0 )
      {
        v19 = v5;
        WPP_RECORDER_SF_d(*(__int64 *)v28, 2u, 3u, 0xBu, (__int64)&WPP_701346eebafd3a8cb9c6116049697060_Traceguids, v19);
      }
      else
      {
        v6 = v31;
        v7 = IoControl_Create(*(__int64 *)v29, v31, (__int64 **)(v31 + 72));
        WdfDevice = v7;
        if ( v7 < 0 )
        {
          v20 = v7;
          WPP_RECORDER_SF_d(
            *(__int64 *)v28,
            2u,
            3u,
            0xCu,
            (__int64)&WPP_701346eebafd3a8cb9c6116049697060_Traceguids,
            v20);
        }
        else
        {
          v8 = Register_Create(*(__int64 *)v29, v6, (__int64 **)(v6 + 80));
          WdfDevice = v8;
          if ( v8 < 0 )
          {
            v21 = v8;
            WPP_RECORDER_SF_d(
              *(__int64 *)v28,
              2u,
              3u,
              0xDu,
              (__int64)&WPP_701346eebafd3a8cb9c6116049697060_Traceguids,
              v21);
          }
          else
          {
            v9 = Interrupter_Create(v29[0], v6, (_QWORD *)(v6 + 96));
            WdfDevice = v9;
            if ( v9 < 0 )
            {
              v22 = v9;
              WPP_RECORDER_SF_d(
                *(__int64 *)v28,
                2u,
                3u,
                0xEu,
                (__int64)&WPP_701346eebafd3a8cb9c6116049697060_Traceguids,
                v22);
            }
            else
            {
              v10 = DeviceSlot_Create(*(__int64 *)v29, v6, (__int64 **)(v6 + 104));
              WdfDevice = v10;
              if ( v10 < 0 )
              {
                v23 = v10;
                WPP_RECORDER_SF_d(
                  *(__int64 *)v28,
                  2u,
                  3u,
                  0xFu,
                  (__int64)&WPP_701346eebafd3a8cb9c6116049697060_Traceguids,
                  v23);
              }
              else
              {
                v11 = Command_Create(*(_QWORD *)v29, v6, v6 + 112);
                WdfDevice = v11;
                if ( v11 < 0 )
                {
                  v24 = v11;
                  WPP_RECORDER_SF_d(
                    *(__int64 *)v28,
                    2u,
                    3u,
                    0x10u,
                    (__int64)&WPP_701346eebafd3a8cb9c6116049697060_Traceguids,
                    v24);
                }
                else
                {
                  v12 = (_QWORD *)(v6 + 136);
                  if ( (*(_QWORD *)(v6 + 232) & 0x800000LL) != 0 )
                  {
                    WdfDevice = IntelPptFilter_Create(*(_QWORD *)v29, v6, v6 + 136);
                  }
                  else
                  {
                    *v12 = 0LL;
                    WdfDevice = 0;
                  }
                  if ( WdfDevice < 0 )
                  {
                    v25 = WdfDevice;
                    WPP_RECORDER_SF_d(
                      *(__int64 *)v28,
                      2u,
                      3u,
                      0x11u,
                      (__int64)&WPP_701346eebafd3a8cb9c6116049697060_Traceguids,
                      v25);
                  }
                  else
                  {
                    v13 = RootHub_Create((__int64)v12, v6, (__int64 **)(v6 + 120));
                    WdfDevice = v13;
                    if ( v13 < 0 )
                    {
                      v26 = v13;
                      WPP_RECORDER_SF_d(
                        *(__int64 *)v28,
                        2u,
                        3u,
                        0x12u,
                        (__int64)&WPP_701346eebafd3a8cb9c6116049697060_Traceguids,
                        v26);
                    }
                    else
                    {
                      v14 = Wmi_Create(*(_QWORD *)v29, v6, v6 + 128);
                      WdfDevice = v14;
                      if ( v14 < 0 )
                      {
                        v27 = v14;
                        WPP_RECORDER_SF_d(
                          *(__int64 *)v28,
                          2u,
                          3u,
                          0x13u,
                          (__int64)&WPP_701346eebafd3a8cb9c6116049697060_Traceguids,
                          v27);
                      }
                      else
                      {
                        v15 = (_QWORD *)(*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, void *))(WdfFunctions_01015 + 1616))(
                                          WdfDriverGlobals,
                                          *(_QWORD *)v29,
                                          off_1C0045318);
                        *v15 = &g_UsbXhciTriageInfo;
                        v15[1] = v6;
                        Controller_ConfigureS0IdleSettings((__int64 *)v6);
                        Controller_ConfigureSxWakeSettings(v6);
                        KeInitializeSpinLock((PKSPIN_LOCK)(v6 + 32));
                        *(_QWORD *)(v6 + 48) = v6 + 40;
                        *(_QWORD *)(v6 + 40) = v6 + 40;
                        *(_DWORD *)(v6 + 56) = 0;
                        *(_DWORD *)(v6 + 288) = 5;
                        Controller_AddControllerToGlobalControllerList((_SINGLE_LIST_ENTRY *)v6);
                        Etw_ControllerCreate(v16, v6);
                        if ( (_mm_srli_si128(*(__m128i *)(v6 + 232), 8).m128i_u8[0] & 1) != 0 )
                          Controller_ExecuteDSM(v6, &GUID_DSM_ENABLE_KBL_WORKAROUNDS, 1LL);
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  return (unsigned int)WdfDevice;
}
