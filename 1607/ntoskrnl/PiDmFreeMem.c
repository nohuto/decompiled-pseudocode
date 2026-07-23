/*
 * XREFs of PiDmFreeMem @ 0x14062F980
 * Callers:
 *     PiDmObjectUpdateCachedObjectProperty @ 0x1404E2C6C (PiDmObjectUpdateCachedObjectProperty.c)
 * Callees:
 *     <none>
 */

void __fastcall PiDmFreeMem(void *a1)
{
  ExFreePoolWithTag(a1, 0x5A706E50u);
}
