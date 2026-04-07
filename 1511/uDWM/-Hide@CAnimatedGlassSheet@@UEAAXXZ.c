/*
 * XREFs of ?Hide@CAnimatedGlassSheet@@UEAAXXZ @ 0x180083000
 * Callers:
 *     ?DestroyWindow@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x180031E10 (-DestroyWindow@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 *     ?StopAnimation@CAnimatedGlassSheet@@QEAAJXZ @ 0x18008389C (-StopAnimation@CAnimatedGlassSheet@@QEAAJXZ.c)
 * Callees:
 *     ?SetOpacity@CVisual@@QEAAXN@Z @ 0x180022540 (-SetOpacity@CVisual@@QEAAXN@Z.c)
 *     ?OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z @ 0x18004EF10 (-OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z.c)
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
