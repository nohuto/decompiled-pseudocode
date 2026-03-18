/*
 * XREFs of RtlDeleteRegistryValue @ 0x140546434
 * Callers:
 *     PerfDiagpSaveActiveDCLLogFileName @ 0x1404F5104 (PerfDiagpSaveActiveDCLLogFileName.c)
 *     VerifierRtlDeleteRegistryValue @ 0x1406C0C6C (VerifierRtlDeleteRegistryValue.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140043C70 (RtlInitUnicodeString.c)
 *     ZwClose @ 0x140150800 (ZwClose.c)
 *     ZwDeleteValueKey @ 0x140151F40 (ZwDeleteValueKey.c)
 *     RtlpGetRegistryHandle @ 0x1404C9018 (RtlpGetRegistryHandle.c)
 */

NTSTATUS __stdcall RtlDeleteRegistryValue(ULONG RelativeTo, PCWSTR Path, PCWSTR ValueName)
{
  NTSTATUS result; // eax
  NTSTATUS v6; // ebx
  UNICODE_STRING DestinationString; // [rsp+20h] [rbp-18h] BYREF
  HANDLE KeyHandle; // [rsp+58h] [rbp+20h] BYREF

  result = RtlpGetRegistryHandle(RelativeTo, Path, 1, &KeyHandle);
  if ( result >= 0 )
  {
    RtlInitUnicodeString(&DestinationString, ValueName);
    v6 = ZwDeleteValueKey(KeyHandle, &DestinationString);
    if ( (RelativeTo & 0x40000000) == 0 )
      ZwClose(KeyHandle);
    return v6;
  }
  return result;
}
