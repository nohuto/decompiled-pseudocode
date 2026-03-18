/*
 * XREFs of ?SetRemarshalingFlags@CTurbulenceEffectMarshaler@DirectComposition@@MEAA_NXZ @ 0x1C00F0790
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DirectComposition::CTurbulenceEffectMarshaler::SetRemarshalingFlags(
        DirectComposition::CTurbulenceEffectMarshaler *this)
{
  __int64 result; // rax

  result = 0LL;
  *((_DWORD *)this + 22) = 0;
  if ( *((_DWORD *)this + 14)
    || *((float *)this + 24) != 0.0
    || *((float *)this + 25) != 0.0
    || *((float *)this + 26) != 0.0099999998
    || *((float *)this + 27) != 0.0099999998
    || *((float *)this + 28) != 0.0
    || *((float *)this + 29) != 0.0
    || *((_DWORD *)this + 30) != 1
    || *((_DWORD *)this + 31)
    || *((_DWORD *)this + 32)
    || *((_DWORD *)this + 33) )
  {
    return 1LL;
  }
  return result;
}
