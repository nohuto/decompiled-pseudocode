/*
 * XREFs of ?VidMmPageInDevice@@YAJPEAVVIDMM_GLOBAL@@PEAVVIDMM_DEVICE@@@Z @ 0x1C001D330
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall VidMmPageInDevice(struct VIDMM_GLOBAL *a1, struct VIDMM_DEVICE *a2)
{
  return VIDMM_GLOBAL::PageInDevice(a1, a2);
}
