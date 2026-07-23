/*
 * XREFs of shortsort_s @ 0x18009AEB0
 * Callers:
 *     qsort_s @ 0x18009AB60 (qsort_s.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800A9C80 (_guard_dispatch_icall_nop.c)
 */

void __fastcall shortsort_s(
        unsigned __int64 a1,
        _BYTE *a2,
        __int64 a3,
        int (__fastcall *a4)(__int64, unsigned __int64, _BYTE *),
        __int64 a5)
{
  _BYTE *v7; // rdi
  unsigned __int64 v8; // r13
  _BYTE *v10; // rbx
  unsigned __int64 i; // rsi
  __int64 v12; // r8
  _BYTE *v13; // rax
  __int64 v14; // rbx
  char v15; // dl

  if ( (unsigned __int64)a2 > a1 )
  {
    v7 = a2;
    v8 = a1 + a3;
    do
    {
      v10 = (_BYTE *)a1;
      for ( i = v8; i <= (unsigned __int64)v7; i += a3 )
      {
        if ( a4(a5, i, v10) > 0 )
          v10 = (_BYTE *)i;
      }
      v12 = a3;
      v13 = v7;
      if ( v10 != v7 && a3 )
      {
        v14 = v10 - v7;
        do
        {
          v15 = v13[v14];
          v13[v14] = *v13;
          *v13++ = v15;
          --v12;
        }
        while ( v12 );
      }
      v7 -= a3;
    }
    while ( (unsigned __int64)v7 > a1 );
  }
}
