/*
 * XREFs of ??_GDMMVIDPNTARGETMODE@@UEAAPEAXI@Z @ 0x1C0003030
 * Callers:
 *     ??_EDMMVIDPNTARGETMODE@@WDA@EAAPEAXI@Z @ 0x1C0010F20 (--_EDMMVIDPNTARGETMODE@@WDA@EAAPEAXI@Z.c)
 *     ??_EDMMVIDPNTARGETMODE@@WCA@EAAPEAXI@Z @ 0x1C0010F30 (--_EDMMVIDPNTARGETMODE@@WCA@EAAPEAXI@Z.c)
 *     ??_EDMMVIDPNTARGETMODE@@WEA@EAAPEAXI@Z @ 0x1C0010F40 (--_EDMMVIDPNTARGETMODE@@WEA@EAAPEAXI@Z.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1C00689D8 (--3@YAXPEAX@Z.c)
 */

DMMVIDPNTARGETMODE *__fastcall DMMVIDPNTARGETMODE::`scalar deleting destructor'(DMMVIDPNTARGETMODE *this, char a2)
{
  *((_QWORD *)this + 8) = &NonReferenceCounted::`vftable';
  *((_DWORD *)this + 14) |= 0x6D640000u;
  *((_QWORD *)this + 6) = &SignedWithClassSignature<DMMVIDPNSOURCESET>::`vftable';
  *((_QWORD *)this + 5) = 0LL;
  *((_QWORD *)this + 4) = &ContainedBy<DMMVIDPNSOURCEMODESET>::`vftable';
  *(_QWORD *)this = &SetElement::`vftable';
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
