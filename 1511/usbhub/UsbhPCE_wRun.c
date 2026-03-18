/*
 * XREFs of UsbhPCE_wRun @ 0x1C0004868
 * Callers:
 *     UsbhWaitEventWithTimeoutEx @ 0x1C00138F0 (UsbhWaitEventWithTimeoutEx.c)
 * Callees:
 *     FdoExt @ 0x1C00132D0 (FdoExt.c)
 *     UsbhDispatch_PortChangeQueueEventEx @ 0x1C00170F0 (UsbhDispatch_PortChangeQueueEventEx.c)
 *     WPP_RECORDER_SF_d @ 0x1C0040704 (WPP_RECORDER_SF_d.c)
 */

LONG __fastcall UsbhPCE_wRun(__int64 a1, int a2, __int64 a3)
{
  int v5; // edi
  __int64 v7; // [rsp+60h] [rbp+18h]

  v5 = a1;
  FdoExt(a1);
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_d(
      WPP_GLOBAL_Control->DeviceExtension,
      0,
      1,
      57,
      (__int64)&WPP_7c8008b9a24e5d7244c8b992653290aa_Traceguids,
      *(_WORD *)(a3 + 4));
  LODWORD(v7) = 0;
  UsbhDispatch_PortChangeQueueEventEx(v5, a3, 5, a2, v7, 0, 0LL, 0LL);
  return KeSetEvent((PRKEVENT)(a3 + 2464), 0, 0);
}
