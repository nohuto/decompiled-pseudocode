/*
 * XREFs of DestroyProcessHidRequests @ 0x14016F3E0
 * Callers:
 *     <none>
 * Callees:
 *     FreeProcessHidTable @ 0x14016F7C4 (FreeProcessHidTable.c)
 */

__int64 DestroyProcessHidRequests()
{
  return FreeProcessHidTable();
}
