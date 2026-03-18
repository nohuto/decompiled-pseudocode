/*
 * XREFs of ??1CManipulationTransform@@MEAA@XZ @ 0x18001676C
 * Callers:
 *     ??_GCManipulationTransform@@MEAAPEAXI@Z @ 0x180016430 (--_GCManipulationTransform@@MEAAPEAXI@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CManipulationTransform::~CManipulationTransform(CManipulationTransform *this)
{
  *(_QWORD *)this = &CManipulationTransform::`vftable'{for `CTransform'};
  *((_QWORD *)this + 13) = &CManipulationTransform::`vftable'{for `IExpressionSource'};
  CResource::~CResource(this);
}
