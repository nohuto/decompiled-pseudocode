/*
 * XREFs of ?PinAllocation@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_MULTI_ALLOC@@PEAKPEAT_LARGE_INTEGER@@@Z @ 0x1C00510B8
 * Callers:
 *     VidMmPinAllocation @ 0x1C000E710 (VidMmPinAllocation.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall VIDMM_GLOBAL::PinAllocation(
        VIDMM_GLOBAL *this,
        struct _VIDMM_MULTI_ALLOC *a2,
        unsigned int *a3,
        union _LARGE_INTEGER *a4)
{
  if ( a3 )
    *a3 = 0;
  if ( a4 )
    a4->QuadPart = 0LL;
  return VIDMM_GLOBAL::PinOneAllocation(this, a2);
}
