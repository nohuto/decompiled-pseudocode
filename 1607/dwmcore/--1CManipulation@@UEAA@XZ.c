/*
 * XREFs of ??1CManipulation@@UEAA@XZ @ 0x1801459B0
 * Callers:
 *     ??_ECManipulation@@UEAAPEAXI@Z @ 0x1801459D4 (--_ECManipulation@@UEAAPEAXI@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CManipulation::~CManipulation(CManipulation *this)
{
  CResource *v1; // rcx

  *(_QWORD *)this = &CManipulation::`vftable'{for `IManipulationResource'};
  v1 = (CManipulation *)((char *)this + 8);
  *(_QWORD *)v1 = &CManipulation::`vftable'{for `CResource'};
  CResource::~CResource(v1);
}
