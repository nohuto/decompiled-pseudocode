/*
 * XREFs of ?vSolidXorRect24@@YAXPEAU_RECTL@@KPEAEJKK@Z @ 0x1C013B4D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall vSolidXorRect24(struct _RECTL *a1, int a2, unsigned __int8 *a3, int a4, unsigned int a5)
{
  int v6; // r10d
  LONG *p_top; // r11
  int v8; // edx
  int v9; // r14d
  unsigned __int8 *v10; // r9
  int i; // ecx
  int j; // eax

  v6 = a2;
  if ( a2 )
  {
    p_top = &a1->top;
    do
    {
      v8 = *(p_top - 1);
      v9 = p_top[1] - v8;
      v10 = &a3[3 * v8 + a4 * *p_top];
      for ( i = p_top[2] - *p_top; i; v10 += a4 - 3 * v9 )
      {
        --i;
        for ( j = v9; j; --j )
        {
          *(_WORD *)v10 ^= a5;
          v10[2] ^= BYTE2(a5);
          v10 += 3;
        }
      }
      p_top += 4;
      --v6;
    }
    while ( v6 );
  }
}
