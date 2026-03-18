/*
 * XREFs of ?SetRemarshalingFlags@CCompiledEffectMarshaler@DirectComposition@@UEAA_NXZ @ 0x1C00D8B00
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall DirectComposition::CCompiledEffectMarshaler::SetRemarshalingFlags(
        DirectComposition::CCompiledEffectMarshaler *this)
{
  bool result; // al

  *((_DWORD *)this + 4) &= 0xFFFFFF3F;
  result = 1;
  *((_DWORD *)this + 22) = 0;
  return result;
}
