/*
 * XREFs of RequestModeSwitchOnPowerUp @ 0x1C01551F0
 * Callers:
 *     RawInputThread @ 0x1C007B620 (RawInputThread.c)
 * Callees:
 *     <none>
 */

NTSTATUS RequestModeSwitchOnPowerUp()
{
  NTSTATUS result; // eax
  __int64 v1; // rcx
  HANDLE Handle; // [rsp+40h] [rbp+8h]

  result = aDeviceTemplate[0];
  v1 = aDeviceTemplate[153];
  if ( v1 )
  {
    result = RawInputManagerObjectCreateKernelHandle(v1, 3LL, 0LL);
    if ( result >= 0 )
    {
      RIMOnPowerNotification(Handle, 1LL);
      return ZwClose(Handle);
    }
  }
  return result;
}
