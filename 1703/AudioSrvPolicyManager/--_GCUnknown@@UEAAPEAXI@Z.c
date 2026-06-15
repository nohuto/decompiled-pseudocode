/*
 * XREFs of ??_GCUnknown@@UEAAPEAXI@Z @ 0x180005AF0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x1800210D4 (--3@YAXPEAX_K@Z.c)
 */

CUnknown *__fastcall CUnknown::`scalar deleting destructor'(CUnknown *this, char a2)
{
  *(_QWORD *)this = &CUnknown::`vftable';
  if ( (a2 & 1) != 0 )
    operator delete(this, 0x10uLL);
  return this;
}
