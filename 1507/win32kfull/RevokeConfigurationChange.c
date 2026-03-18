/*
 * XREFs of RevokeConfigurationChange @ 0x1C01D3AFC
 * Callers:
 *     CheckPointerDeviceConfiguration @ 0x1C0145214 (CheckPointerDeviceConfiguration.c)
 *     SetUserPTPEnabledPreference @ 0x1C01CFBA0 (SetUserPTPEnabledPreference.c)
 * Callees:
 *     GetDeviceObjectPointer @ 0x1C003A278 (GetDeviceObjectPointer.c)
 *     DeliverConfigRequestWithTimeout @ 0x1C01D30B8 (DeliverConfigRequestWithTimeout.c)
 */

__int64 __fastcall RevokeConfigurationChange(__int64 a1)
{
  int DeviceObjectPointer; // edi
  PVOID Object; // [rsp+40h] [rbp+8h] BYREF
  PVOID v5; // [rsp+50h] [rbp+18h] BYREF
  HANDLE Handle; // [rsp+58h] [rbp+20h] BYREF

  DeviceObjectPointer = GetDeviceObjectPointer(
                          (struct _UNICODE_STRING *)(a1 + 208),
                          0,
                          3u,
                          &Handle,
                          &v5,
                          (PDEVICE_OBJECT *)&Object);
  if ( DeviceObjectPointer >= 0 )
  {
    ObfReferenceObject(Object);
    DeviceObjectPointer = DeliverConfigRequestWithTimeout(
                            *(_QWORD *)(a1 + 400),
                            (struct _DEVICE_OBJECT *)Object,
                            (struct _FILE_OBJECT *)v5,
                            0,
                            0x57u);
    ObfDereferenceObject(v5);
    ObfDereferenceObject(Object);
    ZwClose(Handle);
  }
  return (unsigned int)DeviceObjectPointer;
}
