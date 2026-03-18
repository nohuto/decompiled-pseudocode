/*
 * XREFs of ?SetRemarshalingFlags@CFloodEffectMarshaler@DirectComposition@@MEAA_NXZ @ 0x1C00DEBE0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DirectComposition::CFloodEffectMarshaler::SetRemarshalingFlags(
        DirectComposition::CFloodEffectMarshaler *this)
{
  __int64 result; // rax

  result = 0LL;
  *((_DWORD *)this + 20) = 0;
  if ( *((_DWORD *)this + 12)
    || *((float *)this + 22) != 0.0
    || *((float *)this + 23) != 0.0
    || *((float *)this + 24) != 0.0
    || 1.0 != *((float *)this + 25) )
  {
    return 1LL;
  }
  return result;
}
