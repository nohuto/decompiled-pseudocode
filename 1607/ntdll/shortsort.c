/*
 * XREFs of shortsort @ 0x18009AA90
 * Callers:
 *     qsort @ 0x18009A770 (qsort.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800A9C80 (_guard_dispatch_icall_nop.c)
 */

void __fastcall shortsort(unsigned __int64 a1, _BYTE *a2, __int64 a3, int (__fastcall *a4)(unsigned __int64, _BYTE *))
{
  _BYTE *v6; // rdi
  unsigned __int64 v7; // r12
  _BYTE *v9; // rbx
  unsigned __int64 i; // rsi
  __int64 v11; // r8
  _BYTE *v12; // rax
  __int64 v13; // rbx
  char v14; // dl

  if ( (unsigned __int64)a2 > a1 )
  {
    v6 = a2;
    v7 = a1 + a3;
    do
    {
      v9 = (_BYTE *)a1;
      for ( i = v7; i <= (unsigned __int64)v6; i += a3 )
      {
        if ( a4(i, v9) > 0 )
          v9 = (_BYTE *)i;
      }
      v11 = a3;
      v12 = v6;
      if ( v9 != v6 && a3 )
      {
        v13 = v9 - v6;
        do
        {
          v14 = v12[v13];
          v12[v13] = *v12;
          *v12++ = v14;
          --v11;
        }
        while ( v11 );
      }
      v6 -= a3;
    }
    while ( (unsigned __int64)v6 > a1 );
  }
}
