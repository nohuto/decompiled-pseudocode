/*
 * XREFs of ?PropagateDirtyChildren@CVisual@@QEAAXXZ @ 0x18001CA30
 * Callers:
 *     ?SetDirtyFlags@CThumbnailVisual@@UEAAXK@Z @ 0x180012F30 (-SetDirtyFlags@CThumbnailVisual@@UEAAXK@Z.c)
 *     ?OnRepresentationUpdated@CSecondaryWindowRepresentation@@QEAAJXZ @ 0x1800341F4 (-OnRepresentationUpdated@CSecondaryWindowRepresentation@@QEAAJXZ.c)
 * Callees:
 *     ?SetDirtyChildren@CVisual@@UEAAXXZ @ 0x18001E280 (-SetDirtyChildren@CVisual@@UEAAXXZ.c)
 *     ?OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z @ 0x1800488B0 (-OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z.c)
 */

void __fastcall CVisual::PropagateDirtyChildren(CVisual *this)
{
  _BYTE *i; // rbx
  void (__fastcall *v2)(CVisual *__hidden); // rdi

  for ( i = (_BYTE *)*((_QWORD *)this + 3); i && (i[80] & 1) == 0; i = (_BYTE *)*((_QWORD *)i + 3) )
  {
    v2 = *(void (__fastcall **)(CVisual *__hidden))(*(_QWORD *)i + 32LL);
    if ( v2 == CVisual::SetDirtyChildren )
      CVisual::SetDirtyChildren((CVisual *)i);
    else
      v2((CVisual *)i);
  }
}
