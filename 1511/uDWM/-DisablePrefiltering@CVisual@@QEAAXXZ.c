/*
 * XREFs of ?DisablePrefiltering@CVisual@@QEAAXXZ @ 0x180023D20
 * Callers:
 *     ?Initialize@CAnimatedTransitionVisual@@MEAAJQEAUMIL_CHANNEL__@@@Z @ 0x18000DE70 (-Initialize@CAnimatedTransitionVisual@@MEAAJQEAUMIL_CHANNEL__@@@Z.c)
 *     ?Initialize@CTopLevelWindow3D@@MEAAJQEAUMIL_CHANNEL__@@@Z @ 0x1800361D0 (-Initialize@CTopLevelWindow3D@@MEAAJQEAUMIL_CHANNEL__@@@Z.c)
 * Callees:
 *     ?SetDirtyFlags@CVisual@@UEAAXK@Z @ 0x180022D90 (-SetDirtyFlags@CVisual@@UEAAXK@Z.c)
 *     ?OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z @ 0x18004EF10 (-OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z.c)
 */

void __fastcall CVisual::DisablePrefiltering(CVisual *this)
{
  __int64 v1; // rax
  void (__fastcall *v2)(CVisual *, int); // rdi

  if ( (*((_BYTE *)this + 188) & 1) == 0 )
  {
    *((_DWORD *)this + 47) |= 1u;
    v1 = *(_QWORD *)this;
    *((_DWORD *)this + 51) = 1;
    v2 = *(void (__fastcall **)(CVisual *, int))(v1 + 24);
    if ( v2 == CVisual::SetDirtyFlags )
      CVisual::SetDirtyFlags(this, 64);
    else
      v2(this, 64);
  }
}
