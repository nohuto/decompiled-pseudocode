/*
 * XREFs of CmCallbackReleaseKeyObjectIDEx @ 0x1404B48A4
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CmCallbackReleaseKeyObjectIDEx(void *a1)
{
  ExFreePoolWithTag(a1, 0x624E4D43u);
}
