/*
 * XREFs of sub_1800080BC @ 0x1800080BC
 * Callers:
 *     sub_180007E10 @ 0x180007E10 (sub_180007E10.c)
 *     sub_18000E270 @ 0x18000E270 (sub_18000E270.c)
 * Callees:
 *     sub_180002654 @ 0x180002654 (sub_180002654.c)
 */

_QWORD *__fastcall sub_1800080BC(_QWORD *a1)
{
  _QWORD *v1; // rdi
  bool v3; // zf

  v1 = a1 + 1;
  sub_180002654(a1 + 1);
  v3 = qword_18003AC80 == 0;
  *a1 = off_18002C9C0;
  *v1 = off_18002CDF0;
  a1[4] = off_18002C660;
  a1[5] = off_18002C758;
  a1[7] = 1LL;
  if ( !v3 )
    _InterlockedIncrement(&dword_18003AC88);
  *a1 = &off_18002C820;
  *v1 = off_18002CA38;
  a1[4] = off_18002C680;
  a1[5] = off_18002CBE8;
  return a1;
}
