/*
 * XREFs of ??1CPropertyBagBase@@MEAA@XZ @ 0x1801157E0
 * Callers:
 *     ??_ECPropertyBagBase@@MEAAPEAXI@Z @ 0x180115800 (--_ECPropertyBagBase@@MEAAPEAXI@Z.c)
 *     ??1CPropertyBag@@MEAA@XZ @ 0x1801209DC (--1CPropertyBag@@MEAA@XZ.c)
 * Callees:
 *     <none>
 */

void __fastcall CPropertyBagBase::~CPropertyBagBase(CPropertyBagBase *this)
{
  *(_QWORD *)this = &CPropertyBagBase::`vftable'{for `CResource'};
  *((_QWORD *)this + 5) = &CPropertyBagBase::`vftable'{for `IExpressionSource'};
  CResource::~CResource(this);
}
