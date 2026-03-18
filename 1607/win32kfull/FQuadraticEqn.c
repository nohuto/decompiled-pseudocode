/*
 * XREFs of FQuadraticEqn @ 0x1C00C7010
 * Callers:
 *     CurveTransitions @ 0x1C00C6E48 (CurveTransitions.c)
 * Callees:
 *     QDiv2 @ 0x1C00C70E8 (QDiv2.c)
 */

void __fastcall FQuadraticEqn(__int64 a1, __int64 a2, __int64 a3, _DWORD *a4, __int64 *a5, __int64 *a6)
{
  __int64 v6; // r10
  __int64 v8; // rax
  __int64 v9; // rcx
  unsigned __int64 i; // rdx
  __int64 v11; // r10
  __int64 v12; // r11
  __int64 v13; // rax
  __int64 v15; // rcx

  v6 = 0LL;
  *a4 = 0;
  if ( a1 )
  {
    v8 = 2 * a3 * 2 * a1;
    v9 = a2 * a2 - v8;
    if ( v9 > 0 )
    {
      *a4 = 2;
      for ( i = 0x4000000000000000LL; i >= 0x8000; i >>= 1 )
      {
        if ( i + v6 <= v9 )
        {
          v9 -= i + v6;
          v6 |= 2 * i;
        }
        v9 *= 2LL;
      }
      *a5 = QDiv2(((v6 + 0x8000) >> 16) - (a2 << 16));
      v13 = QDiv2(-(v11 + v12));
      goto LABEL_8;
    }
    if ( a2 * a2 == v8 )
    {
      v15 = -65536 * a2;
LABEL_14:
      *a4 = 1;
      v13 = QDiv2(v15);
      a6 = a5;
LABEL_8:
      *a6 = v13;
    }
  }
  else if ( a2 )
  {
    v15 = -65536 * a3;
    goto LABEL_14;
  }
}
