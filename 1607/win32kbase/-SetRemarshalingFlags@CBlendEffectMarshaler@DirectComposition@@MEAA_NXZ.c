/*
 * XREFs of ?SetRemarshalingFlags@CBlendEffectMarshaler@DirectComposition@@MEAA_NXZ @ 0x1C00F0ED0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DirectComposition::CBlendEffectMarshaler::SetRemarshalingFlags(
        DirectComposition::CBlendEffectMarshaler *this)
{
  __int64 result; // rax

  result = 0LL;
  *((_DWORD *)this + 22) = 0;
  if ( *((_DWORD *)this + 14) || *((_DWORD *)this + 24) )
    return 1LL;
  return result;
}
