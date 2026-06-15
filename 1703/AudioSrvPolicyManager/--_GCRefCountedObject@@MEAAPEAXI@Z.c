/*
 * XREFs of ??_GCRefCountedObject@@MEAAPEAXI@Z @ 0x180009EF0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x1800210D4 (--3@YAXPEAX_K@Z.c)
 */

CRefCountedObject *__fastcall CRefCountedObject::`scalar deleting destructor'(CRefCountedObject *this, char a2)
{
  *(_QWORD *)this = &CRefCountedObject::`vftable';
  if ( (a2 & 1) != 0 )
    operator delete(this, 0x10uLL);
  return this;
}
