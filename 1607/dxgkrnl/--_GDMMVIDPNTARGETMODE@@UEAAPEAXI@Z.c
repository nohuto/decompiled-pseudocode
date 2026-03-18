/*
 * XREFs of ??_GDMMVIDPNTARGETMODE@@UEAAPEAXI@Z @ 0x1C00024D0
 * Callers:
 *     ??_EDMMVIDPNTARGETMODE@@WCA@EAAPEAXI@Z @ 0x1C0012B00 (--_EDMMVIDPNTARGETMODE@@WCA@EAAPEAXI@Z.c)
 *     ??_EDMMVIDPNTARGETMODE@@WDA@EAAPEAXI@Z @ 0x1C0012B10 (--_EDMMVIDPNTARGETMODE@@WDA@EAAPEAXI@Z.c)
 *     ??_EDMMVIDPNTARGETMODE@@WEA@EAAPEAXI@Z @ 0x1C0012B20 (--_EDMMVIDPNTARGETMODE@@WEA@EAAPEAXI@Z.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1C007F918 (--3@YAXPEAX@Z.c)
 */

DMMVIDPNTARGETMODE *__fastcall DMMVIDPNTARGETMODE::`scalar deleting destructor'(DMMVIDPNTARGETMODE *this, char a2)
{
  *((_QWORD *)this + 8) = &NonReferenceCounted::`vftable';
  *((_DWORD *)this + 14) |= 0x6D640000u;
  *((_QWORD *)this + 6) = &SignedWithClassSignature<DMMVIDPNTARGETMODE>::`vftable';
  *((_QWORD *)this + 5) = 0LL;
  *((_QWORD *)this + 4) = &ContainedBy<DMMVIDPNTARGETMODESET>::`vftable';
  *(_QWORD *)this = &DoublyLinkedListElement::`vftable';
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
