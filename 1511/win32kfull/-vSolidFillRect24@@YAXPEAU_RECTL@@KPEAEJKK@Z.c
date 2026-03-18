/*
 * XREFs of ?vSolidFillRect24@@YAXPEAU_RECTL@@KPEAEJKK@Z @ 0x1C012DAB0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall vSolidFillRect24(struct _RECTL *a1, int a2, unsigned __int8 *a3, int a4, unsigned int a5)
{
  int v7; // esi
  LONG *p_top; // r14
  int v9; // r8d
  int v10; // edi
  int v11; // r9d
  unsigned __int8 *v12; // rax
  int i; // ecx

  v7 = a2;
  if ( a2 )
  {
    p_top = &a1->top;
    do
    {
      v9 = *(p_top - 1);
      v10 = p_top[1] - v9;
      v11 = p_top[2] - *p_top;
      v12 = &a3[3 * v9 + a4 * *p_top];
      if ( p_top[2] != *p_top )
      {
        do
        {
          --v11;
          for ( i = v10; i; --i )
          {
            *(_WORD *)v12 = a5;
            v12[2] = BYTE2(a5);
            v12 += 3;
          }
          v12 += a4 - 3 * v10;
        }
        while ( v11 );
      }
      p_top += 4;
      --v7;
    }
    while ( v7 );
  }
}
