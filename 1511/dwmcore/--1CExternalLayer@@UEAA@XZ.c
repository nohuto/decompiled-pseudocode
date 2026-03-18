/*
 * XREFs of ??1CExternalLayer@@UEAA@XZ @ 0x180010BE4
 * Callers:
 *     ??_GCLinearInterpolationLayer@@UEAAPEAXI@Z @ 0x1800107A0 (--_GCLinearInterpolationLayer@@UEAAPEAXI@Z.c)
 *     ??_ECFilterEffectLayer@@UEAAPEAXI@Z @ 0x180019C30 (--_ECFilterEffectLayer@@UEAAPEAXI@Z.c)
 *     ??_GCClippedBitmapLayer@@UEAAPEAXI@Z @ 0x18010B020 (--_GCClippedBitmapLayer@@UEAAPEAXI@Z.c)
 *     ??_ECColorTransformLayer@@UEAAPEAXI@Z @ 0x18010B080 (--_ECColorTransformLayer@@UEAAPEAXI@Z.c)
 *     ??_ECExternalLayer@@UEAAPEAXI@Z @ 0x18010B0E0 (--_ECExternalLayer@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 */

void __fastcall CExternalLayer::~CExternalLayer(CExternalLayer *this)
{
  __int64 v1; // rsi

  v1 = *((_QWORD *)this + 1);
  *(_QWORD *)this = &CExternalLayer::`vftable';
  if ( v1 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v1 + 16LL))(v1);
  *(_QWORD *)this = &CLayer::`vftable';
}
