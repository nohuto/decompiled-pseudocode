/*
 * XREFs of Usbh_PCE_psSUSPEND_Action @ 0x1C000B334
 * Callers:
 *     UsbhDispatch_PortChangeQueueEventEx @ 0x1C0010B40 (UsbhDispatch_PortChangeQueueEventEx.c)
 * Callees:
 *     UsbhFlushPortChangeQueue @ 0x1C000B3D4 (UsbhFlushPortChangeQueue.c)
 *     Log @ 0x1C0014B50 (Log.c)
 *     FdoExt @ 0x1C0015060 (FdoExt.c)
 *     UsbhLockPcqWithTag @ 0x1C0024260 (UsbhLockPcqWithTag.c)
 *     WPP_RECORDER_SF_dq @ 0x1C003D124 (WPP_RECORDER_SF_dq.c)
 */

__int64 __fastcall Usbh_PCE_psSUSPEND_Action(__int64 a1, __int64 a2, char a3)
{
  int v6; // edx
  int v7; // r8d
  __int64 v8; // r8
  char v10; // [rsp+58h] [rbp+10h] BYREF

  FdoExt(a1);
  Log(a1, 512, 825782320, a2, *(unsigned __int16 *)(a2 + 4));
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_dq(
      WPP_GLOBAL_Control->DeviceExtension,
      v6,
      v7,
      47,
      (__int64)&WPP_7c8008b9a24e5d7244c8b992653290aa_Traceguids,
      *(_WORD *)(a2 + 4),
      a3);
  UsbhLockPcqWithTag(a1, a2, 18, (unsigned int)&v10, 0);
  UsbhFlushPortChangeQueue(a1, a2);
  LOBYTE(v8) = v10;
  return UsbhUnlockPcqWithTag(a1, a2, v8, 0LL);
}
