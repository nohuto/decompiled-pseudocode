/*
 * XREFs of ??_E?$AggregatedBy@VDMMVIDPNTARGET@@@@UEAAPEAXI@Z @ 0x1C002C8F0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1C00689D8 (--3@YAXPEAX@Z.c)
 */

_QWORD *__fastcall AggregatedBy<DMMVIDPNTARGET>::`vector deleting destructor'(_QWORD *a1, char a2)
{
  a1[1] = 0LL;
  *a1 = &ContainedBy<DMMVIDPNSOURCEMODESET>::`vftable';
  if ( (a2 & 1) != 0 )
    operator delete(a1);
  return a1;
}
