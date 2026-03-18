/*
 * XREFs of PsGetCurrentThreadId @ 0x1400DE740
 * Callers:
 *     PoShutdownBugCheck @ 0x14063650C (PoShutdownBugCheck.c)
 * Callees:
 *     <none>
 */

HANDLE PsGetCurrentThreadId(void)
{
  return KeGetCurrentThread()[1].KernelStack;
}
