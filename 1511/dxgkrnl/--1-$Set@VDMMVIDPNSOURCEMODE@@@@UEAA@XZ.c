/*
 * XREFs of ??1?$Set@VDMMVIDPNSOURCEMODE@@@@UEAA@XZ @ 0x1C000BE5C
 * Callers:
 *     ??1DMMVIDPNSOURCEMODESET@@UEAA@XZ @ 0x1C00054E4 (--1DMMVIDPNSOURCEMODESET@@UEAA@XZ.c)
 *     ??_G?$IndexedSet@VDMMVIDPNSOURCEMODE@@@@UEAAPEAXI@Z @ 0x1C002BF30 (--_G-$IndexedSet@VDMMVIDPNSOURCEMODE@@@@UEAAPEAXI@Z.c)
 *     ??_E?$Set@VDMMVIDPNSOURCEMODE@@@@UEAAPEAXI@Z @ 0x1C002BF70 (--_E-$Set@VDMMVIDPNSOURCEMODE@@@@UEAAPEAXI@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall Set<DMMVIDPNSOURCEMODE>::~Set<DMMVIDPNSOURCEMODE>(_QWORD *a1)
{
  void (__fastcall ***v1)(_QWORD, __int64); // rcx

  *a1 = &Set<DMMVIDPNSOURCEMODE>::`vftable';
  v1 = (void (__fastcall ***)(_QWORD, __int64))(a1 + 1);
  *v1 = (void (__fastcall **)(_QWORD, __int64))&DoublyLinkedList<DMMVIDPNSOURCEMODE>::`vftable';
  DoublyLinkedList<DMMVIDPNSOURCEMODE>::Clear(v1);
}
