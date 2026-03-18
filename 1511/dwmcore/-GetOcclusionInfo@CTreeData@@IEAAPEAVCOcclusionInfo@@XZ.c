/*
 * XREFs of ?GetOcclusionInfo@CTreeData@@IEAAPEAVCOcclusionInfo@@XZ @ 0x1800FCFF0
 * Callers:
 *     ?GetOcclusionInfo@CVisual@@QEBAPEAVCOcclusionInfo@@PEBVCVisualTree@@@Z @ 0x1800F7A84 (-GetOcclusionInfo@CVisual@@QEBAPEAVCOcclusionInfo@@PEBVCVisualTree@@@Z.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 */

struct COcclusionInfo *__fastcall CTreeData::GetOcclusionInfo(CTreeData *this)
{
  if ( !*((_QWORD *)this + 4) )
    *((_QWORD *)this + 4) = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 3) + 248LL))(*((_QWORD *)this + 3));
  return (struct COcclusionInfo *)*((_QWORD *)this + 4);
}
