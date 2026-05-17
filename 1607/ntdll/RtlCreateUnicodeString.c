/*
 * XREFs of RtlCreateUnicodeString @ 0x180056600
 * Callers:
 *     LdrSetDllDirectory @ 0x180001540 (LdrSetDllDirectory.c)
 *     LdrpLogDllStateEx2 @ 0x18000CA78 (LdrpLogDllStateEx2.c)
 *     RtlConvertSidToUnicodeString @ 0x1800149E0 (RtlConvertSidToUnicodeString.c)
 *     RtlpInitUnicodeStringUsingBuffer @ 0x180042FE4 (RtlpInitUnicodeStringUsingBuffer.c)
 *     EtwpInitLoggerContext @ 0x1800550E0 (EtwpInitLoggerContext.c)
 *     EtwpAddInstanceIdToLogFileName @ 0x1800554F0 (EtwpAddInstanceIdToLogFileName.c)
 *     RtlCanonicalizeDomainName @ 0x180055610 (RtlCanonicalizeDomainName.c)
 *     LdrpMakeUnicodeStringFromPathElement @ 0x1800D19DC (LdrpMakeUnicodeStringFromPathElement.c)
 *     EtwpGenerateFileName @ 0x1800FDE14 (EtwpGenerateFileName.c)
 * Callees:
 *     NtdllpFreeStringRoutine @ 0x1800094E0 (NtdllpFreeStringRoutine.c)
 *     NtdllpAllocateStringRoutine @ 0x180018BE8 (NtdllpAllocateStringRoutine.c)
 *     memmove @ 0x1800AC980 (memmove.c)
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
  StringRoutine = (void *)NtdllpAllocateStringRoutine(v5);
  *(_QWORD *)(a1 + 8) = StringRoutine;
  if ( !StringRoutine )
    return 0;
  *(_WORD *)(a1 + 2) = v5;
  memmove(StringRoutine, a2, v5);
  *(_WORD *)a1 = v5 - 2;
  return 1;
}
