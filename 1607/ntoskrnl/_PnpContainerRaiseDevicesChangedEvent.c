/*
 * XREFs of _PnpContainerRaiseDevicesChangedEvent @ 0x1406DC104
 * Callers:
 *     _CmAddDeviceToContainer @ 0x14050FC58 (_CmAddDeviceToContainer.c)
 *     _CmRemoveDeviceFromContainer @ 0x1406DA9C4 (_CmRemoveDeviceFromContainer.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PnpContainerRaiseDevicesChangedEvent(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  void (__fastcall *v3)(__int64, __int64, __int64); // rdi
  DEVPROPKEY **v6; // rsi
  __int64 v7; // r14

  result = 0LL;
  v3 = *(void (__fastcall **)(__int64, __int64, __int64))(a1 + 320);
  if ( v3 )
  {
    v3(a1, a2, 5LL);
    v6 = off_14025D748;
    v7 = 3LL;
    do
    {
      result = ((__int64 (__fastcall *)(__int64, __int64, __int64))v3)(a1, a2, 5LL);
      ++v6;
      --v7;
    }
    while ( v7 );
  }
  return result;
}
