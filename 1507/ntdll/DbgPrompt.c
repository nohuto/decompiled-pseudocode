/*
 * XREFs of DbgPrompt @ 0x1800CACC0
 * Callers:
 *     LdrpGenericExceptionFilter @ 0x1800C0F28 (LdrpGenericExceptionFilter.c)
 *     RtlAssert @ 0x1800D3780 (RtlAssert.c)
 * Callees:
 *     DebugPrompt @ 0x180095520 (DebugPrompt.c)
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
