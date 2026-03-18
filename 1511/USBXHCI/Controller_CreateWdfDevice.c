/*
 * XREFs of Controller_CreateWdfDevice @ 0x1C0048040
 * Callers:
 *     Controller_WdfEvtDeviceAdd @ 0x1C00487D0 (Controller_WdfEvtDeviceAdd.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C0006B30 (WPP_RECORDER_SF_d.c)
 *     RtlUnicodeStringPrintf @ 0x1C0007FF0 (RtlUnicodeStringPrintf.c)
 *     WPP_RECORDER_SF_S @ 0x1C0008090 (WPP_RECORDER_SF_S.c)
 *     __security_check_cookie @ 0x1C0010810 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0010C80 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0011000 (memset.c)
 */

__int64 __fastcall Controller_CreateWdfDevice(__int64 a1, __int64 a2, _QWORD *a3, unsigned int *a4)
{
  unsigned int v8; // esi
  __int64 v9; // r9
  int v10; // eax
  __int64 v11; // r9
  NTSTATUS v12; // ebx
  int v13; // eax
  int v14; // eax
  int v15; // eax
  int v16; // eax
  __int64 v17; // rax
  PWDF_DRIVER_GLOBALS v18; // rcx
  __int64 v19; // r9
  __int64 v20; // r9
  __int64 v21; // r9
  __int64 v22; // r9
  NTSTATUS v23; // eax
  int v24; // eax
  __int64 v25; // r8
  __int64 v26; // rdx
  int v27; // eax
  unsigned __int16 v29; // r9
  char *v30; // [rsp+20h] [rbp-E0h]
  __int64 v31; // [rsp+28h] [rbp-D8h]
  int v32; // [rsp+28h] [rbp-D8h]
  char v33; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v34; // [rsp+48h] [rbp-B8h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+50h] [rbp-B0h] BYREF
  struct _UNICODE_STRING v36; // [rsp+60h] [rbp-A0h] BYREF
  _QWORD v37[4]; // [rsp+70h] [rbp-90h] BYREF
  _QWORD v38[8]; // [rsp+90h] [rbp-70h] BYREF
  _QWORD v39[7]; // [rsp+D0h] [rbp-30h] BYREF
  _QWORD v40[7]; // [rsp+108h] [rbp+8h] BYREF
  _QWORD v41[18]; // [rsp+140h] [rbp+40h] BYREF
  GUID v42; // [rsp+1D0h] [rbp+D0h] BYREF
  __int64 v43; // [rsp+1E0h] [rbp+E0h]
  char v44; // [rsp+1F0h] [rbp+F0h] BYREF
  char v45; // [rsp+240h] [rbp+140h] BYREF

  v34 = a1;
  DestinationString.Buffer = (unsigned __int16 *)&v45;
  *(_DWORD *)&DestinationString.Length = 5242880;
  v36.Buffer = (unsigned __int16 *)&v44;
  *(_DWORD *)&v36.Length = 5242880;
  v8 = 0;
  memset(v41, 0, sizeof(v41));
  v41[5] = Controller_WdfEvtDevicePrepareHardware;
  LODWORD(v41[0]) = 144;
  v41[6] = Controller_WdfEvtDeviceReleaseHardware;
  v41[15] = Controller_WdfEvtDeviceUsageNotification;
  v41[1] = Controller_WdfEvtDeviceD0Entry;
  v41[2] = Controller_WdfEvtDeviceD0EntryPostInterruptsEnabled;
  v41[4] = Controller_WdfEvtDeviceD0ExitPreInterruptsDisabled;
  v41[3] = Controller_WdfEvtDeviceD0Exit;
  v41[9] = Controller_WdfEvtDeviceSelfManagedIoInit;
  v41[7] = Controller_WdfEvtDeviceSelfManagedIoCleanup;
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD *))(WdfFunctions_01015 + 440))(WdfDriverGlobals, a1, v41);
  memset(v38, 0, sizeof(v38));
  v38[1] = Controller_WdfEvtDeviceArmWakeFromS0;
  v38[2] = Controller_WdfEvtDeviceDisarmWakeFromS0;
  v38[3] = Controller_WdfEvtDeviceWakeFromS0Triggered;
  v38[4] = Controller_WdfEvtDeviceArmWakeFromSx;
  v38[5] = Controller_WdfEvtDeviceDisarmWakeFromSx;
  LODWORD(v38[0]) = 64;
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD *))(WdfFunctions_01015 + 448))(
    WdfDriverGlobals,
    v34,
    v38);
  memset(v37, 0, sizeof(v37));
  v37[2] = Controller_WdfEvtDeviceFilterRemoveResourceRequirements;
  v37[1] = Controller_WdfEvtDeviceFilterAddResourceRequirements;
  v37[3] = Controller_WdfEvtDeviceRemoveAddedResources;
  LODWORD(v37[0]) = 32;
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD *))(WdfFunctions_01015 + 1024))(
    WdfDriverGlobals,
    v34,
    v37);
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, __int64))(WdfFunctions_01015 + 3440))(
    WdfDriverGlobals,
    v34,
    2LL);
  v33 = 2;
  LOBYTE(v9) = 22;
  v30 = &v33;
  v10 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, __int64 (__fastcall *)(__int64, __int64), __int64))(WdfFunctions_01015 + 584))(
          WdfDriverGlobals,
          v34,
          Controller_WdfEvtPreprocessSetPowerIrp,
          v9);
  v12 = v10;
  if ( v10 < 0 )
  {
    v29 = 33;
    v32 = v10;
LABEL_18:
    WPP_RECORDER_SF_d(a2, 2u, 3u, v29, (__int64)&WPP_a6e1c58309a3d9966a339d413262311d_Traceguids, v32);
    imp_WppRecorderLogDelete(WPP_GLOBAL_Control, a2);
    goto LABEL_13;
  }
  if ( *(_BYTE *)(WPP_MAIN_CB.Dpc.ProcessorHistory + 28) )
  {
    LOBYTE(v11) = 15;
    LODWORD(v30) = 0;
    v13 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, __int64 (__fastcall *)(__int64, IRP *), __int64))(WdfFunctions_01015 + 584))(
            WdfDriverGlobals,
            v34,
            Controller_EvtIoInternalDeviceControl,
            v11);
    v12 = v13;
    if ( v13 < 0 )
    {
      v29 = 34;
      v32 = v13;
      goto LABEL_18;
    }
  }
  memset(v39, 0, sizeof(v39));
  v39[6] = off_1C00412A0;
  LODWORD(v39[0]) = 56;
  v39[1] = Controller_WdfEvtCleanupCallback;
  v39[3] = 0x100000001LL;
  v12 = RtlUnicodeStringPrintf(&DestinationString, L"%ws%d", L"\\Device\\USBFDO-", 0LL);
  if ( v12 < 0 )
  {
LABEL_17:
    v29 = 35;
    v32 = v12;
    goto LABEL_18;
  }
  while ( 1 )
  {
    v14 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, struct _UNICODE_STRING *))(WdfFunctions_01015 + 536))(
            WdfDriverGlobals,
            v34,
            &DestinationString);
    v12 = v14;
    if ( v14 < 0 )
    {
      v29 = 36;
      v32 = v14;
      goto LABEL_18;
    }
    v15 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, const UNICODE_STRING *))(WdfFunctions_01015 + 544))(
            WdfDriverGlobals,
            v34,
            &SDDL_DEVOBJ_SYS_ALL_ADM_RWX_WORLD_RW_RES_R);
    v12 = v15;
    if ( v15 < 0 )
    {
      v29 = 37;
      v32 = v15;
      goto LABEL_18;
    }
    memset(v40, 0, sizeof(v40));
    v40[6] = off_1C0041098;
    LODWORD(v40[0]) = 56;
    v40[3] = 0x100000001LL;
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD *))(WdfFunctions_01015 + 576))(
      WdfDriverGlobals,
      v34,
      v40);
    v16 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64 *, _QWORD *, _QWORD *))(WdfFunctions_01015 + 600))(
            WdfDriverGlobals,
            &v34,
            v39,
            a3);
    v12 = v16;
    if ( v16 != -1073741771 )
      break;
    WPP_RECORDER_SF_d(a2, 3u, 3u, 0x26u, (__int64)&WPP_a6e1c58309a3d9966a339d413262311d_Traceguids);
    v12 = RtlUnicodeStringPrintf(&DestinationString, L"%ws%d", L"\\Device\\USBFDO-", ++v8);
    if ( v12 < 0 )
      goto LABEL_17;
  }
  if ( v16 < 0 )
  {
    v29 = 39;
    v32 = v16;
    goto LABEL_18;
  }
  v17 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, void *))(WdfFunctions_01015 + 1616))(
          WdfDriverGlobals,
          *a3,
          off_1C00412A0);
  v18 = WdfDriverGlobals;
  LOBYTE(v19) = 1;
  *(_QWORD *)(v17 + 16) = a2;
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, __int64, __int64))(WdfFunctions_01015 + 392))(v18, *a3, 1LL, v19);
  LOBYTE(v20) = 1;
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, __int64, __int64))(WdfFunctions_01015 + 392))(
    WdfDriverGlobals,
    *a3,
    2LL,
    v20);
  LOBYTE(v21) = 1;
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, __int64, __int64))(WdfFunctions_01015 + 392))(
    WdfDriverGlobals,
    *a3,
    3LL,
    v21);
  LOBYTE(v22) = 1;
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, __int64, __int64))(WdfFunctions_01015 + 392))(
    WdfDriverGlobals,
    *a3,
    4LL,
    v22);
  v23 = RtlUnicodeStringPrintf(&v36, L"%ws%d", L"\\DosDevices\\HCD", v8);
  v12 = v23;
  if ( v23 < 0 )
  {
    WPP_RECORDER_SF_d(a2, 2u, 3u, 0x28u, (__int64)&WPP_a6e1c58309a3d9966a339d413262311d_Traceguids, v23);
  }
  else
  {
    v24 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, struct _UNICODE_STRING *))(WdfFunctions_01015 + 640))(
            WdfDriverGlobals,
            *a3,
            &v36);
    v12 = v24;
    if ( v24 < 0 )
    {
      WPP_RECORDER_SF_d(a2, 2u, 3u, 0x29u, (__int64)&WPP_a6e1c58309a3d9966a339d413262311d_Traceguids, v24);
    }
    else
    {
      WPP_RECORDER_SF_S(a2, 4u, v25, 0x2Au, (int)v30, v36.Buffer);
      v26 = *a3;
      v42 = GUID_BUS_TYPE_USB;
      v43 = 15LL;
      (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, GUID *))(WdfFunctions_01015 + 680))(
        WdfDriverGlobals,
        v26,
        &v42);
      v27 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, GUID *, _QWORD))(WdfFunctions_01015 + 616))(
              WdfDriverGlobals,
              *a3,
              &GUID_DEVINTERFACE_USB_HOST_CONTROLLER,
              0LL);
      v12 = v27;
      if ( v27 < 0 )
      {
        LODWORD(v31) = v27;
        WPP_RECORDER_SF_d(a2, 2u, 3u, 0x2Bu, (__int64)&WPP_a6e1c58309a3d9966a339d413262311d_Traceguids, v31);
      }
    }
  }
LABEL_13:
  *a4 = v8;
  return (unsigned int)v12;
}
