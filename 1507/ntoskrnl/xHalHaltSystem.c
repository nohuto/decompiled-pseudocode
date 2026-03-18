/*
 * XREFs of xHalHaltSystem @ 0x140195B88
 * Callers:
 *     KeBugCheck2 @ 0x140201994 (KeBugCheck2.c)
 *     KiBugCheckDebugBreak @ 0x140202990 (KiBugCheckDebugBreak.c)
 *     PopShutdownHandler @ 0x140403F30 (PopShutdownHandler.c)
 * Callees:
 *     <none>
 */

void __noreturn xHalHaltSystem()
{
  while ( 1 )
    ;
}
