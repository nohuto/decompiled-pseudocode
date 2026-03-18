/*
 * XREFs of Controller_CreateWdfDevice @ 0x1C004B000
 * Callers:
 *     Controller_WdfEvtDeviceAdd @ 0x1C0047200 (Controller_WdfEvtDeviceAdd.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C00038C0 (WPP_RECORDER_SF_d.c)
 *     RtlUnicodeStringPrintf @ 0x1C0006C70 (RtlUnicodeStringPrintf.c)
 *     WPP_RECORDER_SF_S @ 0x1C0006D10 (WPP_RECORDER_SF_S.c)
 *     __security_check_cookie @ 0x1C0007B40 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0007C30 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0007F80 (memset.c)
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
  __int64 v18; // r9
  __int64 v19; // r9
  __int64 v20; // r9
  __int64 v21; // r9
  NTSTATUS v22; // eax
  int v23; // eax
  __int64 v24; // r8
  __int64 v25; // rdx
  int v26; // eax
  unsigned __int16 v28; // r9
  char *v29; // [rsp+20h] [rbp-E0h]
  __int64 v30; // [rsp+28h] [rbp-D8h]
  int v31; // [rsp+28h] [rbp-D8h]
  char v32; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v33; // [rsp+48h] [rbp-B8h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+50h] [rbp-B0h] BYREF
  struct _UNICODE_STRING v35; // [rsp+60h] [rbp-A0h] BYREF
  _QWORD v36[4]; // [rsp+70h] [rbp-90h] BYREF
  _QWORD v37[8]; // [rsp+90h] [rbp-70h] BYREF
  _QWORD v38[7]; // [rsp+D0h] [rbp-30h] BYREF
  _QWORD v39[7]; // [rsp+108h] [rbp+8h] BYREF
  _QWORD v40[18]; // [rsp+140h] [rbp+40h] BYREF
  GUID v41; // [rsp+1D0h] [rbp+D0h] BYREF
  __int64 v42; // [rsp+1E0h] [rbp+E0h]
  char v43; // [rsp+1F0h] [rbp+F0h] BYREF
  char v44; // [rsp+240h] [rbp+140h] BYREF

  v33 = a1;
  DestinationString.Buffer = (unsigned __int16 *)&v44;
  *(_DWORD *)&DestinationString.Length = 5242880;
  v35.Buffer = (unsigned __int16 *)&v43;
  *(_DWORD *)&v35.Length = 5242880;
  v8 = 0;
  memset(v40, 0, sizeof(v40));
  v40[5] = Controller_WdfEvtDevicePrepareHardware;
  LODWORD(v40[0]) = 144;
  v40[6] = Controller_WdfEvtDeviceReleaseHardware;
  v40[15] = Controller_WdfEvtDeviceUsageNotification;
  v40[1] = Controller_WdfEvtDeviceD0Entry;
  v40[2] = Controller_WdfEvtDeviceD0EntryPostInterruptsEnabled;
  v40[4] = Controller_WdfEvtDeviceD0ExitPreInterruptsDisabled;
  v40[3] = Controller_WdfEvtDeviceD0Exit;
  v40[9] = Controller_WdfEvtDeviceSelfManagedIoInit;
  v40[7] = Controller_WdfEvtDeviceSelfManagedIoCleanup;
  (*(void (__fastcall **)(_LIST_ENTRY *, __int64, _QWORD *))(WdfFunctions_01015 + 440))(
    WPP_MAIN_CB.DeviceLock.Header.WaitListHead.Blink,
    a1,
    v40);
  memset(v37, 0, sizeof(v37));
  v37[1] = Controller_WdfEvtDeviceArmWakeFromS0;
  v37[2] = Controller_WdfEvtDeviceDisarmWakeFromS0;
  v37[3] = Controller_WdfEvtDeviceWakeFromS0Triggered;
  v37[4] = Controller_WdfEvtDeviceArmWakeFromSx;
  v37[5] = Controller_WdfEvtDeviceDisarmWakeFromSx;
  LODWORD(v37[0]) = 64;
  (*(void (__fastcall **)(_LIST_ENTRY *, __int64, _QWORD *))(WdfFunctions_01015 + 448))(
    WPP_MAIN_CB.DeviceLock.Header.WaitListHead.Blink,
    v33,
    v37);
  memset(v36, 0, sizeof(v36));
  v36[2] = Controller_WdfEvtDeviceFilterRemoveResourceRequirements;
  v36[1] = Controller_WdfEvtDeviceFilterAddResourceRequirements;
  v36[3] = Controller_WdfEvtDeviceRemoveAddedResources;
  LODWORD(v36[0]) = 32;
  (*(void (__fastcall **)(_LIST_ENTRY *, __int64, _QWORD *))(WdfFunctions_01015 + 1024))(
    WPP_MAIN_CB.DeviceLock.Header.WaitListHead.Blink,
    v33,
    v36);
  (*(void (__fastcall **)(_LIST_ENTRY *, __int64, __int64))(WdfFunctions_01015 + 3440))(
    WPP_MAIN_CB.DeviceLock.Header.WaitListHead.Blink,
    v33,
    2LL);
  v32 = 2;
  LOBYTE(v9) = 22;
  v29 = &v32;
  v10 = (*(__int64 (__fastcall **)(_LIST_ENTRY *, __int64, __int64 (__fastcall *)(__int64, __int64), __int64))(WdfFunctions_01015 + 584))(
          WPP_MAIN_CB.DeviceLock.Header.WaitListHead.Blink,
          v33,
          Controller_WdfEvtPreprocessSetPowerIrp,
          v9);
  v12 = v10;
  if ( v10 < 0 )
  {
    v28 = 33;
    v31 = v10;
LABEL_18:
    WPP_RECORDER_SF_d(a2, 2u, 3u, v28, (__int64)&WPP_71d031db04c83962e2b4b0195700cb23_Traceguids, v31);
    imp_WppRecorderLogDelete(WPP_GLOBAL_Control, a2);
    goto LABEL_13;
  }
  if ( *(_BYTE *)(WPP_MAIN_CB.Dpc.ProcessorHistory + 28) )
  {
    LOBYTE(v11) = 15;
    LODWORD(v29) = 0;
    v13 = (*(__int64 (__fastcall **)(_LIST_ENTRY *, __int64, __int64 (__fastcall *)(__int64, IRP *), __int64))(WdfFunctions_01015 + 584))(
            WPP_MAIN_CB.DeviceLock.Header.WaitListHead.Blink,
            v33,
            Controller_EvtIoInternalDeviceControl,
            v11);
    v12 = v13;
    if ( v13 < 0 )
    {
      v28 = 34;
      v31 = v13;
      goto LABEL_18;
    }
  }
  memset(v38, 0, sizeof(v38));
  v38[6] = off_1C0040270;
  LODWORD(v38[0]) = 56;
  v38[1] = Controller_WdfEvtCleanupCallback;
  v38[3] = 0x100000001LL;
  v12 = RtlUnicodeStringPrintf(&DestinationString, L"%ws%d", L"\\Device\\USBFDO-", 0LL);
  if ( v12 < 0 )
  {
LABEL_17:
    v28 = 35;
    v31 = v12;
    goto LABEL_18;
  }
  while ( 1 )
  {
    v14 = (*(__int64 (__fastcall **)(_LIST_ENTRY *, __int64, struct _UNICODE_STRING *))(WdfFunctions_01015 + 536))(
            WPP_MAIN_CB.DeviceLock.Header.WaitListHead.Blink,
            v33,
            &DestinationString);
    v12 = v14;
    if ( v14 < 0 )
    {
      v28 = 36;
      v31 = v14;
      goto LABEL_18;
    }
    v15 = (*(__int64 (__fastcall **)(_LIST_ENTRY *, __int64, const UNICODE_STRING *))(WdfFunctions_01015 + 544))(
            WPP_MAIN_CB.DeviceLock.Header.WaitListHead.Blink,
            v33,
            &SDDL_DEVOBJ_SYS_ALL_ADM_RWX_WORLD_RW_RES_R);
    v12 = v15;
    if ( v15 < 0 )
    {
      v28 = 37;
      v31 = v15;
      goto LABEL_18;
    }
    memset(v39, 0, sizeof(v39));
    v39[6] = off_1C0040068;
    LODWORD(v39[0]) = 56;
    v39[3] = 0x100000001LL;
    (*(void (__fastcall **)(_LIST_ENTRY *, __int64, _QWORD *))(WdfFunctions_01015 + 576))(
      WPP_MAIN_CB.DeviceLock.Header.WaitListHead.Blink,
      v33,
      v39);
    v16 = (*(__int64 (__fastcall **)(_LIST_ENTRY *, __int64 *, _QWORD *, _QWORD *))(WdfFunctions_01015 + 600))(
            WPP_MAIN_CB.DeviceLock.Header.WaitListHead.Blink,
            &v33,
            v38,
            a3);
    v12 = v16;
    if ( v16 != -1073741771 )
      break;
    WPP_RECORDER_SF_d(a2, 3u, 3u, 0x26u, (__int64)&WPP_71d031db04c83962e2b4b0195700cb23_Traceguids);
    v12 = RtlUnicodeStringPrintf(&DestinationString, L"%ws%d", L"\\Device\\USBFDO-", ++v8);
    if ( v12 < 0 )
      goto LABEL_17;
  }
  if ( v16 < 0 )
  {
    v28 = 39;
    v31 = v16;
    goto LABEL_18;
  }
  v17 = (*(__int64 (__fastcall **)(_LIST_ENTRY *, _QWORD, void *))(WdfFunctions_01015 + 1616))(
          WPP_MAIN_CB.DeviceLock.Header.WaitListHead.Blink,
          *a3,
          off_1C0040270);
  LOBYTE(v18) = 1;
  *(_QWORD *)(v17 + 16) = a2;
  (*(void (__fastcall **)(_LIST_ENTRY *, _QWORD, __int64, __int64))(WdfFunctions_01015 + 392))(
    WPP_MAIN_CB.DeviceLock.Header.WaitListHead.Blink,
    *a3,
    1LL,
    v18);
  LOBYTE(v19) = 1;
  (*(void (__fastcall **)(_LIST_ENTRY *, _QWORD, __int64, __int64))(WdfFunctions_01015 + 392))(
    WPP_MAIN_CB.DeviceLock.Header.WaitListHead.Blink,
    *a3,
    2LL,
    v19);
  LOBYTE(v20) = 1;
  (*(void (__fastcall **)(_LIST_ENTRY *, _QWORD, __int64, __int64))(WdfFunctions_01015 + 392))(
    WPP_MAIN_CB.DeviceLock.Header.WaitListHead.Blink,
    *a3,
    3LL,
    v20);
  LOBYTE(v21) = 1;
  (*(void (__fastcall **)(_LIST_ENTRY *, _QWORD, __int64, __int64))(WdfFunctions_01015 + 392))(
    WPP_MAIN_CB.DeviceLock.Header.WaitListHead.Blink,
    *a3,
    4LL,
    v21);
  v22 = RtlUnicodeStringPrintf(&v35, L"%ws%d", L"\\DosDevices\\HCD", v8);
  v12 = v22;
  if ( v22 < 0 )
  {
    WPP_RECORDER_SF_d(a2, 2u, 3u, 0x28u, (__int64)&WPP_71d031db04c83962e2b4b0195700cb23_Traceguids, v22);
  }
  else
  {
    v23 = (*(__int64 (__fastcall **)(_LIST_ENTRY *, _QWORD, struct _UNICODE_STRING *))(WdfFunctions_01015 + 640))(
            WPP_MAIN_CB.DeviceLock.Header.WaitListHead.Blink,
            *a3,
            &v35);
    v12 = v23;
    if ( v23 < 0 )
    {
      WPP_RECORDER_SF_d(a2, 2u, 3u, 0x29u, (__int64)&WPP_71d031db04c83962e2b4b0195700cb23_Traceguids, v23);
    }
    else
    {
      WPP_RECORDER_SF_S(a2, 4u, v24, 0x2Au, (int)v29, v35.Buffer);
      v25 = *a3;
      v41 = GUID_BUS_TYPE_USB;
      v42 = 15LL;
      (*(void (__fastcall **)(_LIST_ENTRY *, __int64, GUID *))(WdfFunctions_01015 + 680))(
        WPP_MAIN_CB.DeviceLock.Header.WaitListHead.Blink,
        v25,
        &v41);
      v26 = (*(__int64 (__fastcall **)(_LIST_ENTRY *, _QWORD, GUID *, _QWORD))(WdfFunctions_01015 + 616))(
              WPP_MAIN_CB.DeviceLock.Header.WaitListHead.Blink,
              *a3,
              &GUID_DEVINTERFACE_USB_HOST_CONTROLLER,
              0LL);
      v12 = v26;
      if ( v26 < 0 )
      {
        LODWORD(v30) = v26;
        WPP_RECORDER_SF_d(a2, 2u, 3u, 0x2Bu, (__int64)&WPP_71d031db04c83962e2b4b0195700cb23_Traceguids, v30);
      }
    }
  }
LABEL_13:
  *a4 = v8;
  return (unsigned int)v12;
}
