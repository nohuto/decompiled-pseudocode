/*
 * XREFs of ?OnMouseLeave@CButton@@UEAAXXZ @ 0x180007090
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CButton::OnMouseLeave(CButton *this)
{
  *((_BYTE *)this + 304) &= 0xF1u;
  CVisual::SetDirtyFlags(this, 0x8000u);
}
