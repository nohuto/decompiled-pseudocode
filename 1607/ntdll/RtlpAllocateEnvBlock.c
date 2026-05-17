/*
 * XREFs of RtlpAllocateEnvBlock @ 0x18005FC78
 * Callers:
 *     RtlpInitEnvironmentBlock @ 0x18005EE48 (RtlpInitEnvironmentBlock.c)
 *     RtlCreateEnvironmentEx @ 0x18005EF20 (RtlCreateEnvironmentEx.c)
 *     RtlSetEnvironmentVar @ 0x18005F2B0 (RtlSetEnvironmentVar.c)
 *     RtlSetEnvironmentStrings @ 0x180085F40 (RtlSetEnvironmentStrings.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlpAllocateEnvBlock(unsigned __int64 a1)
{
  if ( a1 > 0x7FFFFFFF )
    return 0LL;
  else
    return RtlAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, a1);
}
