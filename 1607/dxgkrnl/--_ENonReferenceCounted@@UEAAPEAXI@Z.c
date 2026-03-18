/*
 * XREFs of ??_ENonReferenceCounted@@UEAAPEAXI@Z @ 0x1C0033740
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1C007F918 (--3@YAXPEAX@Z.c)
 */

NonReferenceCounted *__fastcall NonReferenceCounted::`vector deleting destructor'(NonReferenceCounted *this, char a2)
{
  *(_QWORD *)this = &NonReferenceCounted::`vftable';
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
