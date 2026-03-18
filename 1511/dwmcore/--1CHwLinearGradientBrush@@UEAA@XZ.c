/*
 * XREFs of ??1CHwLinearGradientBrush@@UEAA@XZ @ 0x1801513C0
 * Callers:
 *     ??_ECHwLinearGradientBrush@@UEAAPEAXI@Z @ 0x180150F1C (--_ECHwLinearGradientBrush@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 */

void __fastcall CHwLinearGradientBrush::~CHwLinearGradientBrush(CHwLinearGradientBrush *this)
{
  __int64 v1; // rsi
  __int64 v3; // rsi

  v1 = *((_QWORD *)this + 12);
  *(_QWORD *)this = &CHwLinearGradientBrush::`vftable'{for `IMILCacheableResource'};
  *((_QWORD *)this + 1) = &CHwLinearGradientBrush::`vftable'{for `CMILPoolResource'};
  *((_QWORD *)this + 4) = &CHwLinearGradientBrush::`vftable'{for `CHwBrush'};
  if ( v1 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v1 + 8LL))(v1);
  v3 = *((_QWORD *)this + 13);
  if ( v3 )
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v3 + 16LL))(*((_QWORD *)this + 13));
  CHwCacheablePoolBrush::~CHwCacheablePoolBrush(this);
}
