/*
 * XREFs of ??_EDMMVIDEOPRESENTSOURCE@@UEAAPEAXI@Z @ 0x1C0034BC0
 * Callers:
 *     ??_EDMMVIDEOPRESENTSOURCE@@WCA@EAAPEAXI@Z @ 0x1C0012D60 (--_EDMMVIDEOPRESENTSOURCE@@WCA@EAAPEAXI@Z.c)
 *     ??_EDMMVIDEOPRESENTSOURCE@@WDA@EAAPEAXI@Z @ 0x1C0012D70 (--_EDMMVIDEOPRESENTSOURCE@@WDA@EAAPEAXI@Z.c)
 *     ??_EDMMVIDEOPRESENTSOURCE@@WEA@EAAPEAXI@Z @ 0x1C0012D80 (--_EDMMVIDEOPRESENTSOURCE@@WEA@EAAPEAXI@Z.c)
 * Callees:
 *     ??1?$Set@VCONTEXT_DATA@ContextDataAssignee@@@@UEAA@XZ @ 0x1C0034A6C (--1-$Set@VCONTEXT_DATA@ContextDataAssignee@@@@UEAA@XZ.c)
 *     ??3@YAXPEAX@Z @ 0x1C007F918 (--3@YAXPEAX@Z.c)
 */

DMMVIDEOPRESENTSOURCE *__fastcall DMMVIDEOPRESENTSOURCE::`vector deleting destructor'(
        DMMVIDEOPRESENTSOURCE *this,
        char a2)
{
  Set<ContextDataAssignee::CONTEXT_DATA>::~Set<ContextDataAssignee::CONTEXT_DATA>((_QWORD *)this + 9);
  *((_QWORD *)this + 8) = &NonReferenceCounted::`vftable';
  *((_DWORD *)this + 14) |= 0x6D640000u;
  *((_QWORD *)this + 6) = &SignedWithClassSignature<DMMVIDEOPRESENTSOURCE>::`vftable';
  *((_QWORD *)this + 5) = 0LL;
  *((_QWORD *)this + 4) = &ContainedBy<DMMVIDEOPRESENTSOURCESET>::`vftable';
  *(_QWORD *)this = &DoublyLinkedListElement::`vftable';
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
