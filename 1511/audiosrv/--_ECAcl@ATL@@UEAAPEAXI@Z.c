/*
 * XREFs of ??_ECAcl@ATL@@UEAAPEAXI@Z @ 0x18006A010
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1800301D0 (--3@YAXPEAX@Z.c)
 */

void **__fastcall ATL::CAcl::`vector deleting destructor'(void **this, char a2)
{
  *this = &ATL::CAcl::`vftable';
  free(this[1]);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
