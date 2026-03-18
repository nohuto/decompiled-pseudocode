/*
 * XREFs of ?SetRemarshalingFlags@CGaussianBlurEffectMarshaler@DirectComposition@@MEAA_NXZ @ 0x1C00DDDA0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DirectComposition::CGaussianBlurEffectMarshaler::SetRemarshalingFlags(
        DirectComposition::CGaussianBlurEffectMarshaler *this)
{
  __int64 result; // rax

  result = 0LL;
  *((_DWORD *)this + 20) = 0;
  if ( *((_DWORD *)this + 12) || *((float *)this + 22) != 3.0 || *((_DWORD *)this + 23) != 2 || *((_DWORD *)this + 24) )
    return 1LL;
  return result;
}
