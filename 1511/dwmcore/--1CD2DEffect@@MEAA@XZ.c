/*
 * XREFs of ??1CD2DEffect@@MEAA@XZ @ 0x18000FD78
 * Callers:
 *     ??_GCD2DPrimitiveProperties@@MEAAPEAXI@Z @ 0x18000FD20 (--_GCD2DPrimitiveProperties@@MEAAPEAXI@Z.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 */

void __fastcall CD2DEffect::~CD2DEffect(CD2DEffect *this)
{
  __int64 v1; // rsi

  v1 = *((_QWORD *)this + 13);
  *(_QWORD *)this = &CD2DEffect::`vftable'{for `CMILCOMBase'};
  *((_QWORD *)this + 2) = &CSecondaryD2DBitmap::`vftable'{for `IDeviceResource'};
  if ( v1 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v1 + 16LL))(v1);
  CD2DResource::~CD2DResource(this);
}
