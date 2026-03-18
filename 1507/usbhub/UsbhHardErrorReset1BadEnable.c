/*
 * XREFs of UsbhHardErrorReset1BadEnable @ 0x1C0050610
 * Callers:
 *     <none>
 * Callees:
 *     UsbhReleaseEnumBusLockEx @ 0x1C000B82C (UsbhReleaseEnumBusLockEx.c)
 *     Log @ 0x1C0014B50 (Log.c)
 *     FdoExt @ 0x1C0015060 (FdoExt.c)
 *     UsbhCancelResetTimeout @ 0x1C00185C8 (UsbhCancelResetTimeout.c)
 *     UsbhEtwLogHubIrpEvent @ 0x1C001B540 (UsbhEtwLogHubIrpEvent.c)
 *     WPP_RECORDER_SF_d @ 0x1C00404E8 (WPP_RECORDER_SF_d.c)
 *     UsbhAssertBusLock @ 0x1C0042914 (UsbhAssertBusLock.c)
 *     UsbhException @ 0x1C004ECD0 (UsbhException.c)
 */

__int64 __fastcall UsbhHardErrorReset1BadEnable(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  _DWORD *v6; // rsi
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // r9
  int v11; // [rsp+28h] [rbp-30h]

  v6 = FdoExt(a1, a2, a3, a4);
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    v11 = *(unsigned __int16 *)(a2 + 4);
    WPP_RECORDER_SF_d(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      0,
      1u,
      0x16u,
      (__int64)&WPP_cc37896b0a9d7b8193ac5507915e85d0_Traceguids,
      v11);
  }
  Log(a1, 1024, 1883391045, a2, 0LL);
  UsbhCancelResetTimeout(a1, a2, 0);
  if ( v6[768] == *(unsigned __int16 *)(a2 + 4) )
  {
    UsbhAssertBusLock(a1, v7, v8, v9);
    UsbhReleaseEnumBusLockEx(a1, *(_QWORD *)(a2 + 376), *(_WORD *)(a2 + 4));
  }
  UsbhEtwLogHubIrpEvent(a1, 0LL, 0LL, &USBHUB_ETW_EVENT_HUB_ENUM_RESET_BAD_ENABLE);
  UsbhException(a1, *(unsigned __int16 *)(a2 + 4), 62LL, (const void *)a2, 0xB70u, -1, -1, usbfile_busfunc_c, 1061, 0);
  return 3LL;
}
