/*
 * XREFs of PoDiagFreeUsermodeStack @ 0x1404C48D8
 * Callers:
 *     ExCleanTimerResolutionRequest @ 0x1400F33B4 (ExCleanTimerResolutionRequest.c)
 * Callees:
 *     <none>
 */

void __fastcall PoDiagFreeUsermodeStack(void *a1)
{
  ExFreePoolWithTag(a1, 0x50455654u);
}
