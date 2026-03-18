/*
 * XREFs of PnpConcatenateUnicodeStrings @ 0x140538568
 * Callers:
 *     IoGetDeviceInstanceName @ 0x14012C56C (IoGetDeviceInstanceName.c)
 *     PiDeviceRegistration @ 0x1404C7D00 (PiDeviceRegistration.c)
 *     PipServiceInstanceToDeviceInstance @ 0x1405383B0 (PipServiceInstanceToDeviceInstance.c)
 *     PiInitializeDevice @ 0x14064AC94 (PiInitializeDevice.c)
 * Callees:
 *     RtlCopyUnicodeString @ 0x14002DD60 (RtlCopyUnicodeString.c)
 *     IopAllocateUnicodeString @ 0x1403F2594 (IopAllocateUnicodeString.c)
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
