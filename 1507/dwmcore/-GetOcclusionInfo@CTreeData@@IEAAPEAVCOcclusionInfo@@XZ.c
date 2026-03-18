/*
 * XREFs of ?GetOcclusionInfo@CTreeData@@IEAAPEAVCOcclusionInfo@@XZ @ 0x1800DF5D0
 * Callers:
 *     ?GetOcclusionInfo@CVisual@@QEBAPEAVCOcclusionInfo@@PEBVCVisualTree@@@Z @ 0x1800DCDD8 (-GetOcclusionInfo@CVisual@@QEBAPEAVCOcclusionInfo@@PEBVCVisualTree@@@Z.c)
 * Callees:
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 */

struct COcclusionInfo *__fastcall CTreeData::GetOcclusionInfo(CTreeData *this)
{
  if ( !*((_QWORD *)this + 4) )
    *((_QWORD *)this + 4) = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 3) + 240LL))(*((_QWORD *)this + 3));
  return (struct COcclusionInfo *)*((_QWORD *)this + 4);
}
