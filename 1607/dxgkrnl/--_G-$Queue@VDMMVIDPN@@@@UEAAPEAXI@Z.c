/*
 * XREFs of ??_G?$Queue@VDMMVIDPN@@@@UEAAPEAXI@Z @ 0x1C00333F0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$Queue@VDMMVIDPN@@@@UEAA@XZ @ 0x1C00328C0 (--1-$Queue@VDMMVIDPN@@@@UEAA@XZ.c)
 *     ??3@YAXPEAX@Z @ 0x1C007F918 (--3@YAXPEAX@Z.c)
 */

_QWORD *__fastcall Queue<DMMVIDPN>::`scalar deleting destructor'(_QWORD *a1, char a2)
{
  Queue<DMMVIDPN>::~Queue<DMMVIDPN>(a1);
  if ( (a2 & 1) != 0 )
    operator delete(a1);
  return a1;
}
