/*
 * XREFs of ??_ECPrimitiveGroupMarshaler@DirectComposition@@UEAAPEAXI@Z @ 0x1C0019190
 * Callers:
 *     <none>
 * Callees:
 *     Win32FreePool @ 0x1C0020110 (Win32FreePool.c)
 */

DirectComposition::CPrimitiveGroupMarshaler *__fastcall DirectComposition::CPrimitiveGroupMarshaler::`vector deleting destructor'(
        DirectComposition::CPrimitiveGroupMarshaler *this,
        char a2)
{
  *(_QWORD *)this = &DirectComposition::CPrimitiveGroupMarshaler::`vftable';
  if ( (a2 & 1) != 0 )
    Win32FreePool(this);
  return this;
}
