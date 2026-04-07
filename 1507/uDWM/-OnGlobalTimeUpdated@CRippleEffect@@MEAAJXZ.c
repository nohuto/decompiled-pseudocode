/*
 * XREFs of ?OnGlobalTimeUpdated@CRippleEffect@@MEAAJXZ @ 0x180088E50
 * Callers:
 *     <none>
 * Callees:
 *     ?OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z @ 0x1800488B0 (-OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z.c)
 */

__int64 __fastcall CRippleEffect::OnGlobalTimeUpdated(CRippleEffect *this)
{
  (*(void (__fastcall **)(CRippleEffect *, __int64))(*(_QWORD *)this + 24LL))(this, 0x4000LL);
  return 0LL;
}
