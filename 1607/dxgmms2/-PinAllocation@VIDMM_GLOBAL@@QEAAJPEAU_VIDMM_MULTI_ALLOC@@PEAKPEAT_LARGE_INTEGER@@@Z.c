/*
 * XREFs of ?PinAllocation@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_MULTI_ALLOC@@PEAKPEAT_LARGE_INTEGER@@@Z @ 0x1C0069190
 * Callers:
 *     VidMmPinAllocation @ 0x1C0012A70 (VidMmPinAllocation.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall VIDMM_GLOBAL::PinAllocation(VIDMM_GLOBAL *this, VIDMM_DEVICE **a2, __int64 a3, __int64 a4)
{
  if ( a3 )
    *(_DWORD *)a3 = 0;
  if ( a4 )
    *(_QWORD *)a4 = 0LL;
  return VIDMM_GLOBAL::PinOneAllocation(this, a2, a3, a4);
}
