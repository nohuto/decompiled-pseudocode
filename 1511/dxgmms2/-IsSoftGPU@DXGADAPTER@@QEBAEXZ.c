/*
 * XREFs of ?IsSoftGPU@DXGADAPTER@@QEBAEXZ @ 0x1C0011820
 * Callers:
 *     ?ValidateSegmentForAcquisitionOfResource@VIDMM_GLOBAL@@IEAAJPEAU_VIDMM_GLOBAL_ALLOC@@IW4_VIDMM_PLACEMENT_RESTRICTION@@E@Z @ 0x1C0049964 (-ValidateSegmentForAcquisitionOfResource@VIDMM_GLOBAL@@IEAAJPEAU_VIDMM_GLOBAL_ALLOC@@IW4_VIDMM_P.c)
 * Callees:
 *     <none>
 */

bool __fastcall DXGADAPTER::IsSoftGPU(DXGADAPTER *this)
{
  return (*((_BYTE *)this + 284) & 8) != 0;
}
