/*
 * XREFs of DbgPrompt @ 0x1800DB9F0
 * Callers:
 *     LdrpGenericExceptionFilter @ 0x1800D2D24 (LdrpGenericExceptionFilter.c)
 *     RtlAssert @ 0x1800E4CD0 (RtlAssert.c)
 * Callees:
 *     DebugPrompt @ 0x1800A9CF0 (DebugPrompt.c)
 */

__int64 __fastcall DbgPrompt(__int64 a1)
{
  __int64 v1; // rax

  v1 = -1LL;
  do
    ++v1;
  while ( *(_BYTE *)(a1 + v1) );
  return DebugPrompt();
}
