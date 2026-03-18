/*
 * XREFs of rimConfigurationChange @ 0x1C00D2DCC
 * Callers:
 *     RIMRevokeConfigurationChange @ 0x1C00D2BA0 (RIMRevokeConfigurationChange.c)
 *     RIMUnRevokeConfigurationChange @ 0x1C00D2BB0 (RIMUnRevokeConfigurationChange.c)
 * Callees:
 *     RIMGetDeviceObjectPointer @ 0x1C000B2CC (RIMGetDeviceObjectPointer.c)
 *     WPP_RECORDER_SF_ @ 0x1C0012AB0 (WPP_RECORDER_SF_.c)
 *     RIMDeliverConfigRequestWithTimeout @ 0x1C0086F50 (RIMDeliverConfigRequestWithTimeout.c)
 */

__int64 __fastcall rimConfigurationChange(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v4; // ebp
  unsigned __int16 v5; // r14
  int v6; // ebx
  int v7; // edx
  HANDLE Handle; // [rsp+30h] [rbp-28h] BYREF
  PVOID Object; // [rsp+60h] [rbp+8h] BYREF
  PVOID v11; // [rsp+78h] [rbp+20h] BYREF

  v4 = a3;
  v5 = a2;
  v6 = RIMGetDeviceObjectPointer((struct _UNICODE_STRING *)(a1 + 208), a2, a3, &Handle, &v11, (PDEVICE_OBJECT *)&Object);
  if ( v6 >= 0 )
  {
    ObfReferenceObject(Object);
    v6 = RIMDeliverConfigRequestWithTimeout(
           *(_QWORD *)(a1 + 464),
           (struct _DEVICE_OBJECT *)Object,
           (struct _FILE_OBJECT *)v11,
           v4,
           v5);
    if ( v6 < 0 )
    {
      LOBYTE(v7) = 3;
      WPP_RECORDER_SF_(
        WPP_GLOBAL_Control->DeviceExtension,
        v7,
        3,
        63,
        (__int64)&WPP_cdcc7dbfba9a32c8583c13d722e37579_Traceguids);
    }
    ObfDereferenceObject(v11);
    ObfDereferenceObject(Object);
    ZwClose(Handle);
  }
  return (unsigned int)v6;
}
