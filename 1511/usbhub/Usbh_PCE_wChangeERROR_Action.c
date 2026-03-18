/*
 * XREFs of Usbh_PCE_wChangeERROR_Action @ 0x1C004288C
 * Callers:
 *     UsbhDispatch_PortChangeQueueEventEx @ 0x1C00170F0 (UsbhDispatch_PortChangeQueueEventEx.c)
 * Callees:
 *     UsbhSignalSyncDeviceReset @ 0x1C0004650 (UsbhSignalSyncDeviceReset.c)
 *     Log @ 0x1C0013250 (Log.c)
 *     FdoExt @ 0x1C00132D0 (FdoExt.c)
 *     UsbhSignalResumeEvent @ 0x1C001F7BC (UsbhSignalResumeEvent.c)
 *     UsbhUnlockPcqWithTag @ 0x1C0024080 (UsbhUnlockPcqWithTag.c)
 *     UsbhLockPcqWithTag @ 0x1C0024140 (UsbhLockPcqWithTag.c)
 *     WPP_RECORDER_SF_dq @ 0x1C003D354 (WPP_RECORDER_SF_dq.c)
 *     UsbhSignalSuspendEvent @ 0x1C00419C0 (UsbhSignalSuspendEvent.c)
 */

__int64 Usbh_PCE_wChangeERROR_Action(__int64 a1, __int64 a2, __int64 a3, __int64 a4, ...)
{
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 result; // rax
  __int64 v13; // [rsp+70h] [rbp+28h] BYREF
  va_list va; // [rsp+70h] [rbp+28h]
  __int64 v15; // [rsp+78h] [rbp+30h]
  va_list va1; // [rsp+80h] [rbp+38h] BYREF

  va_start(va1, a4);
  va_start(va, a4);
  v13 = va_arg(va1, _QWORD);
  v15 = va_arg(va1, _QWORD);
  FdoExt(a1, a2, a3, a4);
  Log(a1, 512, 842231856, a2, *(unsigned __int16 *)(a2 + 4));
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_dq(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      v7,
      v8,
      0x2Eu,
      (__int64)&WPP_7c8008b9a24e5d7244c8b992653290aa_Traceguids,
      *(unsigned __int16 *)(a2 + 4),
      a3);
  UsbhLockPcqWithTag(a1, a2, 23, (KIRQL *)va, 0);
  UsbhUnlockPcqWithTag(a1, a2, v13, 0);
  result = a4;
  if ( (a4 & 0x100000) != 0 )
  {
    UsbhSignalResumeEvent(a1, a2);
    result = a4;
  }
  if ( (result & 0x40000) != 0 )
  {
    UsbhSignalSuspendEvent(a1, a2, v9, v10);
    result = a4;
  }
  if ( (result & 0x20000) != 0 )
  {
    Log(a1, 512, 842231857, v15, *(unsigned __int16 *)(a2 + 4));
    return UsbhSignalSyncDeviceReset(a1, v15, a2, 0xC000000E);
  }
  return result;
}
