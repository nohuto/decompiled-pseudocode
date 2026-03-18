/*
 * XREFs of xHalHaltSystem @ 0x140171708
 * Callers:
 *     KeBugCheck2 @ 0x1401D40EC (KeBugCheck2.c)
 *     KiBugCheckDebugBreak @ 0x1401D4F9C (KiBugCheckDebugBreak.c)
 *     PopShutdownHandler @ 0x1403DF97C (PopShutdownHandler.c)
 * Callees:
 *     <none>
 */

void __noreturn xHalHaltSystem()
{
  while ( 1 )
    ;
}
