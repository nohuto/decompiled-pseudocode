/*
 * XREFs of ??_E?$CDCompDynamicArray@UPositionShift@@@DirectComposition@@UEAAPEAXI@Z @ 0x1C00E7E80
 * Callers:
 *     <none>
 * Callees:
 *     Win32FreePool @ 0x1C0036A50 (Win32FreePool.c)
 *     ??1CDCompDynamicArrayBase@DirectComposition@@MEAA@XZ @ 0x1C004CEAC (--1CDCompDynamicArrayBase@DirectComposition@@MEAA@XZ.c)
 */

DirectComposition::CDCompDynamicArrayBase *__fastcall DirectComposition::CDCompDynamicArray<PositionShift>::`vector deleting destructor'(
        DirectComposition::CDCompDynamicArrayBase *a1,
        char a2)
{
  *(_QWORD *)a1 = &DirectComposition::CDCompDynamicArray<PositionShift>::`vftable';
  DirectComposition::CDCompDynamicArrayBase::~CDCompDynamicArrayBase(a1);
  if ( (a2 & 1) != 0 )
    Win32FreePool();
  return a1;
}
