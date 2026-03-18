/*
 * XREFs of PoDiagFreeUsermodeStack @ 0x1404D08E8
 * Callers:
 *     ExCleanTimerResolutionRequest @ 0x1400A4C58 (ExCleanTimerResolutionRequest.c)
 * Callees:
 *     <none>
 */

void __fastcall PoDiagFreeUsermodeStack(void *a1)
{
  ExFreePoolWithTag(a1, 0x50455654u);
}
