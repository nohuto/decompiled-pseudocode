/*
 * XREFs of ??1CAccent@@MEAA@XZ @ 0x180036920
 * Callers:
 *     ??_GCAccent@@MEAAPEAXI@Z @ 0x1800355A0 (--_GCAccent@@MEAAPEAXI@Z.c)
 * Callees:
 *     ?_CleanupNonStaticsResources@CAccent@@IEAAXXZ @ 0x180036804 (-_CleanupNonStaticsResources@CAccent@@IEAAXXZ.c)
 */

void __fastcall CAccent::~CAccent(CAccent *this)
{
  *(_QWORD *)this = &CAccent::`vftable';
  CAccent::_CleanupNonStaticsResources(this);
  *(_QWORD *)this = &CCanvas::`vftable';
  CVisual::~CVisual(this);
}
