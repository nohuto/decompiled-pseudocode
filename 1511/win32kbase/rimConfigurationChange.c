/*
 * XREFs of rimConfigurationChange @ 0x1C00C439C
 * Callers:
 *     RIMRevokeConfigurationChange @ 0x1C00C4260 (RIMRevokeConfigurationChange.c)
 *     RIMUnRevokeConfigurationChange @ 0x1C00C4270 (RIMUnRevokeConfigurationChange.c)
 * Callees:
 *     RIMGetDeviceObjectPointer @ 0x1C000F23C (RIMGetDeviceObjectPointer.c)
 *     WPP_RECORDER_SF_ @ 0x1C0046B20 (WPP_RECORDER_SF_.c)
 *     RIMDeliverConfigRequestWithTimeout @ 0x1C0086248 (RIMDeliverConfigRequestWithTimeout.c)
 */

__int64 __fastcall rimConfigurationChange(__int64 a1, __int64 a2, unsigned int a3)
{
  unsigned __int16 v5; // r14
  int v6; // ebx
  HANDLE Handle; // [rsp+30h] [rbp-28h] BYREF
  PVOID Object; // [rsp+60h] [rbp+8h] BYREF
  PVOID v10; // [rsp+78h] [rbp+20h] BYREF

  v5 = a2;
  v6 = RIMGetDeviceObjectPointer((struct _UNICODE_STRING *)(a1 + 200), a2, 3u, &Handle, &v10, (PDEVICE_OBJECT *)&Object);
  if ( v6 >= 0 )
  {
    ObfReferenceObject(Object);
    v6 = RIMDeliverConfigRequestWithTimeout(
           *(_QWORD *)(a1 + 400),
           (struct _DEVICE_OBJECT *)Object,
           (struct _FILE_OBJECT *)v10,
           a3,
           v5);
    if ( v6 < 0 )
      WPP_RECORDER_SF_(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        3u,
        3u,
        0x38u,
        (__int64)&WPP_51d8eb41fc1cd2417ca7f7fedd3950ec_Traceguids);
    ObfDereferenceObject(v10);
    ObfDereferenceObject(Object);
    ZwClose(Handle);
  }
  return (unsigned int)v6;
}
