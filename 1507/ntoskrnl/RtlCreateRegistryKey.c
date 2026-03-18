/*
 * XREFs of RtlCreateRegistryKey @ 0x1405C2AE0
 * Callers:
 *     WheapCommitPolicy @ 0x1406FCD10 (WheapCommitPolicy.c)
 * Callees:
 *     ZwClose @ 0x14017F1D0 (ZwClose.c)
 *     RtlpGetRegistryHandle @ 0x1404AAC78 (RtlpGetRegistryHandle.c)
 */

NTSTATUS __stdcall RtlCreateRegistryKey(ULONG RelativeTo, PWSTR Path)
{
  NTSTATUS result; // eax
  HANDLE Handle; // [rsp+40h] [rbp+18h] BYREF

  result = RtlpGetRegistryHandle(RelativeTo, Path, 1, &Handle);
  if ( result >= 0 )
  {
    if ( (RelativeTo & 0x40000000) == 0 )
      ZwClose(Handle);
    return 0;
  }
  return result;
}
