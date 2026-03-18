/*
 * XREFs of ??_E?$CDCompDynamicArray@UD2D1_INK_BEZIER_SEGMENT@@@DirectComposition@@UEAAPEAXI@Z @ 0x1C00E50E0
 * Callers:
 *     <none>
 * Callees:
 *     Win32FreePool @ 0x1C0036A50 (Win32FreePool.c)
 *     ??1CDCompDynamicArrayBase@DirectComposition@@MEAA@XZ @ 0x1C004CEAC (--1CDCompDynamicArrayBase@DirectComposition@@MEAA@XZ.c)
 */

DirectComposition::CDCompDynamicArrayBase *__fastcall DirectComposition::CDCompDynamicArray<D2D1_INK_BEZIER_SEGMENT>::`vector deleting destructor'(
        DirectComposition::CDCompDynamicArrayBase *a1,
        char a2)
{
  *(_QWORD *)a1 = &DirectComposition::CDCompDynamicArray<D2D1_INK_BEZIER_SEGMENT>::`vftable';
  DirectComposition::CDCompDynamicArrayBase::~CDCompDynamicArrayBase(a1);
  if ( (a2 & 1) != 0 )
    Win32FreePool();
  return a1;
}
