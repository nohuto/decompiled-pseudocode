/*
 * XREFs of ?SetClipRegion@CAccent@@QEAAXPEAVCResource@@@Z @ 0x1800363DC
 * Callers:
 *     ?UpdateAccentBlurRect@CAccent@@QEAAXAEBUtagRECT@@@Z @ 0x180007408 (-UpdateAccentBlurRect@CAccent@@QEAAXAEBUtagRECT@@@Z.c)
 *     ?OnClipUpdated@CTopLevelWindow@@QEAAXXZ @ 0x180026E90 (-OnClipUpdated@CTopLevelWindow@@QEAAXXZ.c)
 *     ?UpdateAccentPolicy@CAccent@@QEAAJPEBUtagRECT@@PEBUACCENT_POLICY@@PEAVCResource@@@Z @ 0x180035BDC (-UpdateAccentPolicy@CAccent@@QEAAJPEBUtagRECT@@PEBUACCENT_POLICY@@PEAVCResource@@@Z.c)
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180019B60 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?SetDirtyFlags@CVisual@@UEAAXK@Z @ 0x18001FFF0 (-SetDirtyFlags@CVisual@@UEAAXK@Z.c)
 */

void __fastcall CAccent::SetClipRegion(CBaseObject **this, struct CResource *a2)
{
  CBaseObject *v4; // rcx

  if ( a2 != this[46] )
  {
    CVisual::SetDirtyFlags((CVisual *)this, 0x8000);
    v4 = this[46];
    if ( v4 )
      CBaseObject::Release(v4);
    this[46] = a2;
    if ( a2 )
      _InterlockedIncrement((volatile signed __int32 *)a2 + 2);
  }
}
