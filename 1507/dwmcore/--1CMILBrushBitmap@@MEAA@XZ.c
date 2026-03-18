/*
 * XREFs of ??1CMILBrushBitmap@@MEAA@XZ @ 0x18008128C
 * Callers:
 *     ??1CTileBrush@@MEAA@XZ @ 0x180085E70 (--1CTileBrush@@MEAA@XZ.c)
 *     ??_E?$LocalMILObject@VCMILBrushBitmap@@@@UEAAPEAXI@Z @ 0x18008DDE0 (--_E-$LocalMILObject@VCMILBrushBitmap@@@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??1CMILResourceCache@@IEAA@XZ @ 0x180056DCC (--1CMILResourceCache@@IEAA@XZ.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 */

void __fastcall CMILBrushBitmap::~CMILBrushBitmap(CMILBrushBitmap *this)
{
  __int64 v1; // rsi

  v1 = *((_QWORD *)this + 24);
  *(_QWORD *)this = &CMILBrushBitmap::`vftable';
  *((_QWORD *)this + 3) = &CMILBrushBitmap::`vftable'{for `CMILBrush'};
  *((_QWORD *)this + 7) = &CMILBrushBitmap::`vftable'{for `CMILResourceCache'};
  if ( v1 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v1 + 16LL))(v1);
  CMILResourceCache::~CMILResourceCache((CMILBrushBitmap *)((char *)this + 56));
  *(_QWORD *)this = &CMILCOMBase::`vftable';
}
