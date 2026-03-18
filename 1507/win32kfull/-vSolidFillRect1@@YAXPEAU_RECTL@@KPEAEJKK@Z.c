/*
 * XREFs of ?vSolidFillRect1@@YAXPEAU_RECTL@@KPEAEJKK@Z @ 0x1C00C0AA0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall vSolidFillRect1(struct _RECTL *a1, int a2, unsigned __int8 *a3, int a4, unsigned int a5, char a6)
{
  int v6; // r11d
  int v7; // ebp
  char v8; // di
  LONG *p_top; // r15
  int v10; // edx
  int v11; // r13d
  unsigned __int8 *v12; // r14
  int v13; // eax
  unsigned int v14; // edx
  __int64 v15; // rdi
  __int64 v16; // rcx
  unsigned int v17; // ebx
  int v18; // edx
  int v19; // r8d
  unsigned __int8 *v20; // r10
  unsigned int v21; // esi
  int v22; // ebx
  __int64 v23; // r14
  unsigned __int64 v24; // r9
  unsigned int v25; // r11d
  unsigned __int64 *v26; // rdx
  unsigned __int64 v27; // rcx
  unsigned int v28; // eax
  unsigned int *v29; // rcx
  int v30; // r8d
  int v31; // edx
  unsigned int i; // r8d
  unsigned int *j; // rdx
  unsigned int *v34; // rcx
  unsigned int v35; // r9d
  int v36; // edx
  int v37; // r8d
  unsigned int v38; // [rsp+0h] [rbp-48h]
  unsigned __int8 *v39; // [rsp+8h] [rbp-40h]
  int v40; // [rsp+58h] [rbp+10h]
  unsigned __int8 *v41; // [rsp+60h] [rbp+18h]

  if ( a2 )
  {
    v41 = a3;
    v6 = a4;
    v7 = a2;
    v8 = a6;
    p_top = &a1->top;
    do
    {
      v10 = *(p_top - 1);
      v11 = p_top[2] - *p_top;
      v12 = &a3[v6 * *p_top];
      v39 = v12;
      v13 = (p_top[1] - v10) << v8;
      v14 = v10 << v8;
      v15 = v14 >> 5;
      v16 = (v14 + v13) & 0x1F;
      v17 = (v14 + v13) >> 5;
      v38 = v17;
      v18 = *((_DWORD *)&aulMsk + (v14 & 0x1F));
      v19 = *((_DWORD *)&aulMsk + v16);
      v40 = v19;
      if ( (_DWORD)v15 == v17 )
      {
        v29 = (unsigned int *)&v12[4 * v15];
        v30 = ~v19 & v18;
        v31 = ~v30;
        for ( i = a5 & v30; v11; --v11 )
        {
          *v29 = i | *v29 & v31;
          v29 = (unsigned int *)((char *)v29 + v6);
        }
      }
      else
      {
        if ( v18 != -1 )
        {
          v34 = (unsigned int *)&v12[4 * v15];
          v35 = a5 & v18;
          v36 = ~v18;
          v37 = p_top[2] - *p_top;
          if ( v11 )
          {
            do
            {
              *v34 = v35 | *v34 & v36;
              v34 = (unsigned int *)((char *)v34 + v6);
              --v37;
            }
            while ( v37 );
          }
          v19 = v40;
          v15 = (unsigned int)(v15 + 1);
        }
        v20 = &v12[4 * v15];
        v21 = v17 - v15;
        if ( v17 != (_DWORD)v15 )
        {
          v22 = v11;
          if ( v11 )
          {
            v23 = v6;
            v24 = a5 | ((unsigned __int64)a5 << 32);
            do
            {
              --v22;
              v25 = v21;
              v26 = (unsigned __int64 *)v20;
              if ( ((unsigned __int8)v20 & 4) != 0 )
              {
                *(_DWORD *)v20 = a5;
                v26 = (unsigned __int64 *)(v20 + 4);
                v25 = v21 - 1;
              }
              v27 = v25 >> 1;
              v28 = v25 >> 4;
              if ( v25 >> 4 )
              {
                v27 &= 7u;
                do
                {
                  *v26 = v24;
                  v26[1] = v24;
                  v26[2] = v24;
                  v26[3] = v24;
                  v26[4] = v24;
                  v26[5] = v24;
                  v26[6] = v24;
                  v26[7] = v24;
                  v26 += 8;
                  --v28;
                }
                while ( v28 );
              }
              if ( (_DWORD)v27 )
              {
                memset64(v26, v24, v27);
                v26 += (unsigned int)v27;
              }
              if ( (v25 & 1) != 0 )
                *(_DWORD *)v26 = a5;
              v20 += v23;
            }
            while ( v22 );
            v6 = a4;
            v12 = v39;
            v19 = v40;
          }
          v17 = v38;
        }
        if ( v19 != -1 )
        {
          for ( j = (unsigned int *)&v12[4 * v17]; v11; --v11 )
          {
            *j = a5 & ~v19 | *j & v19;
            j = (unsigned int *)((char *)j + v6);
          }
        }
      }
      v8 = a6;
      p_top += 4;
      a3 = v41;
      --v7;
    }
    while ( v7 );
  }
}
