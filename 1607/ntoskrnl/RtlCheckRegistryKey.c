/*
 * XREFs of RtlCheckRegistryKey @ 0x1404ED8C0
 * Callers:
 *     RtlCheckPortableOperatingSystem @ 0x1400B3B38 (RtlCheckPortableOperatingSystem.c)
 *     SepInitQuerySigningPolicyExt @ 0x140581244 (SepInitQuerySigningPolicyExt.c)
 *     WheapCommitPolicy @ 0x1406BAC2C (WheapCommitPolicy.c)
 * Callees:
 *     ZwClose @ 0x140159E60 (ZwClose.c)
 *     RtlpGetRegistryHandle @ 0x1404FADEC (RtlpGetRegistryHandle.c)
 */

NTSTATUS __stdcall RtlCheckRegistryKey(ULONG RelativeTo, PWSTR Path)
{
  NTSTATUS result; // eax
  HANDLE Handle; // [rsp+40h] [rbp+18h] BYREF

  result = RtlpGetRegistryHandle(RelativeTo, Path, 0LL, &Handle);
  if ( result >= 0 )
  {
    if ( (RelativeTo & 0x40000000) == 0 )
      ZwClose(Handle);
    return 0;
  }
  return result;
}
