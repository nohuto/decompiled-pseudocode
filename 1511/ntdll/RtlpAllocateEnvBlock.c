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

PVOID __fastcall RtlpAllocateEnvBlock(SIZE_T Size)
{
  if ( Size > 0x7FFFFFFF )
    return 0LL;
  else
    return RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, Size);
}
