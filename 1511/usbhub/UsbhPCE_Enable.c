/*
 * XREFs of UsbhPCE_Enable @ 0x1C0028318
 * Callers:
 *     UsbhSyncResumePort @ 0x1C002817C (UsbhSyncResumePort.c)
 *     UsbhOvercurrentResetWorker @ 0x1C003E018 (UsbhOvercurrentResetWorker.c)
 * Callees:
 *     UsbhGetPortData @ 0x1C000C150 (UsbhGetPortData.c)
 *     Log @ 0x1C0013250 (Log.c)
 *     FdoExt @ 0x1C00132D0 (FdoExt.c)
 *     UsbhDispatch_PortChangeQueueEventEx @ 0x1C00170F0 (UsbhDispatch_PortChangeQueueEventEx.c)
 *     WPP_RECORDER_SF_d @ 0x1C0040704 (WPP_RECORDER_SF_d.c)
 */

int *__fastcall UsbhPCE_Enable(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned __int16 v4; // di
  int *result; // rax
  __int64 v8; // [rsp+68h] [rbp+20h]

  v4 = a3;
  FdoExt(a1, a2, a3, a4);
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_d(
      WPP_GLOBAL_Control->DeviceExtension,
      0,
      1,
      56,
      (__int64)&WPP_7c8008b9a24e5d7244c8b992653290aa_Traceguids,
      v4);
  Log(a1, 512, 1346711601, 0LL, v4);
  result = (int *)UsbhGetPortData(a1, v4);
  if ( result )
  {
    LODWORD(v8) = 0;
    return UsbhDispatch_PortChangeQueueEventEx(a1, (__int64)result, 1LL, a2, v8, 0, 0LL, 0LL);
  }
  return result;
}
