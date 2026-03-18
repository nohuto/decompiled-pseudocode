/*
 * XREFs of ?ReleaseShape@CpuClipShape@@AEAAXXZ @ 0x180073540
 * Callers:
 *     ?DrawPrimitiveGroup@CDrawingContext@@QEAAJPEAVCPrimitiveGroup@@PEAVCVisual@@_NPEAI@Z @ 0x18002B200 (-DrawPrimitiveGroup@CDrawingContext@@QEAAJPEAVCPrimitiveGroup@@PEAVCVisual@@_NPEAI@Z.c)
 *     ?Initialize@CpuClipShape@@QEAAJPEAVCScopedClipStack@@PEBVCMILMatrix@@@Z @ 0x1800735A4 (-Initialize@CpuClipShape@@QEAAJPEAVCScopedClipStack@@PEBVCMILMatrix@@@Z.c)
 *     ??1CpuClipShape@@QEAA@XZ @ 0x1800DF55C (--1CpuClipShape@@QEAA@XZ.c)
 * Callees:
 *     ??_ECComplexShape@@UEAAPEAXI@Z @ 0x18005B970 (--_ECComplexShape@@UEAAPEAXI@Z.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 */

void __fastcall CpuClipShape::ReleaseShape(CComplexShape **this)
{
  CComplexShape *(__fastcall *v2)(CComplexShape *, char); // rsi

  if ( *((_BYTE *)this + 40) && *this )
  {
    v2 = **(CComplexShape *(__fastcall ***)(CComplexShape *, char))*this;
    if ( v2 == CComplexShape::`vector deleting destructor' )
      CComplexShape::`vector deleting destructor'(*this, 1);
    else
      v2(*this, 1);
  }
  *this = 0LL;
  *((_BYTE *)this + 40) = 0;
}
