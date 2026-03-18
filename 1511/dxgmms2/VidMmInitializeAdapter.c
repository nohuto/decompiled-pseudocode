/*
 * XREFs of VidMmInitializeAdapter @ 0x1C0014F60
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
struct VIDMM_GLOBAL *__fastcall VidMmInitializeAdapter(struct ADAPTER_RENDER *a1)
{
  return VidMmiInit(a1);
}
