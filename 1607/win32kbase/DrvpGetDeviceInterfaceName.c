/*
 * XREFs of DrvpGetDeviceInterfaceName @ 0x1C007DE8C
 * Callers:
 *     DrvEnumDisplayDevices @ 0x1C00399E0 (DrvEnumDisplayDevices.c)
 *     DrvDisplayConfigGetDeviceInfo @ 0x1C004A240 (DrvDisplayConfigGetDeviceInfo.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DrvpGetDeviceInterfaceName(
        PDEVICE_OBJECT PhysicalDeviceObject,
        GUID *InterfaceClassGuid,
        __int64 a3,
        wchar_t *a4)
{
  NTSTATUS DeviceInterfaces; // eax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rbx
  wchar_t *v10; // rcx
  __int64 v12; // rax
  wchar_t *Src; // [rsp+20h] [rbp-18h] BYREF

  Src = 0LL;
  DeviceInterfaces = IoGetDeviceInterfaces(InterfaceClassGuid, PhysicalDeviceObject, 0, &Src);
  v9 = DeviceInterfaces;
  if ( DeviceInterfaces < 0 )
  {
    v12 = WdLogNewEntry5_WdWarning(v8, v7);
    *(_QWORD *)(v12 + 24) = PhysicalDeviceObject;
    *(_QWORD *)(v12 + 32) = v9;
    WdLogEvent5_WdWarning(v12);
  }
  else
  {
    wcsncpy_s(a4, 0x80uLL, Src, 0xFFFFFFFFFFFFFFFFuLL);
    v10 = Src;
    a4[1] = 92;
    ExFreePoolWithTag(v10, 0);
  }
  return (unsigned int)v9;
}
