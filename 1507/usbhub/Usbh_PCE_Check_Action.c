/*
 * XREFs of Usbh_PCE_Check_Action @ 0x1C00419FC
 * Callers:
 *     UsbhDispatch_PortChangeQueueEventEx @ 0x1C0010B40 (UsbhDispatch_PortChangeQueueEventEx.c)
 * Callees:
 *     Log @ 0x1C0014B50 (Log.c)
 *     FdoExt @ 0x1C0015060 (FdoExt.c)
 *     UsbhUnlockPcqWithTag @ 0x1C00241A0 (UsbhUnlockPcqWithTag.c)
 *     UsbhLockPcqWithTag @ 0x1C0024260 (UsbhLockPcqWithTag.c)
 *     WPP_RECORDER_SF_dq @ 0x1C003D124 (WPP_RECORDER_SF_dq.c)
 */

_DWORD *__fastcall Usbh_PCE_Check_Action(__int64 a1, __int64 a2, __int64 a3, _DWORD *a4)
{
  __int64 v8; // rdx
  __int64 v9; // r8
  int v10; // eax
  int v12; // [rsp+28h] [rbp-30h]
  KIRQL v13; // [rsp+68h] [rbp+10h] BYREF

  FdoExt(a1, a2, a3, (__int64)a4);
  *a4 = 0;
  Log(a1, 512, 825585712, a2, *(unsigned __int16 *)(a2 + 4));
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    v12 = *(unsigned __int16 *)(a2 + 4);
    WPP_RECORDER_SF_dq(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      v8,
      v9,
      0x2Cu,
      (__int64)&WPP_7c8008b9a24e5d7244c8b992653290aa_Traceguids,
      v12,
      a3);
  }
  v10 = UsbhLockPcqWithTag(a1, a2, 20, &v13, 0);
  if ( v10 < 5 || v10 > 6 && (v10 <= 10 || v10 > 13 && (unsigned int)(v10 - 16) > 1) )
  {
    *(_DWORD *)(a2 + 12) = v10;
    *(_DWORD *)(32LL * *(unsigned int *)(a2 + 2400) + a2 + 1384) = v10;
    *a4 = 0;
  }
  else
  {
    *a4 = 1;
    *(_DWORD *)(a2 + 12) = v10;
    *(_DWORD *)(32LL * *(unsigned int *)(a2 + 2400) + a2 + 1384) = v10;
  }
  UsbhUnlockPcqWithTag(a1, a2, v13, 0);
  return a4;
}
