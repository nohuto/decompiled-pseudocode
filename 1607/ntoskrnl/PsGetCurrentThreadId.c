/*
 * XREFs of PsGetCurrentThreadId @ 0x140098FB0
 * Callers:
 *     PoShutdownBugCheck @ 0x14066E8B4 (PoShutdownBugCheck.c)
 * Callees:
 *     <none>
 */

HANDLE PsGetCurrentThreadId(void)
{
  return KeGetCurrentThread()[1].KernelStack;
}
