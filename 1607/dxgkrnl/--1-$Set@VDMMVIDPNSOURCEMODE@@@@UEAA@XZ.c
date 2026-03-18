/*
 * XREFs of ??1?$Set@VDMMVIDPNSOURCEMODE@@@@UEAA@XZ @ 0x1C001D5FC
 * Callers:
 *     ??_G?$IndexedSet@VDMMVIDPNSOURCEMODE@@@@UEAAPEAXI@Z @ 0x1C0034160 (--_G-$IndexedSet@VDMMVIDPNSOURCEMODE@@@@UEAAPEAXI@Z.c)
 *     ??_E?$Set@VDMMVIDPNSOURCEMODE@@@@UEAAPEAXI@Z @ 0x1C0034210 (--_E-$Set@VDMMVIDPNSOURCEMODE@@@@UEAAPEAXI@Z.c)
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
