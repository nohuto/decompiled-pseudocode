/*
 * XREFs of PsGetCurrentThreadId @ 0x1400987B0
 * Callers:
 *     PoShutdownBugCheck @ 0x14066E998 (PoShutdownBugCheck.c)
 * Callees:
 *     <none>
 */

HANDLE PsGetCurrentThreadId(void)
{
  return KeGetCurrentThread()[1].KernelStack;
}
