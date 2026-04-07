/*
 * XREFs of ?Hide@CAnimatedGlassSheet@@UEAAXXZ @ 0x18007B5D0
 * Callers:
 *     ?DestroyWindow@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x18002EC90 (-DestroyWindow@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 *     ?StopAnimation@CAnimatedGlassSheet@@QEAAJXZ @ 0x18007BE6C (-StopAnimation@CAnimatedGlassSheet@@QEAAJXZ.c)
 * Callees:
 *     ?SetOpacity@CVisual@@QEAAXN@Z @ 0x18001D130 (-SetOpacity@CVisual@@QEAAXN@Z.c)
 *     ?OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z @ 0x1800488B0 (-OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z.c)
 */

void __fastcall CAnimatedGlassSheet::Hide(CAnimatedGlassSheet *this)
{
  __int64 v2; // rax
  int v3; // [rsp+30h] [rbp+8h] BYREF
  int v4; // [rsp+34h] [rbp+Ch]

  CVisual::SetOpacity(this, 0.0);
  v2 = *(_QWORD *)this;
  v3 = 0;
  v4 = 0;
  (*(void (__fastcall **)(CAnimatedGlassSheet *, int *))(v2 + 80))(this, &v3);
}
