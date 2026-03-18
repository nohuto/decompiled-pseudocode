/*
 * XREFs of UsbhRegCreateUsbflagsKey @ 0x1C00054F4
 * Callers:
 *     UsbhRegDriverEntry @ 0x1C0004DE0 (UsbhRegDriverEntry.c)
 *     UsbhGetMSOS_Descriptor @ 0x1C0005420 (UsbhGetMSOS_Descriptor.c)
 * Callees:
 *     <none>
 */

NTSTATUS UsbhRegCreateUsbflagsKey()
{
  NTSTATUS result; // eax

  result = RtlCheckRegistryKey(2u, (PWSTR)L"usbflags");
  if ( (result & 0xC0000000) == 0xC0000000 )
    return RtlCreateRegistryKey(2u, (PWSTR)L"usbflags");
  return result;
}
