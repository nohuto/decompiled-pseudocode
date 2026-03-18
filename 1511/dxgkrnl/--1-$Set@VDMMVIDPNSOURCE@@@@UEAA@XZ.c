/*
 * XREFs of ??1?$Set@VDMMVIDPNSOURCE@@@@UEAA@XZ @ 0x1C00085B4
 * Callers:
 *     ??1DMMVIDPNSOURCESET@@UEAA@XZ @ 0x1C0008480 (--1DMMVIDPNSOURCESET@@UEAA@XZ.c)
 *     ??_E?$IndexedSet@VDMMVIDPNSOURCE@@@@UEAAPEAXI@Z @ 0x1C002C130 (--_E-$IndexedSet@VDMMVIDPNSOURCE@@@@UEAAPEAXI@Z.c)
 *     ??_E?$Set@VDMMVIDPNSOURCE@@@@UEAAPEAXI@Z @ 0x1C002C1E0 (--_E-$Set@VDMMVIDPNSOURCE@@@@UEAAPEAXI@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Set<DMMVIDPNSOURCE>::~Set<DMMVIDPNSOURCE>(_QWORD *a1)
{
  *a1 = &Set<DMMVIDPNSOURCE>::`vftable';
  a1[1] = &DoublyLinkedList<DMMVIDPNSOURCE>::`vftable';
  return DoublyLinkedList<DMMVIDPNSOURCE>::Clear();
}
