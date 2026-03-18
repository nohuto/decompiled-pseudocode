/*
 * XREFs of ??_ECTransform3DGroupMarshaler@DirectComposition@@UEAAPEAXI@Z @ 0x1C0075040
 * Callers:
 *     <none>
 * Callees:
 *     Win32FreePool @ 0x1C0020110 (Win32FreePool.c)
 */

DirectComposition::CTransform3DGroupMarshaler *__fastcall DirectComposition::CTransform3DGroupMarshaler::`vector deleting destructor'(
        DirectComposition::CTransform3DGroupMarshaler *this,
        char a2)
{
  *(_QWORD *)this = &DirectComposition::CTransform3DGroupMarshaler::`vftable';
  if ( (a2 & 1) != 0 )
    Win32FreePool();
  return this;
}
