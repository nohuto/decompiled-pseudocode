/*
 * XREFs of ??1CMILBrushBitmap@@MEAA@XZ @ 0x180089B08
 * Callers:
 *     ??1CTileLegacyMilBrush@@MEAA@XZ @ 0x18005CE6C (--1CTileLegacyMilBrush@@MEAA@XZ.c)
 *     ??_E?$LocalMILObject@VCMILBrushBitmap@@@@UEAAPEAXI@Z @ 0x1800895F0 (--_E-$LocalMILObject@VCMILBrushBitmap@@@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ??1CMILResourceCache@@IEAA@XZ @ 0x18008A754 (--1CMILResourceCache@@IEAA@XZ.c)
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
