/*
 * XREFs of ??1?$Set@VDMMVIDPNSOURCE@@@@UEAA@XZ @ 0x1C000AD60
 * Callers:
 *     ??1DMMVIDPNSOURCESET@@UEAA@XZ @ 0x1C0001E80 (--1DMMVIDPNSOURCESET@@UEAA@XZ.c)
 *     ??_E?$IndexedSet@VDMMVIDPNSOURCE@@@@UEAAPEAXI@Z @ 0x1C00345D0 (--_E-$IndexedSet@VDMMVIDPNSOURCE@@@@UEAAPEAXI@Z.c)
 *     ??_E?$Set@VDMMVIDPNSOURCE@@@@UEAAPEAXI@Z @ 0x1C00346B0 (--_E-$Set@VDMMVIDPNSOURCE@@@@UEAAPEAXI@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall Set<DMMVIDPNSOURCE>::~Set<DMMVIDPNSOURCE>(_QWORD *a1)
{
  _QWORD *v1; // rcx

  *a1 = &Set<DMMVIDPNSOURCE>::`vftable';
  v1 = a1 + 1;
  *v1 = &DoublyLinkedList<DMMVIDPNSOURCE>::`vftable';
  DoublyLinkedList<DMMVIDPNSOURCE>::Clear((__int64)v1);
}
