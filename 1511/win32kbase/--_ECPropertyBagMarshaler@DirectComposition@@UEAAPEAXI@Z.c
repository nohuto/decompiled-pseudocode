/*
 * XREFs of ??_ECPropertyBagMarshaler@DirectComposition@@UEAAPEAXI@Z @ 0x1C00D92C0
 * Callers:
 *     <none>
 * Callees:
 *     ??1CDCompDynamicArrayBase@DirectComposition@@MEAA@XZ @ 0x1C001E4A0 (--1CDCompDynamicArrayBase@DirectComposition@@MEAA@XZ.c)
 *     Win32FreePool @ 0x1C0020110 (Win32FreePool.c)
 */

DirectComposition::CPropertyBagMarshaler *__fastcall DirectComposition::CPropertyBagMarshaler::`vector deleting destructor'(
        DirectComposition::CPropertyBagMarshaler *this,
        char a2)
{
  DirectComposition::CDCompDynamicArrayBase *v3; // rcx

  v3 = (DirectComposition::CPropertyBagMarshaler *)((char *)this + 72);
  *(_QWORD *)v3 = &DirectComposition::CDCompDynamicArray<PropertyUpdate>::`vftable';
  DirectComposition::CDCompDynamicArrayBase::~CDCompDynamicArrayBase(v3);
  if ( (a2 & 1) != 0 )
    Win32FreePool();
  return this;
}
