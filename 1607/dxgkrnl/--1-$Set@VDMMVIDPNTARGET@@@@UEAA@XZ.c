/*
 * XREFs of ??1?$Set@VDMMVIDPNTARGET@@@@UEAA@XZ @ 0x1C000AD80
 * Callers:
 *     ??1DMMVIDPNTARGETSET@@UEAA@XZ @ 0x1C0002DA0 (--1DMMVIDPNTARGETSET@@UEAA@XZ.c)
 *     ??_G?$IndexedSet@VDMMVIDPNTARGET@@@@UEAAPEAXI@Z @ 0x1C0034610 (--_G-$IndexedSet@VDMMVIDPNTARGET@@@@UEAAPEAXI@Z.c)
 *     ??_E?$Set@VDMMVIDPNTARGET@@@@UEAAPEAXI@Z @ 0x1C00346E0 (--_E-$Set@VDMMVIDPNTARGET@@@@UEAAPEAXI@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall Set<DMMVIDPNTARGET>::~Set<DMMVIDPNTARGET>(_QWORD *a1)
{
  _QWORD *v1; // rcx

  *a1 = &Set<DMMVIDPNTARGET>::`vftable';
  v1 = a1 + 1;
  *v1 = &DoublyLinkedList<DMMVIDPNTARGET>::`vftable';
  DoublyLinkedList<DMMVIDPNTARGET>::Clear((__int64)v1);
}
