/*
 * XREFs of VfIsPCIBus @ 0x140707C40
 * Callers:
 *     VfGetDmaAdapter @ 0x140707428 (VfGetDmaAdapter.c)
 * Callees:
 *     __security_check_cookie @ 0x14014CA50 (__security_check_cookie.c)
 *     _wcsicmp @ 0x14014D79C (_wcsicmp.c)
 *     IoGetDeviceProperty @ 0x1404F936C (IoGetDeviceProperty.c)
 */

__int64 __fastcall VfIsPCIBus(struct _DEVICE_OBJECT *a1)
{
  unsigned int v1; // ebx
  ULONG ResultLength[4]; // [rsp+30h] [rbp-78h] BYREF
  wchar_t PropertyBuffer[40]; // [rsp+40h] [rbp-68h] BYREF

  v1 = 0;
  ResultLength[0] = 0;
  if ( !a1 )
    return 0LL;
  if ( !IoGetDeviceProperty(a1, DevicePropertyDeviceDescription, 0x50u, PropertyBuffer, ResultLength) )
    return wcsicmp(PropertyBuffer, L"PCI bus") == 0;
  return v1;
}
