/*
 * XREFs of ??_G?$SignedWithClassSignature@VDMMVIDEOPRESENTSOURCE@@@@UEAAPEAXI@Z @ 0x1C0034B60
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1C007F918 (--3@YAXPEAX@Z.c)
 */

_DWORD *__fastcall SignedWithClassSignature<DMMVIDEOPRESENTSOURCE>::`scalar deleting destructor'(_DWORD *a1, char a2)
{
  a1[2] |= 0x6D640000u;
  *(_QWORD *)a1 = &SignedWithClassSignature<DMMVIDEOPRESENTSOURCE>::`vftable';
  if ( (a2 & 1) != 0 )
    operator delete(a1);
  return a1;
}
