/*
 * XREFs of sub_180014534 @ 0x180014534
 * Callers:
 *     sub_18001FCE0 @ 0x18001FCE0 (sub_18001FCE0.c)
 * Callees:
 *     sub_18002185C @ 0x18002185C (sub_18002185C.c)
 */

_QWORD *__fastcall sub_180014534(_QWORD *a1, char a2)
{
  _QWORD *v2; // rdi
  __int64 v4; // r8

  v2 = a1 - 3;
  *(_QWORD *)((char *)a1 + *(int *)(*(a1 - 3) + 4LL) - 24) = off_18002DBB0;
  v4 = *(int *)(*(a1 - 3) + 4LL);
  *(_DWORD *)((char *)a1 + v4 - 28) = v4 - 24;
  *a1 = off_18002E178;
  sub_18002185C(a1);
  if ( (a2 & 1) != 0 )
    operator delete(v2);
  return v2;
}
