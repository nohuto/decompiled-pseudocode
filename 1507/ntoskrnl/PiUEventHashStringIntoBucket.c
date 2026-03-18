/*
 * XREFs of PiUEventHashStringIntoBucket @ 0x140008200
 * Callers:
 *     PiUEventNotifyDeviceInstanceChange @ 0x1404102D8 (PiUEventNotifyDeviceInstanceChange.c)
 *     PiUEventHandleRegistration @ 0x14041610C (PiUEventHandleRegistration.c)
 *     PiUEventNotifyTargetDeviceChange @ 0x14045F46C (PiUEventNotifyTargetDeviceChange.c)
 *     PiUEventNotifyDeviceInstancePropertyChange @ 0x1405B2828 (PiUEventNotifyDeviceInstancePropertyChange.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140047FE0 (RtlInitUnicodeString.c)
 *     RtlHashUnicodeString @ 0x140439AA0 (RtlHashUnicodeString.c)
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
