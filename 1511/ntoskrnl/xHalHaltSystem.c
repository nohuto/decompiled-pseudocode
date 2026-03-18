/*
 * XREFs of xHalHaltSystem @ 0x140166DD0
 * Callers:
 *     KeBugCheck2 @ 0x1401C4F98 (KeBugCheck2.c)
 *     KiBugCheckDebugBreak @ 0x1401C5E48 (KiBugCheckDebugBreak.c)
 *     PopShutdownHandler @ 0x1403B2C90 (PopShutdownHandler.c)
 * Callees:
 *     <none>
 */

void __noreturn xHalHaltSystem()
{
  while ( 1 )
    ;
}
