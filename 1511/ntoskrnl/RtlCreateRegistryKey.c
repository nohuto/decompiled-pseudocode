/*
 * XREFs of RtlCreateRegistryKey @ 0x14054B634
 * Callers:
 *     WheapCommitPolicy @ 0x1406784F4 (WheapCommitPolicy.c)
 * Callees:
 *     ZwClose @ 0x140150800 (ZwClose.c)
 *     RtlpGetRegistryHandle @ 0x1404C9018 (RtlpGetRegistryHandle.c)
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
