/*
 * XREFs of ACPIQueryDeviceBiosName @ 0x1C0087DB4
 * Callers:
 *     ACPIAddInitializationDependencies @ 0x1C00207E0 (ACPIAddInitializationDependencies.c)
 *     ACPIBusIrpDeviceEnumerated @ 0x1C0087EF0 (ACPIBusIrpDeviceEnumerated.c)
 *     ACPIIsDebuggingDevice @ 0x1C0088144 (ACPIIsDebuggingDevice.c)
 *     ACPIInternalNotifyAvailableDeviceObject @ 0x1C008FCB0 (ACPIInternalNotifyAvailableDeviceObject.c)
 *     ACPIIoctlQueryDeviceBiosName @ 0x1C009C6B4 (ACPIIoctlQueryDeviceBiosName.c)
 * Callees:
 *     ACPIAmliBuildObjectPathname @ 0x1C001E22C (ACPIAmliBuildObjectPathname.c)
 *     OSConvertDeviceHandleToNSHANDLE @ 0x1C001FBE8 (OSConvertDeviceHandleToNSHANDLE.c)
 *     ACPIInitUnicodeString @ 0x1C0087E38 (ACPIInitUnicodeString.c)
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
