/*
 * XREFs of ?SetRemarshalingFlags@CHueRotationEffectMarshaler@DirectComposition@@MEAA_NXZ @ 0x1C00F0440
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DirectComposition::CHueRotationEffectMarshaler::SetRemarshalingFlags(
        DirectComposition::CHueRotationEffectMarshaler *this)
{
  __int64 result; // rax

  result = 0LL;
  *((_DWORD *)this + 22) = 0;
  if ( *((_DWORD *)this + 14) || *((float *)this + 24) != 0.0 )
    return 1LL;
  return result;
}
