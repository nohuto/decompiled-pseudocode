/*
 * XREFs of ??1DMMVIDPNTOPOLOGY@@UEAA@XZ @ 0x1C0004D6C
 * Callers:
 *     ??_EDMMVIDPNTOPOLOGY@@UEAAPEAXI@Z @ 0x1C002C240 (--_EDMMVIDPNTOPOLOGY@@UEAAPEAXI@Z.c)
 *     ??1DMMVIDPN@@UEAA@XZ @ 0x1C00917A8 (--1DMMVIDPN@@UEAA@XZ.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1C0065F88 (--3@YAXPEAX@Z.c)
 */

void __fastcall DMMVIDPNTOPOLOGY::~DMMVIDPNTOPOLOGY(DMMVIDPNTOPOLOGY *this)
{
  void *v2; // rcx

  *((_DWORD *)this + 46) |= 0x6D640000u;
  *((_QWORD *)this + 22) = &SignedWithClassSignature<DMMVIDPNSOURCESET>::`vftable';
  *((_QWORD *)this + 21) = 0LL;
  *((_QWORD *)this + 20) = &ContainedBy<DMMVIDPNSOURCEMODESET>::`vftable';
  *((_QWORD *)this + 15) = &Vector<unsigned __int64>::`vftable';
  operator delete(*((void **)this + 18));
  v2 = (void *)*((_QWORD *)this + 13);
  *((_QWORD *)this + 10) = &Vector<unsigned __int64>::`vftable';
  operator delete(v2);
  Set<DMMVIDPNPRESENTPATH>::~Set<DMMVIDPNPRESENTPATH>(this);
}
