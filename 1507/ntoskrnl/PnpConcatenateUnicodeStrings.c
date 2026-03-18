/*
 * XREFs of PnpConcatenateUnicodeStrings @ 0x140571E00
 * Callers:
 *     IoGetDeviceInstanceName @ 0x14015377C (IoGetDeviceInstanceName.c)
 *     PiDeviceRegistration @ 0x1404E6474 (PiDeviceRegistration.c)
 *     PipServiceInstanceToDeviceInstance @ 0x140571C48 (PipServiceInstanceToDeviceInstance.c)
 *     PiInitializeDevice @ 0x140694F24 (PiInitializeDevice.c)
 * Callees:
 *     RtlCopyUnicodeString @ 0x140047E40 (RtlCopyUnicodeString.c)
 *     IopAllocateUnicodeString @ 0x1404E3B10 (IopAllocateUnicodeString.c)
 */

__int64 __fastcall PnpConcatenateUnicodeStrings(PUNICODE_STRING DestinationString, PCUNICODE_STRING SourceString)
{
  __int64 result; // rax

  result = IopAllocateUnicodeString((__int64)DestinationString, SourceString->Length);
  if ( (int)result >= 0 )
  {
    RtlCopyUnicodeString(DestinationString, SourceString);
    return 0LL;
  }
  return result;
}
