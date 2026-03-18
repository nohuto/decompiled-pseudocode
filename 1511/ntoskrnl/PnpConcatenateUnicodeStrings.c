/*
 * XREFs of PnpConcatenateUnicodeStrings @ 0x140508254
 * Callers:
 *     IoGetDeviceInstanceName @ 0x1401245A8 (IoGetDeviceInstanceName.c)
 *     PiDeviceRegistration @ 0x1403B9274 (PiDeviceRegistration.c)
 *     PipServiceInstanceToDeviceInstance @ 0x14050809C (PipServiceInstanceToDeviceInstance.c)
 *     PiInitializeDevice @ 0x14061627C (PiInitializeDevice.c)
 * Callees:
 *     RtlCopyUnicodeString @ 0x140043CB0 (RtlCopyUnicodeString.c)
 *     IopAllocateUnicodeString @ 0x140456178 (IopAllocateUnicodeString.c)
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
