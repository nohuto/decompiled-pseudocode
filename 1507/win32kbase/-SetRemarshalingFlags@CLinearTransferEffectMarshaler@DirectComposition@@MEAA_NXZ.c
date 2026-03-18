/*
 * XREFs of ?SetRemarshalingFlags@CLinearTransferEffectMarshaler@DirectComposition@@MEAA_NXZ @ 0x1C00DD020
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DirectComposition::CLinearTransferEffectMarshaler::SetRemarshalingFlags(
        DirectComposition::CLinearTransferEffectMarshaler *this)
{
  __int64 result; // rax
  char v2; // dl

  result = 0LL;
  *((_DWORD *)this + 22) = 0;
  if ( *((_DWORD *)this + 14) )
    return 1LL;
  if ( *((float *)this + 24) != 0.0 )
    return 1LL;
  if ( *((float *)this + 25) != 1.0 )
    return 1LL;
  v2 = *((_BYTE *)this + 128);
  if ( (v2 & 1) != 0
    || *((float *)this + 26) != 0.0
    || *((float *)this + 27) != 1.0
    || (v2 & 2) != 0
    || *((float *)this + 28) != 0.0
    || *((float *)this + 29) != 1.0
    || (v2 & 8) != 0
    || *((float *)this + 30) != 0.0
    || *((float *)this + 31) != 1.0
    || (v2 & 0x14) != 0 )
  {
    return 1LL;
  }
  return result;
}
