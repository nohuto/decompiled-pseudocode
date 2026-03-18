/*
 * XREFs of UsbhReset1Debounce @ 0x1C0050D10
 * Callers:
 *     <none>
 * Callees:
 *     UsbhSignalSyncDeviceReset @ 0x1C0004650 (UsbhSignalSyncDeviceReset.c)
 *     UsbhReleaseEnumBusLockEx @ 0x1C000A8B0 (UsbhReleaseEnumBusLockEx.c)
 *     UsbhCancelResetTimeout @ 0x1C000FBE4 (UsbhCancelResetTimeout.c)
 *     Log @ 0x1C0013250 (Log.c)
 *     WPP_RECORDER_SF_d @ 0x1C0040704 (WPP_RECORDER_SF_d.c)
 *     UsbhPCE_QueueChange @ 0x1C0041068 (UsbhPCE_QueueChange.c)
 *     UsbhAssertBusLock @ 0x1C0042B30 (UsbhAssertBusLock.c)
 *     UsbhPortDisconnect @ 0x1C0050830 (UsbhPortDisconnect.c)
 */

__int64 __fastcall UsbhReset1Debounce(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v10; // [rsp+28h] [rbp-20h]
  int v11; // [rsp+28h] [rbp-20h]
  __int64 v12; // [rsp+58h] [rbp+10h]

  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    v11 = *(unsigned __int16 *)(a2 + 4);
    WPP_RECORDER_SF_d(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      0,
      1u,
      0x12u,
      (__int64)&WPP_cc37896b0a9d7b8193ac5507915e85d0_Traceguids,
      v11);
  }
  Log(a1, 1024, 1883393603, a2, 0LL);
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LODWORD(v10) = *(unsigned __int16 *)(a2 + 4);
    WPP_RECORDER_SF_d(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      0,
      1u,
      0x13u,
      (__int64)&WPP_cc37896b0a9d7b8193ac5507915e85d0_Traceguids,
      v10);
  }
  UsbhAssertBusLock(a1, v6, v7, v8);
  if ( (*(_DWORD *)(a2 + 2408) & 1) == 0 )
    return 1LL;
  Log(a1, 1024, 1852785730, a2, *(unsigned __int16 *)(a2 + 4));
  UsbhCancelResetTimeout(a1, a2, 1);
  UsbhSignalSyncDeviceReset(a1, a3, a2, 0xC0000001);
  UsbhReleaseEnumBusLockEx(a1, *(_QWORD *)(a2 + 376), *(_WORD *)(a2 + 4));
  UsbhPortDisconnect(a1, a2, a3);
  LODWORD(v12) = 1;
  UsbhPCE_QueueChange(a1, *(unsigned __int16 *)(a2 + 4), v12, *(_QWORD *)(a2 + 376));
  return 0LL;
}
