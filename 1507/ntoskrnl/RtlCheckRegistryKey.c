/*
 * XREFs of RtlCheckRegistryKey @ 0x1404A9128
 * Callers:
 *     RtlCheckPortableOperatingSystem @ 0x140074C54 (RtlCheckPortableOperatingSystem.c)
 *     SepInitQuerySigningPolicyExt @ 0x1405C29A0 (SepInitQuerySigningPolicyExt.c)
 *     WheapCommitPolicy @ 0x1406FCD10 (WheapCommitPolicy.c)
 * Callees:
 *     ZwClose @ 0x14017F1D0 (ZwClose.c)
 *     RtlpGetRegistryHandle @ 0x1404AAC78 (RtlpGetRegistryHandle.c)
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
