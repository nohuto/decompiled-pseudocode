/*
 * XREFs of ?CancelCrossfade@CButton@@QEAAJXZ @ 0x18007402C
 * Callers:
 *     ?CloneVisualTreeForLivePreview@CTopLevelWindow@@QEAAJ_N00PEAPEAV1@@Z @ 0x18000F4D8 (-CloneVisualTreeForLivePreview@CTopLevelWindow@@QEAAJ_N00PEAPEAV1@@Z.c)
 * Callees:
 *     ?RenderRecursive@CVisual@@QEAAJXZ @ 0x1800223A0 (-RenderRecursive@CVisual@@QEAAJXZ.c)
 *     ?SetDirtyFlags@CVisual@@UEAAXK@Z @ 0x180022D90 (-SetDirtyFlags@CVisual@@UEAAXK@Z.c)
 */

__int64 __fastcall CButton::CancelCrossfade(CButton *this)
{
  __int64 result; // rax

  result = 0LL;
  if ( *((_QWORD *)this + 52) )
  {
    *((_BYTE *)this + 304) |= 0x40u;
    CVisual::SetDirtyFlags(this, 0x10000);
    return CVisual::RenderRecursive(this);
  }
  return result;
}
