/*
 * XREFs of DbgPrompt @ 0x1800D3770
 * Callers:
 *     LdrpGenericExceptionFilter @ 0x1800CB5E8 (LdrpGenericExceptionFilter.c)
 *     RtlAssert @ 0x1800DBA70 (RtlAssert.c)
 * Callees:
 *     DebugPrompt @ 0x1800A88B0 (DebugPrompt.c)
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
