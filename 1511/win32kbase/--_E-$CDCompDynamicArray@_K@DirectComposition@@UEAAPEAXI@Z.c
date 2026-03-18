/*
 * XREFs of ??_E?$CDCompDynamicArray@_K@DirectComposition@@UEAAPEAXI@Z @ 0x1C00D6710
 * Callers:
 *     <none>
 * Callees:
 *     ??1CDCompDynamicArrayBase@DirectComposition@@MEAA@XZ @ 0x1C001E4A0 (--1CDCompDynamicArrayBase@DirectComposition@@MEAA@XZ.c)
 *     Win32FreePool @ 0x1C0020110 (Win32FreePool.c)
 */

DirectComposition::CDCompDynamicArrayBase *__fastcall DirectComposition::CDCompDynamicArray<unsigned __int64>::`vector deleting destructor'(
        DirectComposition::CDCompDynamicArrayBase *a1,
        char a2)
{
  *(_QWORD *)a1 = &DirectComposition::CDCompDynamicArray<unsigned __int64>::`vftable';
  DirectComposition::CDCompDynamicArrayBase::~CDCompDynamicArrayBase(a1);
  if ( (a2 & 1) != 0 )
    Win32FreePool();
  return a1;
}
