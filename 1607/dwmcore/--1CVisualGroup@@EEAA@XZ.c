/*
 * XREFs of ??1CVisualGroup@@EEAA@XZ @ 0x1801410B8
 * Callers:
 *     ??_GCVisualGroup@@EEAAPEAXI@Z @ 0x180141110 (--_GCVisualGroup@@EEAAPEAXI@Z.c)
 * Callees:
 *     ??1?$DynArrayImpl@$00@@IEAA@XZ @ 0x18009A64C (--1-$DynArrayImpl@$00@@IEAA@XZ.c)
 *     ?ClearVisualGroupData@CVisualGroup@@AEAAXXZ @ 0x180141154 (-ClearVisualGroupData@CVisualGroup@@AEAAXXZ.c)
 */

void __fastcall CVisualGroup::~CVisualGroup(CVisualGroup *this)
{
  *(_QWORD *)this = &CVisualGroup::`vftable';
  CVisualGroup::ClearVisualGroupData(this);
  DynArrayImpl<1>::~DynArrayImpl<1>((__int64)this + 144);
  DynArrayImpl<1>::~DynArrayImpl<1>((__int64)this + 112);
  CResource::~CResource(this);
}
