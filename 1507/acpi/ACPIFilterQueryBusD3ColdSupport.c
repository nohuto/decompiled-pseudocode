/*
 * XREFs of ACPIFilterQueryBusD3ColdSupport @ 0x1C0068E1C
 * Callers:
 *     ACPIDetectFilterDevices @ 0x1C000830C (ACPIDetectFilterDevices.c)
 * Callees:
 *     ACPIInternalGetDeviceExtension @ 0x1C0001538 (ACPIInternalGetDeviceExtension.c)
 *     _guard_dispatch_icall_nop @ 0x1C00237F0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0023B40 (memset.c)
 *     ACPIInternalSendSynchronousIrp @ 0x1C00697E4 (ACPIInternalSendSynchronousIrp.c)
 */

__int64 __fastcall ACPIFilterQueryBusD3ColdSupport(ULONG_PTR a1)
{
  __int64 DeviceExtension; // rbx
  __int64 result; // rax
  _QWORD v3[9]; // [rsp+70h] [rbp+7h] BYREF
  char v4; // [rsp+D8h] [rbp+6Fh] BYREF

  DeviceExtension = ACPIInternalGetDeviceExtension(a1);
  memset(v3, 0, sizeof(v3));
  result = ACPIInternalSendSynchronousIrp(*(PDEVICE_OBJECT *)(DeviceExtension + 720));
  if ( (int)result >= 0 )
  {
    if ( v3[7] && ((int (__fastcall *)(_QWORD, char *))v3[7])(v3[1], &v4) >= 0 && v4 )
      *(_QWORD *)(DeviceExtension + 904) |= 0x800uLL;
    result = v3[3];
    if ( v3[3] )
      return ((__int64 (__fastcall *)(_QWORD))v3[3])(v3[1]);
  }
  return result;
}
