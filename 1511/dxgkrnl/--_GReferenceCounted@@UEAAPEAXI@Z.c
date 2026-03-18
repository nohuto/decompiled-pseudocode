/*
 * XREFs of ??_GReferenceCounted@@UEAAPEAXI@Z @ 0x1C002B660
 * Callers:
 *     <none>
 * Callees:
 *     ??1ReferenceCounted@@UEAA@XZ @ 0x1C0005874 (--1ReferenceCounted@@UEAA@XZ.c)
 *     ??3@YAXPEAX@Z @ 0x1C0065F88 (--3@YAXPEAX@Z.c)
 */

ReferenceCounted *__fastcall ReferenceCounted::`scalar deleting destructor'(ReferenceCounted *this, char a2)
{
  ReferenceCounted::~ReferenceCounted(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
