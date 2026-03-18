/*
 * XREFs of ?GetEffectAlpha@CVisual@@QEBAMXZ @ 0x1801097CC
 * Callers:
 *     ?GetAlphaMode@CHwndBitmap@@UEAA?AW4DXGI_ALPHA_MODE@@XZ @ 0x180142CC0 (-GetAlphaMode@CHwndBitmap@@UEAA-AW4DXGI_ALPHA_MODE@@XZ.c)
 * Callees:
 *     ?GetEffectInternal@CVisual@@QEBAPEAVCEffect@@XZ @ 0x18004ED08 (-GetEffectInternal@CVisual@@QEBAPEAVCEffect@@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

float __fastcall CVisual::GetEffectAlpha(CVisual *this)
{
  float v1; // xmm6_4
  float v2; // xmm7_4
  double *EffectInternal; // rbx

  v1 = FLOAT_1_0;
  v2 = FLOAT_1_0;
  if ( (*(_DWORD *)(*((_QWORD *)this + 34) + 4LL) & 0x8000000) == 0 )
    return fmaxf(v2, 0.0);
  EffectInternal = (double *)CVisual::GetEffectInternal(this);
  if ( !(*(unsigned __int8 (__fastcall **)(double *, __int64))(*(_QWORD *)EffectInternal + 48LL))(EffectInternal, 8LL) )
    return fmaxf(v2, 0.0);
  v2 = EffectInternal[17];
  if ( v2 <= 1.0 )
    return fmaxf(v2, 0.0);
  return v1;
}
