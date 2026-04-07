/*
 * XREFs of ??1CScreenRotation@@MEAA@XZ @ 0x1800913FC
 * Callers:
 *     ??_ECScreenRotation@@MEAAPEAXI@Z @ 0x18007F030 (--_ECScreenRotation@@MEAAPEAXI@Z.c)
 * Callees:
 *     ?Stop@CScreenRotation@@QEAAX_N@Z @ 0x180092438 (-Stop@CScreenRotation@@QEAAX_N@Z.c)
 */

void __fastcall CScreenRotation::~CScreenRotation(CScreenRotation *this)
{
  *(_QWORD *)this = &CScreenRotation::`vftable'{for `CVisual'};
  *((_QWORD *)this + 33) = &CScreenRotation::`vftable'{for `IAnimationListener'};
  CScreenRotation::Stop(this, 0);
  CVisual::~CVisual(this);
}
