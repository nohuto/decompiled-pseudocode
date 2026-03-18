/*
 * XREFs of PiDmFreeMem @ 0x14062F8CC
 * Callers:
 *     PiDmObjectUpdateCachedObjectProperty @ 0x1404FFCDC (PiDmObjectUpdateCachedObjectProperty.c)
 * Callees:
 *     <none>
 */

void __fastcall PiDmFreeMem(void *a1)
{
  ExFreePoolWithTag(a1, 0x5A706E50u);
}
