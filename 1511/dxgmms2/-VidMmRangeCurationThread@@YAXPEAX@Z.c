/*
 * XREFs of ?VidMmRangeCurationThread@@YAXPEAX@Z @ 0x1C0059820
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall VidMmRangeCurationThread(volatile __int32 *a1)
{
  _InterlockedExchange(a1 + 161, 0);
  VIDMM_RECYCLE_HEAP_MGR::CurationThread((VIDMM_RECYCLE_HEAP_MGR *)a1);
}
