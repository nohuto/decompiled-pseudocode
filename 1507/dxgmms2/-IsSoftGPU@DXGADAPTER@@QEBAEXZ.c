/*
 * XREFs of ?IsSoftGPU@DXGADAPTER@@QEBAEXZ @ 0x1C0006AE4
 * Callers:
 *     ?ValidateSegmentForAcquisitionOfResource@VIDMM_GLOBAL@@IEAAJPEAU_VIDMM_GLOBAL_ALLOC@@IW4_VIDMM_PLACEMENT_RESTRICTION@@E@Z @ 0x1C003A854 (-ValidateSegmentForAcquisitionOfResource@VIDMM_GLOBAL@@IEAAJPEAU_VIDMM_GLOBAL_ALLOC@@IW4_VIDMM_P.c)
 * Callees:
 *     <none>
 */

bool __fastcall DXGADAPTER::IsSoftGPU(DXGADAPTER *this)
{
  return (*((_BYTE *)this + 284) & 4) != 0;
}
