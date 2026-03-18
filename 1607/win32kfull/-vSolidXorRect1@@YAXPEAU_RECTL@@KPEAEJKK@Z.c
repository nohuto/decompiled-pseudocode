/*
 * XREFs of ?vSolidXorRect1@@YAXPEAU_RECTL@@KPEAEJKK@Z @ 0x1C0103F90
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall vSolidXorRect1(struct _RECTL *a1, int a2, unsigned __int8 *a3, int a4, unsigned int a5, char a6)
{
  LONG *p_top; // rsi
  __int64 v7; // rbx
  int v8; // r10d
  int v9; // r9d
  int v10; // r15d
  unsigned int v11; // ecx
  unsigned int v12; // r12d
  __int64 v13; // r9
  __int64 v14; // rcx
  __int64 v15; // r13
  __int64 v16; // r12
  int v17; // edx
  unsigned __int8 *v18; // r14
  unsigned int v19; // r8d
  int v20; // r11d
  unsigned int v21; // edx
  unsigned __int8 *v22; // rcx
  __int64 v23; // rdi
  unsigned int v24; // eax
  unsigned int v25; // edx
  unsigned __int8 *v26; // r9
  __int64 v27; // rax
  unsigned int v28; // r11d
  unsigned __int8 *v29; // rcx
  __int64 v30; // rax
  unsigned __int8 *v31; // [rsp+40h] [rbp+18h]

  if ( a2 )
  {
    v31 = a3;
    p_top = &a1->top;
    v7 = a4;
    v8 = a2;
    while ( 1 )
    {
      v9 = *(p_top - 1);
      v10 = 0;
      v11 = v9 << a6;
      v12 = (v9 << a6) + ((p_top[1] - v9) << a6);
      v13 = (v9 << a6) & 0x1F;
      v14 = v11 >> 5;
      v15 = v12 & 0x1F;
      v16 = v12 >> 5;
      v17 = *((_DWORD *)&aulMsk + v13);
      v18 = &a3[(int)v7 * *p_top];
      v19 = p_top[2] - *p_top;
      v20 = ~*((_DWORD *)&aulMsk + v15);
      if ( (_DWORD)v14 == (_DWORD)v16 )
        break;
      if ( (_DWORD)v13 )
        goto LABEL_15;
LABEL_5:
      v21 = v16 - v14;
      if ( (_DWORD)v16 != (_DWORD)v14 )
      {
        v22 = &v18[4 * v14];
        if ( v19 )
        {
          v23 = v19;
          do
          {
            v24 = v21;
            do
            {
              *(_DWORD *)v22 ^= a5;
              v22 += 4;
              --v24;
            }
            while ( v24 );
            v22 += v7 - 4LL * v21;
            --v23;
          }
          while ( v23 );
        }
      }
      if ( (_DWORD)v15 )
      {
        v28 = a5 & v20;
        v29 = &v18[4 * v16];
        if ( v19 )
        {
          v30 = v19;
          do
          {
            *(_DWORD *)v29 ^= v28;
            v29 += v7;
            --v30;
          }
          while ( v30 );
        }
      }
LABEL_12:
      a3 = v31;
      p_top += 4;
      if ( !--v8 )
        return;
    }
    v17 &= v20;
    v10 = 1;
LABEL_15:
    v25 = a5 & v17;
    v26 = &v18[4 * v14];
    if ( v19 )
    {
      v27 = v19;
      do
      {
        *(_DWORD *)v26 ^= v25;
        v26 += v7;
        --v27;
      }
      while ( v27 );
    }
    v14 = (unsigned int)(v14 + 1);
    if ( v10 )
      goto LABEL_12;
    goto LABEL_5;
  }
}
