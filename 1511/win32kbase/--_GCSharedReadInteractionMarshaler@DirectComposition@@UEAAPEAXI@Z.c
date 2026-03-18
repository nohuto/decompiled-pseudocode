/*
 * XREFs of ??_GCSharedReadInteractionMarshaler@DirectComposition@@UEAAPEAXI@Z @ 0x1C0073AF0
 * Callers:
 *     <none>
 * Callees:
 *     Win32FreePool @ 0x1C0020110 (Win32FreePool.c)
 */

DirectComposition::CSharedReadInteractionMarshaler *__fastcall DirectComposition::CSharedReadInteractionMarshaler::`scalar deleting destructor'(
        DirectComposition::CSharedReadInteractionMarshaler *this,
        char a2)
{
  *(_QWORD *)this = &DirectComposition::CSharedReadMarshaler::`vftable';
  if ( (a2 & 1) != 0 )
    Win32FreePool();
  return this;
}
