/*
 * XREFs of ??_ECPropertyBagMarshaler@DirectComposition@@UEAAPEAXI@Z @ 0x1C00D72A0
 * Callers:
 *     <none>
 * Callees:
 *     ??1CDCompDynamicArrayBase@DirectComposition@@MEAA@XZ @ 0x1C0028E14 (--1CDCompDynamicArrayBase@DirectComposition@@MEAA@XZ.c)
 *     Win32FreePool @ 0x1C0033BB0 (Win32FreePool.c)
 */

DirectComposition::CPropertyBagMarshaler *__fastcall DirectComposition::CPropertyBagMarshaler::`vector deleting destructor'(
        DirectComposition::CPropertyBagMarshaler *this,
        char a2)
{
  DirectComposition::CDCompDynamicArrayBase *v3; // rcx

  v3 = (DirectComposition::CPropertyBagMarshaler *)((char *)this + 72);
  *(_QWORD *)v3 = &DirectComposition::CDCompDynamicArray<unsigned __int64>::`vftable';
  DirectComposition::CDCompDynamicArrayBase::~CDCompDynamicArrayBase(v3);
  *(_QWORD *)this = &DirectComposition::CResourceMarshaler::`vftable';
  if ( (a2 & 1) != 0 )
    Win32FreePool();
  return this;
}
