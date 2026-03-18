/*
 * XREFs of ??_E?$SignedWithClassSignature@VDMMVIDPNTOPOLOGY@@@@UEAAPEAXI@Z @ 0x1C0034800
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1C007F918 (--3@YAXPEAX@Z.c)
 */

_DWORD *__fastcall SignedWithClassSignature<DMMVIDPNTOPOLOGY>::`vector deleting destructor'(_DWORD *a1, char a2)
{
  a1[2] |= 0x6D640000u;
  *(_QWORD *)a1 = &SignedWithClassSignature<DMMVIDPNTOPOLOGY>::`vftable';
  if ( (a2 & 1) != 0 )
    operator delete(a1);
  return a1;
}
