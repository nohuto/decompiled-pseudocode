/*
 * XREFs of UsbhBuildWmiConnectionNotification @ 0x1C004DEA0
 * Callers:
 *     UsbhDeviceOvercurrentPopup @ 0x1C003E1EC (UsbhDeviceOvercurrentPopup.c)
 *     UsbhEnumFailurePopup @ 0x1C004F250 (UsbhEnumFailurePopup.c)
 *     UsbhLegacyDevicePopup @ 0x1C004FAE0 (UsbhLegacyDevicePopup.c)
 *     UsbhNestedHubsPopup @ 0x1C004FC30 (UsbhNestedHubsPopup.c)
 *     UsbhNotEnoughBandwidth_Popup @ 0x1C004FCC0 (UsbhNotEnoughBandwidth_Popup.c)
 *     UsbhNotEnoughPowerPopup @ 0x1C004FD40 (UsbhNotEnoughPowerPopup.c)
 * Callees:
 *     Log @ 0x1C00159D0 (Log.c)
 *     FdoExt @ 0x1C0015EE0 (FdoExt.c)
 *     __security_check_cookie @ 0x1C0029400 (__security_check_cookie.c)
 *     UsbhSyncSendDeviceIoctl @ 0x1C003CF7C (UsbhSyncSendDeviceIoctl.c)
 *     WPP_RECORDER_SF_q @ 0x1C003D738 (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_d @ 0x1C0040A3C (WPP_RECORDER_SF_d.c)
 */

_QWORD *__fastcall UsbhBuildWmiConnectionNotification(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned __int16 v4; // si
  __int64 v6; // rdx
  _QWORD *PoolWithTag; // rbx
  int v8; // eax
  __int64 v9; // r9
  int v10; // r11d
  int v11; // r10d
  int v13; // [rsp+28h] [rbp-30h]
  int v14; // [rsp+30h] [rbp-28h] BYREF

  v4 = a2;
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    v13 = (unsigned __int16)a2;
    WPP_RECORDER_SF_d(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      0,
      1u,
      0x14u,
      (__int64)&WPP_b17c68f1d29d390fab33e43047c86516_Traceguids,
      v13);
  }
  FdoExt(a1, a2, a3, a4);
  PoolWithTag = ExAllocatePoolWithTag(ExDefaultNonPagedPoolType, 0x18uLL, 0x42554855u);
  if ( PoolWithTag )
  {
    *PoolWithTag = 0LL;
    PoolWithTag[1] = 0LL;
    PoolWithTag[2] = 0LL;
    *((_DWORD *)PoolWithTag + 1) = v4;
    v8 = UsbhSyncSendDeviceIoctl(a1, v6, &v14, 6LL);
    Log(a1, 64, 1752067121, (__int64)PoolWithTag, v8);
    if ( v11 < 0 )
      *((_DWORD *)PoolWithTag + 5) = 0;
    else
      *((_DWORD *)PoolWithTag + 5) = v14;
    Log(a1, v10, 1752067122, v9, *((unsigned int *)PoolWithTag + 5));
  }
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_q(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      v6,
      1u,
      0x15u,
      (__int64)&WPP_b17c68f1d29d390fab33e43047c86516_Traceguids,
      PoolWithTag);
  return PoolWithTag;
}
