/*
 * XREFs of ?OnRepresentationTypeUpdated@CIconicAnimatedVisual@@QEAAXXZ @ 0x18009CFD8
 * Callers:
 *     ?_AcceptBitmap@CImmersiveIconicBitmapRegistry@@AEAAXPEAVCWindowData@@PEAVCBitmapSource@@@Z @ 0x180079168 (-_AcceptBitmap@CImmersiveIconicBitmapRegistry@@AEAAXPEAVCWindowData@@PEAVCBitmapSource@@@Z.c)
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x18001CDE0 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z @ 0x18004EF10 (-OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z.c)
 */

void __fastcall CIconicAnimatedVisual::OnRepresentationTypeUpdated(CBaseObject **this)
{
  CBaseObject *v2; // rcx
  CBaseObject *v3; // rcx
  CBaseObject *v4; // rcx

  (*((void (__fastcall **)(CBaseObject **, __int64))*this + 3))(this, 128LL);
  v2 = this[36];
  if ( v2 )
  {
    CBaseObject::Release(v2);
    this[36] = 0LL;
  }
  v3 = this[40];
  if ( v3 )
  {
    CBaseObject::Release(v3);
    this[40] = 0LL;
  }
  v4 = this[34];
  if ( v4 )
  {
    CBaseObject::Release(v4);
    this[34] = 0LL;
  }
  CVisual::RenderRecursive((CVisual *)this);
}
