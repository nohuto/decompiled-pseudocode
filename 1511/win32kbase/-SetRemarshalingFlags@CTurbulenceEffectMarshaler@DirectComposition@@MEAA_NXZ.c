/*
 * XREFs of ?SetRemarshalingFlags@CTurbulenceEffectMarshaler@DirectComposition@@MEAA_NXZ @ 0x1C00DE9F0
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
  *((_DWORD *)this + 20) = 0;
  if ( *((_DWORD *)this + 12)
    || *((float *)this + 22) != 0.0
    || *((float *)this + 23) != 0.0
    || *((float *)this + 24) != 0.0099999998
    || *((float *)this + 25) != 0.0099999998
    || *((float *)this + 26) != 0.0
    || *((float *)this + 27) != 0.0
    || *((_DWORD *)this + 28) != 1
    || *((_DWORD *)this + 29)
    || *((_DWORD *)this + 30)
    || *((_DWORD *)this + 31) )
  {
    return 1LL;
  }
  return result;
}
