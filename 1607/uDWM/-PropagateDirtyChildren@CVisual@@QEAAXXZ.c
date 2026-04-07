/*
 * XREFs of ?PropagateDirtyChildren@CVisual@@QEAAXXZ @ 0x180020D60
 * Callers:
 *     ?Translate2D@CAnimatedTransitionVisual@@UEAAJPEBUTA_TRANSFORM_2D@@@Z @ 0x180014980 (-Translate2D@CAnimatedTransitionVisual@@UEAAJPEBUTA_TRANSFORM_2D@@@Z.c)
 *     ?SetDirtyFlags@CThumbnailVisual@@UEAAXK@Z @ 0x180015FA0 (-SetDirtyFlags@CThumbnailVisual@@UEAAXK@Z.c)
 *     ?SetVisualStates@CButton@@QEAAJAEBVCBitmapSourceArray@@0PEAVCBitmapSource@@M@Z @ 0x18001C1A0 (-SetVisualStates@CButton@@QEAAJAEBVCBitmapSourceArray@@0PEAVCBitmapSource@@M@Z.c)
 *     ?ValidateVisual@CTopLevelWindow3D@@UEAAJXZ @ 0x180029B30 (-ValidateVisual@CTopLevelWindow3D@@UEAAJXZ.c)
 *     ?OnRepresentationUpdated@CSecondaryWindowRepresentation@@QEAAJXZ @ 0x180034A0C (-OnRepresentationUpdated@CSecondaryWindowRepresentation@@QEAAJXZ.c)
 * Callees:
 *     ?SetDirtyChildren@CVisual@@UEAAXXZ @ 0x180020590 (-SetDirtyChildren@CVisual@@UEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800505E0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CVisual::PropagateDirtyChildren(CVisual *this)
{
  _BYTE *i; // rbx
  void (__fastcall *v2)(CVisual *); // rax

  for ( i = (_BYTE *)*((_QWORD *)this + 3); i && (i[80] & 1) == 0; i = (_BYTE *)*((_QWORD *)i + 3) )
  {
    v2 = *(void (__fastcall **)(CVisual *))(*(_QWORD *)i + 32LL);
    if ( v2 == CVisual::SetDirtyChildren )
      CVisual::SetDirtyChildren((CVisual *)i);
    else
      v2((CVisual *)i);
  }
}
