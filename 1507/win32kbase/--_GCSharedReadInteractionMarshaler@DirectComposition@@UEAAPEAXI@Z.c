/*
 * XREFs of ??_GCSharedReadInteractionMarshaler@DirectComposition@@UEAAPEAXI@Z @ 0x1C0003100
 * Callers:
 *     <none>
 * Callees:
 *     Win32FreePool @ 0x1C0033BB0 (Win32FreePool.c)
 */

DirectComposition::CSharedReadInteractionMarshaler *__fastcall DirectComposition::CSharedReadInteractionMarshaler::`scalar deleting destructor'(
        DirectComposition::CSharedReadInteractionMarshaler *this,
        char a2)
{
  *(_QWORD *)this = &DirectComposition::CResourceMarshaler::`vftable';
  if ( (a2 & 1) != 0 )
    Win32FreePool();
  return this;
}
