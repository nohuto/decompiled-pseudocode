/*
 * XREFs of ??_GCPencilMarshaler@DirectComposition@@UEAAPEAXI@Z @ 0x1C00E5940
 * Callers:
 *     <none>
 * Callees:
 *     Win32FreePool @ 0x1C0036A50 (Win32FreePool.c)
 *     ??1CDCompDynamicArrayBase@DirectComposition@@MEAA@XZ @ 0x1C004CEAC (--1CDCompDynamicArrayBase@DirectComposition@@MEAA@XZ.c)
 */

DirectComposition::CPencilMarshaler *__fastcall DirectComposition::CPencilMarshaler::`scalar deleting destructor'(
        DirectComposition::CPencilMarshaler *this,
        char a2)
{
  DirectComposition::CDCompDynamicArrayBase *v4; // rcx

  *(_QWORD *)this = &DirectComposition::CPencilMarshaler::`vftable';
  v4 = (DirectComposition::CPencilMarshaler *)((char *)this + 144);
  *(_QWORD *)v4 = &DirectComposition::CDCompDynamicArray<D2D1_PENCIL_SEGMENT>::`vftable';
  DirectComposition::CDCompDynamicArrayBase::~CDCompDynamicArrayBase(v4);
  if ( (a2 & 1) != 0 )
    Win32FreePool();
  return this;
}
