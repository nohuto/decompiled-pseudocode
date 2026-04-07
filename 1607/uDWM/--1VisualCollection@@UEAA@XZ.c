/*
 * XREFs of ??1VisualCollection@@UEAA@XZ @ 0x18007004C
 * Callers:
 *     ??_GVisualCollection@@UEAAPEAXI@Z @ 0x18007F5E0 (--_GVisualCollection@@UEAAPEAXI@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall VisualCollection::~VisualCollection(VisualCollection *this)
{
  *(_QWORD *)this = &VisualCollection::`vftable';
  DynArrayImpl<0>::~DynArrayImpl<0>((__int64)this + 16);
}
