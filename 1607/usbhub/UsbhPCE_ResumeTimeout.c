/*
 * XREFs of UsbhPCE_ResumeTimeout @ 0x1C0041628
 * Callers:
 *     UsbhSshResumePort @ 0x1C0022370 (UsbhSshResumePort.c)
 *     UsbhWaitForPortResume @ 0x1C0028934 (UsbhWaitForPortResume.c)
 * Callees:
 *     UsbhDispatch_PortChangeQueueEventEx @ 0x1C0011EB0 (UsbhDispatch_PortChangeQueueEventEx.c)
 *     Log @ 0x1C00159D0 (Log.c)
 *     FdoExt @ 0x1C0015EE0 (FdoExt.c)
 *     UsbhGetPortData @ 0x1C001B570 (UsbhGetPortData.c)
 *     WPP_RECORDER_SF_d @ 0x1C0040A3C (WPP_RECORDER_SF_d.c)
 */

int *__fastcall UsbhPCE_ResumeTimeout(struct _DEVICE_OBJECT *a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned __int16 v4; // di
  int *result; // rax
  int v8; // [rsp+28h] [rbp-20h]
  __int64 v9; // [rsp+68h] [rbp+20h]

  v4 = a3;
  FdoExt((__int64)a1, a2, a3, a4);
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    v8 = v4;
    WPP_RECORDER_SF_d(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      0,
      1u,
      0x3Du,
      (__int64)&WPP_7750967c46a832f629b3446543f02792_Traceguids,
      v8);
  }
  Log((__int64)a1, 512, 1346711860, 0LL, v4);
  result = (int *)UsbhGetPortData((__int64)a1, v4);
  if ( result )
  {
    LODWORD(v9) = 0;
    return UsbhDispatch_PortChangeQueueEventEx(a1, (__int64)result, 14LL, a2, v9, 0, 0LL, 0LL);
  }
  return result;
}
