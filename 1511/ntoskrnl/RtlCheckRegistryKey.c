/*
 * XREFs of RtlCheckRegistryKey @ 0x1404C86D4
 * Callers:
 *     RtlCheckPortableOperatingSystem @ 0x1400F4724 (RtlCheckPortableOperatingSystem.c)
 *     SepInitQuerySigningPolicyExt @ 0x14054B48C (SepInitQuerySigningPolicyExt.c)
 *     WheapCommitPolicy @ 0x1406784F4 (WheapCommitPolicy.c)
 * Callees:
 *     ZwClose @ 0x140150800 (ZwClose.c)
 *     RtlpGetRegistryHandle @ 0x1404C9018 (RtlpGetRegistryHandle.c)
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
