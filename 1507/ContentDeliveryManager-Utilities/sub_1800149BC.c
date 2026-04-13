/*
 * XREFs of sub_1800149BC @ 0x1800149BC
 * Callers:
 *     sub_1800276B0 @ 0x1800276B0 (sub_1800276B0.c)
 * Callees:
 *     memcpy @ 0x180026528 (memcpy.c)
 */

void __fastcall sub_1800149BC(void **a1, char a2, void *a3)
{
  void *v5; // rsi

  if ( a2 && (unsigned __int64)a1[3] >= 8 )
  {
    v5 = *a1;
    if ( a3 )
      memcpy(a1, *a1, 2LL * (_QWORD)a3);
    operator delete(v5);
  }
  a1[3] = (void *)7;
  a1[2] = a3;
  *((_WORD *)a1 + (_QWORD)a3) = 0;
}
