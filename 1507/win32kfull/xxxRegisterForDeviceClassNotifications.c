/*
 * XREFs of xxxRegisterForDeviceClassNotifications @ 0x1C015A56C
 * Callers:
 *     AttachInputDevices @ 0x1C012EE0C (AttachInputDevices.c)
 *     RawInputThread @ 0x1C0143560 (RawInputThread.c)
 * Callees:
 *     RegisterCDROMNotify @ 0x1C0157174 (RegisterCDROMNotify.c)
 *     ?OpenMultiplePortDevice@@YAHK@Z @ 0x1C015A7C8 (-OpenMultiplePortDevice@@YAHK@Z.c)
 *     OpenMultiplePortDeviceViaRim @ 0x1C015A864 (OpenMultiplePortDeviceViaRim.c)
 */

__int64 xxxRegisterForDeviceClassNotifications()
{
  int v0; // ebx
  unsigned int v1; // edi
  __int64 v2; // rsi
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // r14
  unsigned int v6; // eax
  __int64 v7; // r8
  __int64 v8; // rdx
  __int64 v9; // rcx
  NTSTATUS v10; // eax
  _DWORD *v11; // rdx
  PDRIVER_NOTIFICATION_CALLBACK_ROUTINE CallbackRoutine; // [rsp+20h] [rbp-58h]
  int v14; // [rsp+48h] [rbp-30h]

  v0 = -1073741811;
  v1 = 0;
  v2 = 0LL;
  do
  {
    if ( !(unsigned int)OpenMultiplePortDevice(v1) && gpWin32kDriverObject )
    {
      UserSessionSwitchLeaveCrit(v4, v3);
      if ( *(_DWORD *)(v2 + aDeviceTemplate[0] + 96) )
      {
        if ( !v1 )
        {
          v0 = 0;
LABEL_11:
          EnterCrit(1LL);
          goto LABEL_12;
        }
        v5 = 71LL * v1;
        v6 = DeviceTypeToRimInputType(v1);
        LOBYTE(v14) = 0;
        v0 = RIMRegisterForInput(
               v6,
               0LL,
               gpWin32kDriverObject,
               *(_QWORD *)(v2 + aDeviceTemplate[0] + 120),
               *(_QWORD *)(v2 + aDeviceTemplate[0] + 200),
               0LL,
               0,
               0LL,
               Win32kRIMDevChangeCallback,
               v14,
               &aDeviceTemplate[v5 + 13]);
        if ( v0 < 0 )
          goto LABEL_11;
        LOBYTE(v7) = 1;
        RawInputManagerObjectResolveHandle(
          *(_QWORD *)(v2 + aDeviceTemplate[0] + 104),
          3LL,
          v7,
          &aDeviceTemplate[v5 + 14]);
        EnterCrit(1LL);
        OpenMultiplePortDeviceViaRim(*(_QWORD *)(v2 + aDeviceTemplate[0] + 104), v1);
        UserSessionSwitchLeaveCrit(v9, v8);
        *(_DWORD *)(v2 + aDeviceTemplate[0] + 452) = 64;
        LOBYTE(CallbackRoutine) = 0;
        v10 = RIMReadInput(
                *(_QWORD *)(v2 + aDeviceTemplate[0] + 104),
                &aDeviceTemplate[v5 + 62],
                *(unsigned int *)(v2 + aDeviceTemplate[0] + 452),
                *(_QWORD *)(v2 + aDeviceTemplate[0] + 160),
                CallbackRoutine,
                &aDeviceTemplate[v5 + 59],
                &aDeviceTemplate[v5 + 56],
                &aDeviceTemplate[v5 + 57]);
      }
      else
      {
        v10 = IoRegisterPlugPlayNotification(
                EventCategoryDeviceInterfaceChange,
                1u,
                *(PVOID *)(v2 + aDeviceTemplate[0] + 8),
                gpWin32kDriverObject,
                DeviceClassNotify,
                (PVOID)(int)v1,
                &aDeviceClassNotificationEntry[v1]);
      }
      v0 = v10;
      goto LABEL_11;
    }
LABEL_12:
    ++v1;
    v2 += 568LL;
  }
  while ( v1 <= 2 );
  UserSessionSwitchLeaveCrit(v4, v3);
  v11 = (_DWORD *)gbFirstConnectionDone;
  if ( !gbFirstConnectionDone && gpWin32kDriverObject )
  {
    if ( !gProtocolType )
    {
      RegisterCDROMNotify();
      v11 = (_DWORD *)gbFirstConnectionDone;
    }
    *v11 = 1;
  }
  EnterCrit(1LL);
  return (unsigned int)v0;
}
