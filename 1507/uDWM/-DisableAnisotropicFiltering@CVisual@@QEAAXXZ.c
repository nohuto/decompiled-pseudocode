/*
 * XREFs of ?DisableAnisotropicFiltering@CVisual@@QEAAXXZ @ 0x18001E950
 * Callers:
 *     ?Initialize@CTopLevelWindow3D@@MEAAJQEAUMIL_CHANNEL__@@@Z @ 0x180027EE0 (-Initialize@CTopLevelWindow3D@@MEAAJQEAUMIL_CHANNEL__@@@Z.c)
 *     ?Initialize@CAnimatedTransitionVisual@@MEAAJQEAUMIL_CHANNEL__@@@Z @ 0x180038E10 (-Initialize@CAnimatedTransitionVisual@@MEAAJQEAUMIL_CHANNEL__@@@Z.c)
 * Callees:
 *     ?SetDirtyFlags@CVisual@@UEAAXK@Z @ 0x18001D980 (-SetDirtyFlags@CVisual@@UEAAXK@Z.c)
 *     ?OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z @ 0x1800488B0 (-OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z.c)
 */

void __fastcall CVisual::DisableAnisotropicFiltering(CVisual *this)
{
  void (__fastcall *v1)(CVisual *, int); // rdi

  if ( (*((_DWORD *)this + 47) & 0x100) == 0 )
  {
    *((_DWORD *)this + 47) |= 0x100u;
    v1 = *(void (__fastcall **)(CVisual *, int))(*(_QWORD *)this + 24LL);
    if ( v1 == CVisual::SetDirtyFlags )
      CVisual::SetDirtyFlags(this, 64);
    else
      v1(this, 64);
  }
}
