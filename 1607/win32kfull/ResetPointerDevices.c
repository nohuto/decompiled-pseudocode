/*
 * XREFs of ResetPointerDevices @ 0x1C009472C
 * Callers:
 *     xxxSwitchDesktop @ 0x1C0095924 (xxxSwitchDesktop.c)
 *     UserDeactivateDwmInputProcessing @ 0x1C01190F0 (UserDeactivateDwmInputProcessing.c)
 *     RitPrepDitTakeOver @ 0x1C011AD34 (RitPrepDitTakeOver.c)
 * Callees:
 *     <none>
 */

NTSTATUS ResetPointerDevices()
{
  NTSTATUS result; // eax
  __int64 v1; // rcx
  HANDLE Handle; // [rsp+40h] [rbp+8h]

  result = aDeviceTemplate;
  v1 = *((_QWORD *)&aDeviceTemplate + 153);
  if ( v1 )
  {
    result = RawInputManagerObjectCreateKernelHandle(v1, 3LL, 0LL);
    if ( result >= 0 )
    {
      RIMResetPointerDevices(Handle);
      return ZwClose(Handle);
    }
  }
  return result;
}
