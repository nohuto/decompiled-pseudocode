/*
 * XREFs of ??_EDMMVIDPNSOURCEMODE@@UEAAPEAXI@Z @ 0x1C0004340
 * Callers:
 *     ??_EDMMVIDPNSOURCEMODE@@WCA@EAAPEAXI@Z @ 0x1C0012AD0 (--_EDMMVIDPNSOURCEMODE@@WCA@EAAPEAXI@Z.c)
 *     ??_EDMMVIDPNSOURCEMODE@@WDA@EAAPEAXI@Z @ 0x1C0012AE0 (--_EDMMVIDPNSOURCEMODE@@WDA@EAAPEAXI@Z.c)
 *     ??_EDMMVIDPNSOURCEMODE@@WEA@EAAPEAXI@Z @ 0x1C0012AF0 (--_EDMMVIDPNSOURCEMODE@@WEA@EAAPEAXI@Z.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1C007F918 (--3@YAXPEAX@Z.c)
 */

DMMVIDPNSOURCEMODE *__fastcall DMMVIDPNSOURCEMODE::`vector deleting destructor'(DMMVIDPNSOURCEMODE *this, char a2)
{
  *((_QWORD *)this + 8) = &NonReferenceCounted::`vftable';
  *((_DWORD *)this + 14) |= 0x6D640000u;
  *((_QWORD *)this + 6) = &SignedWithClassSignature<DMMVIDPNSOURCEMODE>::`vftable';
  *((_QWORD *)this + 5) = 0LL;
  *((_QWORD *)this + 4) = &ContainedBy<DMMVIDPNSOURCEMODESET>::`vftable';
  *(_QWORD *)this = &DoublyLinkedListElement::`vftable';
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
