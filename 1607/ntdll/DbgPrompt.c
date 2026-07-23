/*
 * XREFs of DbgPrompt @ 0x1800DBAB0
 * Callers:
 *     LdrpGenericExceptionFilter @ 0x1800D2DE4 (LdrpGenericExceptionFilter.c)
 *     RtlAssert @ 0x1800E4D90 (RtlAssert.c)
 * Callees:
 *     DebugPrompt @ 0x1800A9CF0 (DebugPrompt.c)
 */

ULONG __cdecl DbgPrompt(PCCH Prompt, PCH Response, ULONG Length)
{
  __int64 v3; // rax

  v3 = -1LL;
  do
    ++v3;
  while ( Prompt[v3] );
  return DebugPrompt();
}
