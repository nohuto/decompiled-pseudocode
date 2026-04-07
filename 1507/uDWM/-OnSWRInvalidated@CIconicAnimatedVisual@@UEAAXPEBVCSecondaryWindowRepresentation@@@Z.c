/*
 * XREFs of ?OnSWRInvalidated@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z @ 0x18009B9A0
 * Callers:
 *     <none>
 * Callees:
 *     ?OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z @ 0x1800488B0 (-OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z.c)
 */

void __fastcall CIconicAnimatedVisual::OnSWRInvalidated(
        CIconicAnimatedVisual *this,
        const struct CSecondaryWindowRepresentation *a2)
{
  (*(void (__fastcall **)(char *, __int64))(*((_QWORD *)this - 33) + 24LL))((char *)this - 264, 128LL);
}
