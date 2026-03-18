/*
 * XREFs of PoDiagFreeUsermodeStack @ 0x140559DE0
 * Callers:
 *     ExCleanTimerResolutionRequest @ 0x140130474 (ExCleanTimerResolutionRequest.c)
 * Callees:
 *     <none>
 */

void __fastcall PoDiagFreeUsermodeStack(void *a1)
{
  ExFreePoolWithTag(a1, 0x50455654u);
}
