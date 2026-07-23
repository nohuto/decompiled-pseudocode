/*
 * XREFs of xHalHaltSystem @ 0x140171C08
 * Callers:
 *     KeBugCheck2 @ 0x1401D3F18 (KeBugCheck2.c)
 *     KiBugCheckDebugBreak @ 0x1401D4DC8 (KiBugCheckDebugBreak.c)
 *     PopShutdownHandler @ 0x1403DF97C (PopShutdownHandler.c)
 * Callees:
 *     <none>
 */

void __noreturn xHalHaltSystem()
{
  while ( 1 )
    ;
}
