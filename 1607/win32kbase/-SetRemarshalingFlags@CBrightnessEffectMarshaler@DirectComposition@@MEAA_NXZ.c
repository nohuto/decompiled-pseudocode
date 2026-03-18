/*
 * XREFs of ?SetRemarshalingFlags@CBrightnessEffectMarshaler@DirectComposition@@MEAA_NXZ @ 0x1C00EFDA0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DirectComposition::CBrightnessEffectMarshaler::SetRemarshalingFlags(
        DirectComposition::CBrightnessEffectMarshaler *this)
{
  __int64 result; // rax

  result = 0LL;
  *((_DWORD *)this + 22) = 0;
  if ( *((_DWORD *)this + 14)
    || *((float *)this + 24) != 1.0
    || *((float *)this + 25) != 1.0
    || *((float *)this + 26) != 0.0
    || *((float *)this + 27) != 0.0 )
  {
    return 1LL;
  }
  return result;
}
