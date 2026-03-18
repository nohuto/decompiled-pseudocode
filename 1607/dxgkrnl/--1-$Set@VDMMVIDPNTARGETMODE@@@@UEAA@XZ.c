/*
 * XREFs of ??1?$Set@VDMMVIDPNTARGETMODE@@@@UEAA@XZ @ 0x1C001D670
 * Callers:
 *     ??_E?$IndexedSet@VDMMVIDPNTARGETMODE@@@@UEAAPEAXI@Z @ 0x1C00341A0 (--_E-$IndexedSet@VDMMVIDPNTARGETMODE@@@@UEAAPEAXI@Z.c)
 *     ??_E?$Set@VDMMVIDPNTARGETMODE@@@@UEAAPEAXI@Z @ 0x1C0034240 (--_E-$Set@VDMMVIDPNTARGETMODE@@@@UEAAPEAXI@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall Set<DMMVIDPNTARGETMODE>::~Set<DMMVIDPNTARGETMODE>(_QWORD *a1)
{
  _QWORD *v1; // rcx

  *a1 = &Set<DMMVIDPNTARGETMODE>::`vftable';
  v1 = a1 + 1;
  *v1 = &DoublyLinkedList<DMMVIDPNTARGETMODE>::`vftable';
  DoublyLinkedList<DMMVIDEOPRESENTSOURCE>::Clear((__int64)v1);
}
