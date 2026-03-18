/*
 * XREFs of ??0DMMVIDPNTARGETSET@@QEAA@AEBV0@@Z @ 0x1C0005168
 * Callers:
 *     ??0DMMVIDPN@@QEAA@AEBV0@@Z @ 0x1C0091E10 (--0DMMVIDPN@@QEAA@AEBV0@@Z.c)
 * Callees:
 *     ??0?$DoublyLinkedList@VDMMVIDPNTARGET@@@@QEAA@AEBV0@@Z @ 0x1C00056E0 (--0-$DoublyLinkedList@VDMMVIDPNTARGET@@@@QEAA@AEBV0@@Z.c)
 */

DMMVIDPNTARGETSET *__fastcall DMMVIDPNTARGETSET::DMMVIDPNTARGETSET(
        DMMVIDPNTARGETSET *this,
        const struct DMMVIDPNTARGETSET *a2)
{
  char *v4; // rax

  *(_QWORD *)this = &Set<DMMVIDPNTARGET>::`vftable';
  DoublyLinkedList<DMMVIDPNTARGET>::DoublyLinkedList<DMMVIDPNTARGET>((char *)this + 8, (char *)a2 + 8);
  *(_QWORD *)this = &IndexedSet<DMMVIDPNTARGET>::`vftable';
  v4 = 0LL;
  *((_DWORD *)this + 14) = 0;
  *((_QWORD *)this + 8) = &ContainedBy<DMMVIDPNSOURCEMODESET>::`vftable';
  *((_QWORD *)this + 9) = 0LL;
  if ( a2 )
    v4 = (char *)a2 + 80;
  *((_QWORD *)this + 10) = &SignedWithClassSignature<DMMVIDPNSOURCESET>::`vftable';
  *((_DWORD *)this + 22) = *((_DWORD *)v4 + 2);
  *(_QWORD *)this = &DMMVIDPNTARGETSET::`vftable'{for `IndexedSet<DMMVIDPNTARGET>'};
  *((_QWORD *)this + 8) = &DMMVIDPNTARGETSET::`vftable'{for `ContainedBy<DMMVIDPN>'};
  *((_QWORD *)this + 10) = &DMMVIDPNTARGETSET::`vftable'{for `SignedWithClassSignature<DMMVIDPNTARGETSET>'};
  return this;
}
