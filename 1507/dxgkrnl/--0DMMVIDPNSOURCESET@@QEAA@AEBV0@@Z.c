/*
 * XREFs of ??0DMMVIDPNSOURCESET@@QEAA@AEBV0@@Z @ 0x1C0007C98
 * Callers:
 *     ??0DMMVIDPN@@QEAA@AEBV0@@Z @ 0x1C00891AC (--0DMMVIDPN@@QEAA@AEBV0@@Z.c)
 * Callees:
 *     ??0?$DoublyLinkedList@VDMMVIDPNSOURCE@@@@QEAA@AEBV0@@Z @ 0x1C0007A0C (--0-$DoublyLinkedList@VDMMVIDPNSOURCE@@@@QEAA@AEBV0@@Z.c)
 */

DMMVIDPNSOURCESET *__fastcall DMMVIDPNSOURCESET::DMMVIDPNSOURCESET(
        DMMVIDPNSOURCESET *this,
        const struct DMMVIDPNSOURCESET *a2)
{
  char *v4; // rax

  *(_QWORD *)this = &Set<DMMVIDPNSOURCE>::`vftable';
  DoublyLinkedList<DMMVIDPNSOURCE>::DoublyLinkedList<DMMVIDPNSOURCE>((__int64)this + 8, (__int64)a2 + 8);
  *(_QWORD *)this = &IndexedSet<DMMVIDPNSOURCE>::`vftable';
  v4 = 0LL;
  *((_DWORD *)this + 14) = 0;
  *((_QWORD *)this + 8) = &ContainedBy<DMMVIDPNSOURCEMODESET>::`vftable';
  *((_QWORD *)this + 9) = 0LL;
  if ( a2 )
    v4 = (char *)a2 + 80;
  *((_QWORD *)this + 10) = &SignedWithClassSignature<DMMVIDPNSOURCESET>::`vftable';
  *((_DWORD *)this + 22) = *((_DWORD *)v4 + 2);
  *(_QWORD *)this = &DMMVIDPNSOURCESET::`vftable'{for `IndexedSet<DMMVIDPNSOURCE>'};
  *((_QWORD *)this + 8) = &DMMVIDPNSOURCESET::`vftable'{for `ContainedBy<DMMVIDPN>'};
  *((_QWORD *)this + 10) = &DMMVIDPNSOURCESET::`vftable'{for `SignedWithClassSignature<DMMVIDPNSOURCESET>'};
  return this;
}
