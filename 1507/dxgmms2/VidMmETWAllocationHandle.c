/*
 * XREFs of VidMmETWAllocationHandle @ 0x1C000E630
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
void *__fastcall VidMmETWAllocationHandle(VIDMM_GLOBAL *a1, unsigned int a2)
{
  return VIDMM_GLOBAL::ETWAllocationHandle(a1, a2);
}
