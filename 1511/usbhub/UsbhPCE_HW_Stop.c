/*
 * XREFs of UsbhPCE_HW_Stop @ 0x1C0040F90
 * Callers:
 *     UsbhHubProcessIsr @ 0x1C0012AD0 (UsbhHubProcessIsr.c)
 *     UsbhBusPnpStop_Action @ 0x1C003F1E0 (UsbhBusPnpStop_Action.c)
 * Callees:
 *     UsbhGetPortData @ 0x1C000C150 (UsbhGetPortData.c)
 *     Log @ 0x1C0013250 (Log.c)
 *     FdoExt @ 0x1C00132D0 (FdoExt.c)
 *     UsbhDispatch_PortChangeQueueEventEx @ 0x1C00170F0 (UsbhDispatch_PortChangeQueueEventEx.c)
 *     WPP_RECORDER_SF_dq @ 0x1C003D354 (WPP_RECORDER_SF_dq.c)
 */

void __fastcall UsbhPCE_HW_Stop(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned __int16 v5; // di
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 PortData; // rax
  int v10; // [rsp+28h] [rbp-20h]
  __int64 v11; // [rsp+68h] [rbp+20h]

  v5 = a2;
  FdoExt(a1, a2, a3, a4);
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    v10 = v5;
    WPP_RECORDER_SF_dq(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      v7,
      v8,
      0x44u,
      (__int64)&WPP_7c8008b9a24e5d7244c8b992653290aa_Traceguids,
      v10,
      a3);
  }
  Log(a1, 512, 1346711863, 0LL, v5);
  PortData = UsbhGetPortData(a1, v5);
  if ( PortData )
  {
    LODWORD(v11) = 0;
    UsbhDispatch_PortChangeQueueEventEx(a1, PortData, 17LL, a3, v11, 0, 0LL, 0LL);
  }
  UsbhReleaseEnumBusLockEx(a1, a3, v5);
}
