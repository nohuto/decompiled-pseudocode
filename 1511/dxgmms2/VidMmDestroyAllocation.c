/*
 * XREFs of VidMmDestroyAllocation @ 0x1C0011AC0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall VidMmDestroyAllocation(VIDMM_GLOBAL **a1, VIDMM_GLOBAL *a2, struct _VIDMM_MULTI_GLOBAL_ALLOC *a3)
{
  struct VIDMM_DEVICE *v4; // rdx
  VIDMM_GLOBAL *v5; // rcx

  if ( a1 )
  {
    v4 = (struct VIDMM_DEVICE *)a1;
    v5 = *a1;
  }
  else
  {
    v4 = 0LL;
    v5 = a2;
  }
  VIDMM_GLOBAL::DestroyAllocation(v5, v4, a3);
}
