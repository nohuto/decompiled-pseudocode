/*
 * XREFs of UsbhCancelEnumeration @ 0x1C0027BB0
 * Callers:
 *     UsbhBusPause_Action @ 0x1C000F090 (UsbhBusPause_Action.c)
 *     UsbhEnumerate1 @ 0x1C0027540 (UsbhEnumerate1.c)
 *     UsbhPCE_Disable @ 0x1C0040C34 (UsbhPCE_Disable.c)
 *     UsbhEnumerate2 @ 0x1C004FF08 (UsbhEnumerate2.c)
 *     UsbhHandleOvercurrent @ 0x1C00502F4 (UsbhHandleOvercurrent.c)
 * Callees:
 *     UsbhReleaseEnumBusLockEx @ 0x1C000B82C (UsbhReleaseEnumBusLockEx.c)
 *     Log @ 0x1C0014B50 (Log.c)
 *     FdoExt @ 0x1C0015060 (FdoExt.c)
 *     UsbhBusUnlatchPdo @ 0x1C0017830 (UsbhBusUnlatchPdo.c)
 *     UsbhCancelResetTimeout @ 0x1C00185C8 (UsbhCancelResetTimeout.c)
 *     WPP_RECORDER_SF_d @ 0x1C00404E8 (WPP_RECORDER_SF_d.c)
 *     UsbhAssertBusLock @ 0x1C0042914 (UsbhAssertBusLock.c)
 *     Usbh_BusPause_PdoEvent @ 0x1C004466C (Usbh_BusPause_PdoEvent.c)
 */

__int64 __fastcall UsbhCancelEnumeration(__int64 a1, unsigned int a2, __int64 a3, __int64 a4)
{
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v12; // r9

  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_d(
      WPP_GLOBAL_Control->DeviceExtension,
      0,
      1,
      42,
      (__int64)&WPP_cc37896b0a9d7b8193ac5507915e85d0_Traceguids,
      *(_WORD *)(a3 + 4));
  Log(a1, 1024, 1668826446, a3, 0LL);
  v10 = a2 - 1;
  if ( (unsigned int)v10 > 1 )
    return a2;
  FdoExt(a1, v8, v9, v10);
  UsbhCancelResetTimeout(a1, a3, 1);
  UsbhAssertBusLock(a1);
  UsbhReleaseEnumBusLockEx(a1, *(_QWORD *)(a3 + 376), *(_WORD *)(a3 + 4));
  UsbhBusUnlatchPdo(a1, a4, a3, v12, 0LL);
  Usbh_BusPause_PdoEvent(a1, a4, a3, *(_QWORD *)(a3 + 376));
  return 4LL;
}
