/*
 * XREFs of PiUEventHashStringIntoBucket @ 0x140007EEC
 * Callers:
 *     PiUEventNotifyDeviceInstanceChange @ 0x1403EF800 (PiUEventNotifyDeviceInstanceChange.c)
 *     PiUEventNotifyTargetDeviceChange @ 0x1403F0500 (PiUEventNotifyTargetDeviceChange.c)
 *     PiUEventHandleRegistration @ 0x14048D21C (PiUEventHandleRegistration.c)
 *     PiUEventNotifyDeviceInstancePropertyChange @ 0x140575A40 (PiUEventNotifyDeviceInstancePropertyChange.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14002DC60 (RtlInitUnicodeString.c)
 *     RtlHashUnicodeString @ 0x1404FF220 (RtlHashUnicodeString.c)
 */

__int64 __fastcall PiUEventHashStringIntoBucket(PCWSTR SourceString)
{
  UNICODE_STRING DestinationString; // [rsp+20h] [rbp-18h] BYREF
  ULONG HashValue; // [rsp+48h] [rbp+10h] BYREF

  HashValue = 0;
  RtlInitUnicodeString(&DestinationString, SourceString);
  RtlHashUnicodeString(&DestinationString, 1u, 0, &HashValue);
  return HashValue % 0xD;
}
