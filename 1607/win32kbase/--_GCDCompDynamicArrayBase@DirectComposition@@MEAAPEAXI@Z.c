/*
 * XREFs of ??_GCDCompDynamicArrayBase@DirectComposition@@MEAAPEAXI@Z @ 0x1C00E3E30
 * Callers:
 *     <none>
 * Callees:
 *     Win32FreePool @ 0x1C0036A50 (Win32FreePool.c)
 *     ??1CDCompDynamicArrayBase@DirectComposition@@MEAA@XZ @ 0x1C004CEAC (--1CDCompDynamicArrayBase@DirectComposition@@MEAA@XZ.c)
 */

DirectComposition::CDCompDynamicArrayBase *__fastcall DirectComposition::CDCompDynamicArrayBase::`scalar deleting destructor'(
        DirectComposition::CDCompDynamicArrayBase *this,
        char a2)
{
  DirectComposition::CDCompDynamicArrayBase::~CDCompDynamicArrayBase(this);
  if ( (a2 & 1) != 0 )
    Win32FreePool();
  return this;
}
