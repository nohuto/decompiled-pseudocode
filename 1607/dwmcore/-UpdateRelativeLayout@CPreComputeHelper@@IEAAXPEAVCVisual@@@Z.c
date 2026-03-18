/*
 * XREFs of ?UpdateRelativeLayout@CPreComputeHelper@@IEAAXPEAVCVisual@@@Z @ 0x180113538
 * Callers:
 *     ?ProcessTransformParentStack@CLightPreComputeHelper@@EEAAJPEBVCVisualTree@@_K@Z @ 0x18018DA50 (-ProcessTransformParentStack@CLightPreComputeHelper@@EEAAJPEBVCVisualTree@@_K@Z.c)
 * Callees:
 *     ?ComputeLayoutSize@CVisual@@QEAA_NXZ @ 0x180050B44 (-ComputeLayoutSize@CVisual@@QEAA_NXZ.c)
 */

void __fastcall CPreComputeHelper::UpdateRelativeLayout(CPreComputeHelper *this, struct CVisual *a2)
{
  __int64 v2; // rax

  v2 = *((_QWORD *)a2 + 18);
  if ( !v2 || (*(_BYTE *)(v2 + 152) & 1) != 0 )
  {
    if ( CVisual::ComputeLayoutSize(a2) )
      *((_BYTE *)a2 + 152) |= 1u;
  }
}
