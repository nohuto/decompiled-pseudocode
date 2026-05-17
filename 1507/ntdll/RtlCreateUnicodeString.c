/*
 * XREFs of RtlCreateUnicodeString @ 0x180020DE0
 * Callers:
 *     LdrSetDllDirectory @ 0x180001540 (LdrSetDllDirectory.c)
 *     RtlpInitUnicodeStringUsingBuffer @ 0x18001F554 (RtlpInitUnicodeStringUsingBuffer.c)
 *     RtlConvertSidToUnicodeString @ 0x18001FD80 (RtlConvertSidToUnicodeString.c)
 *     LdrpLogDllStateEx2 @ 0x180036BEC (LdrpLogDllStateEx2.c)
 *     RtlCanonicalizeDomainName @ 0x18005D9C0 (RtlCanonicalizeDomainName.c)
 *     EtwpInitLoggerContext @ 0x1800769B4 (EtwpInitLoggerContext.c)
 *     EtwpAddInstanceIdToLogFileName @ 0x180076CEC (EtwpAddInstanceIdToLogFileName.c)
 *     LdrpMakeUnicodeStringFromPathElement @ 0x1800BD814 (LdrpMakeUnicodeStringFromPathElement.c)
 *     EtwpGenerateFileName @ 0x1800F4D30 (EtwpGenerateFileName.c)
 * Callees:
 *     NtdllpAllocateStringRoutine @ 0x180024358 (NtdllpAllocateStringRoutine.c)
 *     NtdllpFreeStringRoutine @ 0x18002A210 (NtdllpFreeStringRoutine.c)
 *     memmove @ 0x180098200 (memmove.c)
 */

char __fastcall RtlCreateUnicodeString(__int64 a1, _WORD *a2)
{
  __int64 v4; // rax
  unsigned int v5; // edi
  void *StringRoutine; // rax

  v4 = -1LL;
  do
    ++v4;
  while ( a2[v4] );
  v5 = 2 * v4 + 2;
  if ( (unsigned int)(2 * v4 + 1) > 0xFFFD )
    return 0;
  StringRoutine = (void *)NtdllpAllocateStringRoutine(v5, a2);
  *(_QWORD *)(a1 + 8) = StringRoutine;
  if ( !StringRoutine )
    return 0;
  *(_WORD *)(a1 + 2) = v5;
  memmove(StringRoutine, a2, v5);
  *(_WORD *)a1 = v5 - 2;
  return 1;
}
