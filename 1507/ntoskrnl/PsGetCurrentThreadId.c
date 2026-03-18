/*
 * XREFs of PsGetCurrentThreadId @ 0x140111580
 * Callers:
 *     PoShutdownBugCheck @ 0x1406B5E1C (PoShutdownBugCheck.c)
 * Callees:
 *     <none>
 */

HANDLE PsGetCurrentThreadId(void)
{
  return KeGetCurrentThread()[1].KernelStack;
}
