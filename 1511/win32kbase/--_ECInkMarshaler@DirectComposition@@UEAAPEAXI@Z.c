/*
 * XREFs of ??_ECInkMarshaler@DirectComposition@@UEAAPEAXI@Z @ 0x1C00D7880
 * Callers:
 *     <none>
 * Callees:
 *     ??1CDCompDynamicArrayBase@DirectComposition@@MEAA@XZ @ 0x1C001E4A0 (--1CDCompDynamicArrayBase@DirectComposition@@MEAA@XZ.c)
 *     Win32FreePool @ 0x1C0020110 (Win32FreePool.c)
 */

DirectComposition::CInkMarshaler *__fastcall DirectComposition::CInkMarshaler::`vector deleting destructor'(
        DirectComposition::CInkMarshaler *this,
        char a2)
{
  DirectComposition::CDCompDynamicArrayBase *v4; // rcx

  *(_QWORD *)this = &DirectComposition::CInkMarshaler::`vftable';
  v4 = (DirectComposition::CInkMarshaler *)((char *)this + 96);
  *(_QWORD *)v4 = &DirectComposition::CDCompDynamicArray<unsigned __int64>::`vftable';
  DirectComposition::CDCompDynamicArrayBase::~CDCompDynamicArrayBase(v4);
  if ( (a2 & 1) != 0 )
    Win32FreePool();
  return this;
}
