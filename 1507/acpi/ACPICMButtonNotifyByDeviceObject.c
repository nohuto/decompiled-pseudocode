/*
 * XREFs of ACPICMButtonNotifyByDeviceObject @ 0x1C0036670
 * Callers:
 *     <none>
 * Callees:
 *     ACPIInternalGetDeviceExtension @ 0x1C0001538 (ACPIInternalGetDeviceExtension.c)
 *     ACPICMButtonNotify @ 0x1C00365E4 (ACPICMButtonNotify.c)
 */

void __fastcall ACPICMButtonNotifyByDeviceObject(ULONG_PTR a1, int a2)
{
  _DWORD *DeviceExtension; // rax

  DeviceExtension = (_DWORD *)ACPIInternalGetDeviceExtension(a1);
  if ( DeviceExtension )
    ACPICMButtonNotify(a1, DeviceExtension, a2);
}
