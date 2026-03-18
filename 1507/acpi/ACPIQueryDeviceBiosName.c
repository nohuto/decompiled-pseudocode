/*
 * XREFs of ACPIQueryDeviceBiosName @ 0x1C006A8B0
 * Callers:
 *     ACPIAddInitializationDependencies @ 0x1C0018C80 (ACPIAddInitializationDependencies.c)
 *     ACPIBusIrpDeviceEnumerated @ 0x1C006AA50 (ACPIBusIrpDeviceEnumerated.c)
 *     ACPIIsDebuggingDevice @ 0x1C006ABC4 (ACPIIsDebuggingDevice.c)
 *     ACPIInternalNotifyAvailableDeviceObject @ 0x1C0072068 (ACPIInternalNotifyAvailableDeviceObject.c)
 *     ACPIIoctlQueryDeviceBiosName @ 0x1C007B27C (ACPIIoctlQueryDeviceBiosName.c)
 * Callees:
 *     ACPIAmliBuildObjectPathname @ 0x1C0016898 (ACPIAmliBuildObjectPathname.c)
 *     OSConvertDeviceHandleToNSHANDLE @ 0x1C00180E0 (OSConvertDeviceHandleToNSHANDLE.c)
 *     ACPIInitUnicodeString @ 0x1C006A934 (ACPIInitUnicodeString.c)
 */

__int64 __fastcall ACPIQueryDeviceBiosName(ULONG_PTR a1, struct _UNICODE_STRING *a2)
{
  __int64 *v3; // rax
  int v4; // ebx
  PVOID P; // [rsp+40h] [rbp+18h] BYREF

  *(_QWORD *)&a2->Length = 0LL;
  a2->Buffer = 0LL;
  P = 0LL;
  v3 = (__int64 *)OSConvertDeviceHandleToNSHANDLE(a1);
  if ( v3 )
  {
    v4 = ACPIAmliBuildObjectPathname(v3, &P, 1);
    if ( v4 >= 0 )
    {
      v4 = ACPIInitUnicodeString(a2);
      if ( v4 >= 0 )
        v4 = 0;
    }
    if ( P )
      ExFreePoolWithTag(P, 0);
  }
  else
  {
    return (unsigned int)-1073741810;
  }
  return (unsigned int)v4;
}
