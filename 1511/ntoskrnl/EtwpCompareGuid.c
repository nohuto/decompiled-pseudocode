/*
 * XREFs of EtwpCompareGuid @ 0x1404AD8B4
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

int __fastcall EtwpCompareGuid(const void *a1, const void *a2)
{
  return memcmp(a1, a2, 0x10uLL);
}
