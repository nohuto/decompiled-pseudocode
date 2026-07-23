/*
 * XREFs of PoDiagFreeUsermodeStack @ 0x1404B4388
 * Callers:
 *     ExCleanTimerResolutionRequest @ 0x1400A31D0 (ExCleanTimerResolutionRequest.c)
 * Callees:
 *     <none>
 */

void __fastcall PoDiagFreeUsermodeStack(void *a1)
{
  ExFreePoolWithTag(a1, 0x50455654u);
}
