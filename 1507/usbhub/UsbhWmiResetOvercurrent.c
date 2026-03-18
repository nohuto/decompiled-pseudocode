/*
 * XREFs of UsbhWmiResetOvercurrent @ 0x1C004EA50
 * Callers:
 *     <none>
 * Callees:
 *     FdoExt @ 0x1C0015060 (FdoExt.c)
 *     WPP_RECORDER_SF_ @ 0x1C003CDB0 (WPP_RECORDER_SF_.c)
 *     UsbhOvercurrentResetWorker @ 0x1C003DDE8 (UsbhOvercurrentResetWorker.c)
 */

__int64 __fastcall UsbhWmiResetOvercurrent(struct _DEVICE_OBJECT *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  unsigned int v6; // edi
  _DWORD *v7; // rax

  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      0,
      1u,
      0x13u,
      (__int64)&WPP_1fd1aa707f2aca2a0a7df2845784e29f_Traceguids);
  v6 = *(_DWORD *)(a5 + 4);
  if ( !v6 )
    FdoExt((__int64)a1, a2, a3, a4);
  v7 = FdoExt((__int64)a1, a2, a3, a4);
  UsbhOvercurrentResetWorker(a1, v6, (__int64)(v7 + 346), 0LL);
  return 0LL;
}
