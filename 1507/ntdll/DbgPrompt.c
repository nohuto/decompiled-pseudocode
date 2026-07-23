/*
 * XREFs of DbgPrompt @ 0x1800CACC0
 * Callers:
 *     LdrpGenericExceptionFilter @ 0x1800C0F28 (LdrpGenericExceptionFilter.c)
 *     RtlAssert @ 0x1800D3780 (RtlAssert.c)
 * Callees:
 *     DebugPrompt @ 0x180095520 (DebugPrompt.c)
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
