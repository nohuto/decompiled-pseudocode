/*
 * XREFs of ??1VisualCollection@@UEAA@XZ @ 0x180070404
 * Callers:
 *     ??_GVisualCollection@@UEAAPEAXI@Z @ 0x18007EB50 (--_GVisualCollection@@UEAAPEAXI@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall VisualCollection::~VisualCollection(void **this)
{
  *this = &VisualCollection::`vftable';
  DynArrayImpl<0>::~DynArrayImpl<0>(this + 2);
}
