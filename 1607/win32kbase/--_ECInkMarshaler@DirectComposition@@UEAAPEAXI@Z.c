/*
 * XREFs of ??_ECInkMarshaler@DirectComposition@@UEAAPEAXI@Z @ 0x1C00E5120
 * Callers:
 *     <none>
 * Callees:
 *     Win32FreePool @ 0x1C0036A50 (Win32FreePool.c)
 *     ??1CDCompDynamicArrayBase@DirectComposition@@MEAA@XZ @ 0x1C004CEAC (--1CDCompDynamicArrayBase@DirectComposition@@MEAA@XZ.c)
 */

DirectComposition::CInkMarshaler *__fastcall DirectComposition::CInkMarshaler::`vector deleting destructor'(
        DirectComposition::CInkMarshaler *this,
        char a2)
{
  DirectComposition::CDCompDynamicArrayBase *v4; // rcx

  *(_QWORD *)this = &DirectComposition::CInkMarshaler::`vftable';
  v4 = (DirectComposition::CInkMarshaler *)((char *)this + 96);
  *(_QWORD *)v4 = &DirectComposition::CDCompDynamicArray<D2D1_INK_BEZIER_SEGMENT>::`vftable';
  DirectComposition::CDCompDynamicArrayBase::~CDCompDynamicArrayBase(v4);
  if ( (a2 & 1) != 0 )
    Win32FreePool();
  return this;
}
