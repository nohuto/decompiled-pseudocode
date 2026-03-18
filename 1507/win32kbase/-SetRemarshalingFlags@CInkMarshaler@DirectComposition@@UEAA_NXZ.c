/*
 * XREFs of ?SetRemarshalingFlags@CInkMarshaler@DirectComposition@@UEAA_NXZ @ 0x1C008A090
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall DirectComposition::CInkMarshaler::SetRemarshalingFlags(DirectComposition::CInkMarshaler *this)
{
  bool result; // al

  *((_DWORD *)this + 4) &= 0xFFFFFE3F;
  result = 1;
  *((_DWORD *)this + 36) = 0;
  return result;
}
