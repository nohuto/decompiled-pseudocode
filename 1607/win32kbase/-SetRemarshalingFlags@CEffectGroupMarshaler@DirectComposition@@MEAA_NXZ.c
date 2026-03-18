/*
 * XREFs of ?SetRemarshalingFlags@CEffectGroupMarshaler@DirectComposition@@MEAA_NXZ @ 0x1C00EA130
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DirectComposition::CEffectGroupMarshaler::SetRemarshalingFlags(
        DirectComposition::CEffectGroupMarshaler *this)
{
  __int64 result; // rax

  if ( *((float *)this + 10) != 1.0 )
    return 1LL;
  result = 0LL;
  if ( *((_QWORD *)this + 6) )
    return 1LL;
  return result;
}
