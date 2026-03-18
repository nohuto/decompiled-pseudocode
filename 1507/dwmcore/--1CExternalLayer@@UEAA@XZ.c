/*
 * XREFs of ??1CExternalLayer@@UEAA@XZ @ 0x180001B88
 * Callers:
 *     ??_ECFilterEffectLayer@@UEAAPEAXI@Z @ 0x180001800 (--_ECFilterEffectLayer@@UEAAPEAXI@Z.c)
 *     ??_GCClippedBitmapLayer@@UEAAPEAXI@Z @ 0x1800F1170 (--_GCClippedBitmapLayer@@UEAAPEAXI@Z.c)
 *     ??_ECColorTransformLayer@@UEAAPEAXI@Z @ 0x1800F11D0 (--_ECColorTransformLayer@@UEAAPEAXI@Z.c)
 *     ??_ECExternalLayer@@UEAAPEAXI@Z @ 0x1800F1230 (--_ECExternalLayer@@UEAAPEAXI@Z.c)
 *     ??_GCLinearInterpolationLayer@@UEAAPEAXI@Z @ 0x1800F12F0 (--_GCLinearInterpolationLayer@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
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
