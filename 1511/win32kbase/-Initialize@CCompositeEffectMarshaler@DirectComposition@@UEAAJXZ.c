/*
 * XREFs of ?Initialize@CCompositeEffectMarshaler@DirectComposition@@UEAAJXZ @ 0x1C0003940
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DirectComposition::CCompositeEffectMarshaler::Initialize(
        DirectComposition::CCompositeEffectMarshaler *this)
{
  *((_DWORD *)this + 22) = 0;
  return DirectComposition::CFilterEffectMarshaler::Initialize(this);
}
