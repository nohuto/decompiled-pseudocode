/*
 * XREFs of RtlpAllocateEnvBlock @ 0x18005FC68
 * Callers:
 *     RtlpInitEnvironmentBlock @ 0x18005EE38 (RtlpInitEnvironmentBlock.c)
 *     RtlCreateEnvironmentEx @ 0x18005EF10 (RtlCreateEnvironmentEx.c)
 *     RtlSetEnvironmentVar @ 0x18005F2A0 (RtlSetEnvironmentVar.c)
 *     RtlSetEnvironmentStrings @ 0x180085F30 (RtlSetEnvironmentStrings.c)
 * Callees:
 *     <none>
 */

PVOID __fastcall RtlpAllocateEnvBlock(SIZE_T Size)
{
  if ( Size > 0x7FFFFFFF )
    return 0LL;
  else
    return RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, Size);
}
