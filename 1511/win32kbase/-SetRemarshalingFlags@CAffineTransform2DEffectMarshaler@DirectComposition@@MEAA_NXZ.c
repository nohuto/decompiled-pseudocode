/*
 * XREFs of ?SetRemarshalingFlags@CAffineTransform2DEffectMarshaler@DirectComposition@@MEAA_NXZ @ 0x1C00DF3C0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DirectComposition::CAffineTransform2DEffectMarshaler::SetRemarshalingFlags(
        DirectComposition::CAffineTransform2DEffectMarshaler *this)
{
  __int64 result; // rax
  float v2; // xmm2_4
  float v3; // xmm2_4
  float v4; // xmm2_4
  float v5; // xmm2_4
  float v6; // xmm2_4
  float v7; // xmm2_4
  float v8; // xmm2_4

  result = 0LL;
  *((_DWORD *)this + 20) = 0;
  if ( *((_DWORD *)this + 12) )
    return 1LL;
  if ( *((_DWORD *)this + 22) )
    return 1LL;
  if ( *((_DWORD *)this + 23) != 1 )
    return 1LL;
  v2 = *((float *)this + 24) - 1.0;
  if ( v2 > 0.0000099999997 )
    return 1LL;
  if ( v2 < -0.0000099999997 )
    return 1LL;
  v3 = *((float *)this + 25);
  if ( v3 > 0.0000099999997 )
    return 1LL;
  if ( v3 < -0.0000099999997 )
    return 1LL;
  v4 = *((float *)this + 26);
  if ( v4 > 0.0000099999997 )
    return 1LL;
  if ( v4 < -0.0000099999997 )
    return 1LL;
  v5 = *((float *)this + 27) - 1.0;
  if ( v5 > 0.0000099999997 )
    return 1LL;
  if ( v5 < -0.0000099999997 )
    return 1LL;
  v6 = *((float *)this + 28);
  if ( v6 > 0.0000099999997 )
    return 1LL;
  if ( v6 < -0.0000099999997 )
    return 1LL;
  v7 = *((float *)this + 29);
  if ( v7 > 0.0000099999997 )
    return 1LL;
  if ( v7 < -0.0000099999997 )
    return 1LL;
  v8 = *((float *)this + 30) - 1.0;
  if ( v8 > 0.0000099999997 || v8 < -0.0000099999997 )
    return 1LL;
  return result;
}
