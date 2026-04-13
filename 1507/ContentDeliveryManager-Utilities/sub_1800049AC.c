/*
 * XREFs of sub_1800049AC @ 0x1800049AC
 * Callers:
 *     sub_180026D02 @ 0x180026D02 (sub_180026D02.c)
 * Callees:
 *     memcpy @ 0x180026528 (memcpy.c)
 */

void __fastcall sub_1800049AC(void **a1, char a2, size_t a3)
{
  void *v5; // rsi

  if ( a2 && (unsigned __int64)a1[3] >= 0x10 )
  {
    v5 = *a1;
    if ( a3 )
      memcpy(a1, *a1, a3);
    operator delete(v5);
  }
  a1[3] = (void *)15;
  a1[2] = (void *)a3;
  *((_BYTE *)a1 + a3) = 0;
}
