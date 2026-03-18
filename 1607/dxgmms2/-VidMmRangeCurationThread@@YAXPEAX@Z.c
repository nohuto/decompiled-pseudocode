/*
 * XREFs of ?VidMmRangeCurationThread@@YAXPEAX@Z @ 0x1C005D910
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall VidMmRangeCurationThread(volatile __int32 *a1)
{
  _InterlockedExchange(a1 + 275, 0);
  VIDMM_RECYCLE_HEAP_MGR::CurationThread((VIDMM_RECYCLE_HEAP_MGR *)a1);
}
