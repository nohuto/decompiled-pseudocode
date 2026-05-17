/*
 * XREFs of RtlpAllocateEnvBlock @ 0x18004E604
 * Callers:
 *     RtlpInitEnvironmentBlock @ 0x18004D7D8 (RtlpInitEnvironmentBlock.c)
 *     RtlCreateEnvironmentEx @ 0x18004D8B0 (RtlCreateEnvironmentEx.c)
 *     RtlSetEnvironmentVar @ 0x18004DC40 (RtlSetEnvironmentVar.c)
 *     RtlSetEnvironmentStrings @ 0x180081BC0 (RtlSetEnvironmentStrings.c)
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
