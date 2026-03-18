/*
 * XREFs of ??_G?$ContainedBy@VDMMVIDPNTARGETMODESET@@@@UEAAPEAXI@Z @ 0x1C0033100
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1C007F918 (--3@YAXPEAX@Z.c)
 */

_QWORD *__fastcall ContainedBy<DMMVIDPNTARGETMODESET>::`scalar deleting destructor'(_QWORD *a1, char a2)
{
  a1[1] = 0LL;
  *a1 = &ContainedBy<DMMVIDPNTARGETMODESET>::`vftable';
  if ( (a2 & 1) != 0 )
    operator delete(a1);
  return a1;
}
