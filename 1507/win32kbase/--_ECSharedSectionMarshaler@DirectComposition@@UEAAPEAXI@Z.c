/*
 * XREFs of ??_ECSharedSectionMarshaler@DirectComposition@@UEAAPEAXI@Z @ 0x1C000B2F0
 * Callers:
 *     <none>
 * Callees:
 *     Win32FreePool @ 0x1C0033BB0 (Win32FreePool.c)
 */

DirectComposition::CSharedSectionMarshaler *__fastcall DirectComposition::CSharedSectionMarshaler::`vector deleting destructor'(
        DirectComposition::CSharedSectionMarshaler *this,
        char a2)
{
  void *v4; // rcx

  *(_QWORD *)this = &DirectComposition::CSharedSectionMarshaler::`vftable';
  v4 = (void *)*((_QWORD *)this + 5);
  if ( v4 )
    ObfDereferenceObject(v4);
  *(_QWORD *)this = &DirectComposition::CResourceMarshaler::`vftable';
  if ( (a2 & 1) != 0 )
    Win32FreePool(this);
  return this;
}
