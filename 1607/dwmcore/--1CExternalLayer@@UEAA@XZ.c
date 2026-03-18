/*
 * XREFs of ??1CExternalLayer@@UEAA@XZ @ 0x180013858
 * Callers:
 *     ??_GCLinearInterpolationLayer@@UEAAPEAXI@Z @ 0x1800129A0 (--_GCLinearInterpolationLayer@@UEAAPEAXI@Z.c)
 *     ??_ECFilterEffectLayer@@UEAAPEAXI@Z @ 0x180012F90 (--_ECFilterEffectLayer@@UEAAPEAXI@Z.c)
 *     ??1CHDRConvertLayer@@UEAA@XZ @ 0x180121360 (--1CHDRConvertLayer@@UEAA@XZ.c)
 *     ??_GCClippedBitmapLayer@@UEAAPEAXI@Z @ 0x1801214A0 (--_GCClippedBitmapLayer@@UEAAPEAXI@Z.c)
 *     ??_ECColorTransformLayer@@UEAAPEAXI@Z @ 0x1801214F0 (--_ECColorTransformLayer@@UEAAPEAXI@Z.c)
 *     ??_ECExternalLayer@@UEAAPEAXI@Z @ 0x180121620 (--_ECExternalLayer@@UEAAPEAXI@Z.c)
 *     ??_GCBlurLayer@@UEAAPEAXI@Z @ 0x18014EE20 (--_GCBlurLayer@@UEAAPEAXI@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CExternalLayer::~CExternalLayer(CExternalLayer *this)
{
  __int64 v2; // rcx

  *(_QWORD *)this = &CExternalLayer::`vftable';
  v2 = *((_QWORD *)this + 1);
  if ( v2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  *(_QWORD *)this = &CLayer::`vftable';
}
