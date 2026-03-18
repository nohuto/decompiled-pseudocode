/*
 * XREFs of ??_ECSharedWritePrimitiveColorMarshaler@DirectComposition@@UEAAPEAXI@Z @ 0x1C00F1CD0
 * Callers:
 *     <none>
 * Callees:
 *     Win32FreePool @ 0x1C0036A50 (Win32FreePool.c)
 */

DirectComposition::CSharedWritePrimitiveColorMarshaler *__fastcall DirectComposition::CSharedWritePrimitiveColorMarshaler::`vector deleting destructor'(
        DirectComposition::CSharedWritePrimitiveColorMarshaler *this,
        char a2)
{
  *(_QWORD *)this = &DirectComposition::CSharedWritePrimitiveColorMarshaler::`vftable';
  if ( (a2 & 1) != 0 )
    Win32FreePool();
  return this;
}
