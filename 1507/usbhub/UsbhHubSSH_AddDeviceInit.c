/*
 * XREFs of UsbhHubSSH_AddDeviceInit @ 0x1C0026A40
 * Callers:
 *     <none>
 * Callees:
 *     Log @ 0x1C0014B50 (Log.c)
 *     FdoExt @ 0x1C0015060 (FdoExt.c)
 *     WPP_RECORDER_SF_ @ 0x1C003CDB0 (WPP_RECORDER_SF_.c)
 */

void __fastcall UsbhHubSSH_AddDeviceInit(__int64 a1, __int64 a2)
{
  __int64 v4; // rdx
  __int64 v5; // r8
  __int64 v6; // r9
  EVENT_TYPE v7; // esi
  _DWORD *v8; // rbx
  __int64 v9; // r9
  __int64 v10; // r10

  Log(a1, 0x10000, 1936933220, 0LL, a2);
  v7 = v6 + 1;
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      0,
      v7,
      17,
      (__int64)&WPP_ef9c0e9779e9088dbdd2819f04244fda_Traceguids);
  v8 = FdoExt(*(_QWORD *)(a2 + 8), v4, v5, v6);
  *((_QWORD *)v8 + 389) = v8 + 776;
  *((_QWORD *)v8 + 388) = v8 + 776;
  KeInitializeEvent((PRKEVENT)v8 + 139, v7, v7);
  KeInitializeEvent((PRKEVENT)v8 + 140, v7, v7);
  Log(a1, 0x2000, 1768843604, (__int64)(v8 + 800), (__int64)UsbhHubSSH_Timer);
  *(_QWORD *)v9 = 1332899156LL;
  *(_QWORD *)(v9 + 48) = v10;
  *(_DWORD *)(v9 + 8) = 0;
  *(_DWORD *)(v9 + 72) = 1397966964;
  KeInitializeSemaphore((PRKSEMAPHORE)(v8 + 782), v7, v7);
  KeInitializeSemaphore((PRKSEMAPHORE)(v8 + 790), v7, v7);
  KeInitializeEvent((PRKEVENT)v8 + 143, NotificationEvent, v7);
  KeInitializeEvent((PRKEVENT)v8 + 141, NotificationEvent, v7);
  v8[820] = v7;
  v8[781] = v7;
}
