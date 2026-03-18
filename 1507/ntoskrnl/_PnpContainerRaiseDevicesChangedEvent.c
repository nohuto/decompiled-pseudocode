/*
 * XREFs of _PnpContainerRaiseDevicesChangedEvent @ 0x14058D914
 * Callers:
 *     _CmAddDeviceToContainer @ 0x1405376AC (_CmAddDeviceToContainer.c)
 *     _CmRemoveDeviceFromContainer @ 0x1407154FC (_CmRemoveDeviceFromContainer.c)
 * Callees:
 *     <none>
 */

_UNKNOWN **__fastcall PnpContainerRaiseDevicesChangedEvent(__int64 a1, __int64 a2)
{
  _UNKNOWN **result; // rax
  void (__fastcall *v3)(__int64, __int64, __int64); // rdi
  DEVPROPKEY **v6; // rsi
  __int64 v7; // r14
  _UNKNOWN *retaddr; // [rsp+58h] [rbp+0h] BYREF

  result = &retaddr;
  v3 = *(void (__fastcall **)(__int64, __int64, __int64))(a1 + 312);
  if ( v3 )
  {
    v3(a1, a2, 5LL);
    v6 = off_1402A3AF0;
    v7 = 3LL;
    do
    {
      result = (_UNKNOWN **)((__int64 (__fastcall *)(__int64, __int64, __int64))v3)(a1, a2, 5LL);
      ++v6;
      --v7;
    }
    while ( v7 );
  }
  return result;
}
