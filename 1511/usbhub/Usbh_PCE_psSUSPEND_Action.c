/*
 * XREFs of Usbh_PCE_psSUSPEND_Action @ 0x1C001D074
 * Callers:
 *     UsbhDispatch_PortChangeQueueEventEx @ 0x1C00170F0 (UsbhDispatch_PortChangeQueueEventEx.c)
 * Callees:
 *     Log @ 0x1C0013250 (Log.c)
 *     FdoExt @ 0x1C00132D0 (FdoExt.c)
 *     UsbhFlushPortChangeQueue @ 0x1C001D114 (UsbhFlushPortChangeQueue.c)
 *     UsbhLockPcqWithTag @ 0x1C0024140 (UsbhLockPcqWithTag.c)
 *     WPP_RECORDER_SF_dq @ 0x1C003D354 (WPP_RECORDER_SF_dq.c)
 */

__int64 __fastcall Usbh_PCE_psSUSPEND_Action(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  char v4; // si
  int v7; // edx
  int v8; // r8d
  __int64 v9; // r8
  char v11; // [rsp+58h] [rbp+10h] BYREF

  v4 = a3;
  FdoExt(a1, a2, a3, a4);
  Log(a1, 512, 825782320, a2, *(unsigned __int16 *)(a2 + 4));
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_dq(
      WPP_GLOBAL_Control->DeviceExtension,
      v7,
      v8,
      47,
      (__int64)&WPP_7c8008b9a24e5d7244c8b992653290aa_Traceguids,
      *(_WORD *)(a2 + 4),
      v4);
  UsbhLockPcqWithTag(a1, a2, 18, (unsigned int)&v11, 0);
  UsbhFlushPortChangeQueue(a1, a2);
  LOBYTE(v9) = v11;
  return UsbhUnlockPcqWithTag(a1, a2, v9, 0LL);
}
