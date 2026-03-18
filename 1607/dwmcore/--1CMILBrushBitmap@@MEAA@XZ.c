/*
 * XREFs of ??1CMILBrushBitmap@@MEAA@XZ @ 0x180084528
 * Callers:
 *     ??1CTileLegacyMilBrush@@MEAA@XZ @ 0x180024714 (--1CTileLegacyMilBrush@@MEAA@XZ.c)
 *     ??_E?$LocalMILObject@VCMILBrushBitmap@@@@UEAAPEAXI@Z @ 0x1800844A0 (--_E-$LocalMILObject@VCMILBrushBitmap@@@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??1CMILResourceCache@@IEAA@XZ @ 0x180083394 (--1CMILResourceCache@@IEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CMILBrushBitmap::~CMILBrushBitmap(CMILBrushBitmap *this, __int64 a2, __int64 a3)
{
  __int64 v4; // rcx

  *(_QWORD *)this = &CMILBrushBitmap::`vftable';
  *((_QWORD *)this + 3) = &CMILBrushBitmap::`vftable'{for `CMILBrush'};
  *((_QWORD *)this + 7) = &CMILBrushBitmap::`vftable'{for `CMILResourceCache'};
  v4 = *((_QWORD *)this + 25);
  if ( v4 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  CMILResourceCache::~CMILResourceCache((CMILBrushBitmap *)((char *)this + 56), a2, a3);
  *(_QWORD *)this = &CMILCOMBase::`vftable';
}
