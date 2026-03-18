/*
 * XREFs of ?SetRemarshalingFlags@CFilterEffectMarshaler@DirectComposition@@MEAA_NXZ @ 0x1C00EA150
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall DirectComposition::CFilterEffectMarshaler::SetRemarshalingFlags(
        DirectComposition::CFilterEffectMarshaler *this)
{
  bool v1; // zf

  v1 = *((_DWORD *)this + 14) == 0;
  *((_DWORD *)this + 22) = 0;
  return !v1;
}
