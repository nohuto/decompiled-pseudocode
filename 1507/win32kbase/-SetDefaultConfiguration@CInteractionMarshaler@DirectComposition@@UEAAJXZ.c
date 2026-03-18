/*
 * XREFs of ?SetDefaultConfiguration@CInteractionMarshaler@DirectComposition@@UEAAJXZ @ 0x1C001CE90
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DirectComposition::CInteractionMarshaler::SetDefaultConfiguration(
        DirectComposition::CInteractionMarshaler *this)
{
  *((_BYTE *)this + 216) |= 1u;
  return DirectComposition::CInteractionMarshaler::CheckInputSinkTypes(this);
}
