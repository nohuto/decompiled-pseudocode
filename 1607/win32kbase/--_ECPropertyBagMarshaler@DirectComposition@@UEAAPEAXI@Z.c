/*
 * XREFs of ??_ECPropertyBagMarshaler@DirectComposition@@UEAAPEAXI@Z @ 0x1C003C7D0
 * Callers:
 *     <none>
 * Callees:
 *     Win32FreePool @ 0x1C0036A50 (Win32FreePool.c)
 *     ??1CDCompDynamicArrayBase@DirectComposition@@MEAA@XZ @ 0x1C004CEAC (--1CDCompDynamicArrayBase@DirectComposition@@MEAA@XZ.c)
 */

DirectComposition::CPropertyBagMarshaler *__fastcall DirectComposition::CPropertyBagMarshaler::`vector deleting destructor'(
        DirectComposition::CPropertyBagMarshaler *this,
        char a2)
{
  DirectComposition::CDCompDynamicArrayBase *v3; // rcx

  v3 = (DirectComposition::CPropertyBagMarshaler *)((char *)this + 64);
  *(_QWORD *)v3 = &DirectComposition::CDCompDynamicArray<PropertyUpdate>::`vftable';
  DirectComposition::CDCompDynamicArrayBase::~CDCompDynamicArrayBase(v3);
  if ( (a2 & 1) != 0 )
    Win32FreePool();
  return this;
}
