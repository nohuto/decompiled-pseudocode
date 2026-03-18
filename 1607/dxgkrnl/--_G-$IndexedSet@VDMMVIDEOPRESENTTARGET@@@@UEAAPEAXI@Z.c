/*
 * XREFs of ??_G?$IndexedSet@VDMMVIDEOPRESENTTARGET@@@@UEAAPEAXI@Z @ 0x1C0033320
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$Set@VDMMVIDEOPRESENTTARGET@@@@UEAA@XZ @ 0x1C0032900 (--1-$Set@VDMMVIDEOPRESENTTARGET@@@@UEAA@XZ.c)
 *     ??3@YAXPEAX@Z @ 0x1C007F918 (--3@YAXPEAX@Z.c)
 */

_QWORD *__fastcall IndexedSet<DMMVIDEOPRESENTTARGET>::`scalar deleting destructor'(_QWORD *a1, char a2)
{
  *a1 = &IndexedSet<DMMVIDEOPRESENTTARGET>::`vftable';
  Set<DMMVIDEOPRESENTTARGET>::~Set<DMMVIDEOPRESENTTARGET>(a1);
  if ( (a2 & 1) != 0 )
    operator delete(a1);
  return a1;
}
