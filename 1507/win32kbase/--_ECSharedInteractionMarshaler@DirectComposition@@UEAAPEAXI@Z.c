/*
 * XREFs of ??_ECSharedInteractionMarshaler@DirectComposition@@UEAAPEAXI@Z @ 0x1C00DE3D0
 * Callers:
 *     <none>
 * Callees:
 *     ??1CInteractionMarshaler@DirectComposition@@UEAA@XZ @ 0x1C001CF08 (--1CInteractionMarshaler@DirectComposition@@UEAA@XZ.c)
 *     Win32FreePool @ 0x1C0033BB0 (Win32FreePool.c)
 */

DirectComposition::CSharedInteractionMarshaler *__fastcall DirectComposition::CSharedInteractionMarshaler::`vector deleting destructor'(
        DirectComposition::CSharedInteractionMarshaler *this,
        char a2)
{
  *(_QWORD *)this = &DirectComposition::CSharedInteractionMarshaler::`vftable';
  DirectComposition::CInteractionMarshaler::~CInteractionMarshaler(this);
  if ( (a2 & 1) != 0 )
    Win32FreePool();
  return this;
}
