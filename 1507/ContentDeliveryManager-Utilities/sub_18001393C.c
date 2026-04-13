/*
 * XREFs of sub_18001393C @ 0x18001393C
 * Callers:
 *     sub_18000DDA8 @ 0x18000DDA8 (sub_18000DDA8.c)
 *     sub_180026F49 @ 0x180026F49 (sub_180026F49.c)
 *     sub_180026F99 @ 0x180026F99 (sub_180026F99.c)
 * Callees:
 *     <none>
 */

void __fastcall sub_18001393C(__int64 a1)
{
  void **v1; // rbx
  void **v3; // rsi

  v1 = *(void ***)a1;
  if ( *(_QWORD *)a1 )
  {
    v3 = *(void ***)(a1 + 8);
    while ( v1 != v3 )
    {
      if ( (unsigned __int64)v1[3] >= 8 )
        operator delete(*v1);
      v1[3] = (void *)7;
      v1[2] = 0LL;
      *(_WORD *)v1 = 0;
      v1 += 4;
    }
    operator delete(*(void **)a1);
    *(_QWORD *)a1 = 0LL;
    *(_QWORD *)(a1 + 8) = 0LL;
    *(_QWORD *)(a1 + 16) = 0LL;
  }
}
