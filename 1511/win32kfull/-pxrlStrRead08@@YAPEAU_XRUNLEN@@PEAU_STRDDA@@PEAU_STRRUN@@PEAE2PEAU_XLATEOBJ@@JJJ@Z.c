/*
 * XREFs of ?pxrlStrRead08@@YAPEAU_XRUNLEN@@PEAU_STRDDA@@PEAU_STRRUN@@PEAE2PEAU_XLATEOBJ@@JJJ@Z @ 0x1C02B9FB0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

struct _XRUNLEN *__fastcall pxrlStrRead08(
        struct _STRDDA *a1,
        struct _STRRUN *a2,
        unsigned __int8 *a3,
        unsigned __int8 *a4,
        struct _XLATEOBJ *a5,
        int a6,
        int a7,
        int a8)
{
  int v8; // r11d
  _DWORD *v9; // r10
  unsigned __int8 *v10; // r8
  int v11; // edi
  __int64 v12; // rdx
  unsigned int *v13; // rbx
  __int64 v14; // r11
  __int64 v15; // rcx
  _DWORD *v16; // r9
  unsigned int *v17; // rbx
  __int64 v18; // rsi
  __int64 v19; // r9
  _DWORD *v20; // r11
  int v22; // esi
  char v23; // bl
  unsigned __int8 *v24; // r15
  int v25; // r9d
  int v26; // r13d
  __int64 v27; // rbp
  _DWORD *v28; // r14
  __int64 v29; // r12
  __int64 v30; // rcx
  __int64 v31; // rdx
  int v32; // eax
  _DWORD *v33; // rdi
  __int64 v34; // rcx
  __int64 v35; // rax

  v8 = a6;
  v9 = (_DWORD *)((char *)a2 + 8);
  v10 = &a3[a6];
  if ( a4 )
  {
    v22 = *(_DWORD *)a1;
    v23 = a8 & 0x1F;
    v24 = &a4[4 * ((__int64)a8 >> 5)];
    v25 = 0;
    v26 = *(_DWORD *)v24;
    if ( a6 < a7 )
    {
      v27 = a8 & 0x1F;
      v28 = (_DWORD *)((char *)a1 + 32);
      v29 = 0LL;
      while ( 1 )
      {
        v30 = *v10++;
        if ( a5 )
          LODWORD(v30) = a5->pulXlate[v30];
        if ( (dword_1C02E8920[v27] & v26) != 0 )
        {
          if ( *v28 )
          {
            v31 = (unsigned int)*v28;
            v32 = v30;
            v33 = &v9[v29 + 2];
            v34 = (unsigned int)v31;
            v25 += v31;
            while ( v34 )
            {
              *v33++ = v32;
              --v34;
            }
            v29 += v31;
          }
        }
        else
        {
          if ( v25 > 0 )
          {
            *v9 = v22;
            v22 += v25;
            v9[1] = v25;
            v35 = v25;
            v25 = 0;
            v9 += v35 + 2;
            v29 = 0LL;
          }
          v22 += *v28;
        }
        ++v8;
        ++v23;
        ++v27;
        ++v28;
        if ( v8 >= a7 )
          break;
        if ( (v23 & 0x20) != 0 )
        {
          v24 += 4;
          v23 = 0;
          v27 = 0LL;
          v26 = *(_DWORD *)v24;
        }
      }
      if ( v25 > 0 )
      {
        *v9 = v22;
        v9[1] = v25;
        v9 += v25 + 2;
      }
    }
    return (struct _XRUNLEN *)v9;
  }
  else
  {
    v11 = 0;
    *v9 = *(_DWORD *)a1;
    *((_DWORD *)a2 + 3) = *((_DWORD *)a1 + 2) - *(_DWORD *)a1;
    v12 = 0LL;
    if ( a5 )
    {
      if ( a6 != a7 )
      {
        v17 = (unsigned int *)((char *)a1 + 32);
        v18 = (unsigned int)(a7 - a6);
        do
        {
          v19 = *v17++;
          if ( (_DWORD)v19 )
          {
            v11 += v19;
            v20 = &v9[v12 + 2];
            v12 += v19;
            do
            {
              *v20++ = a5->pulXlate[*v10];
              LODWORD(v19) = v19 - 1;
            }
            while ( (_DWORD)v19 );
          }
          ++v10;
          --v18;
        }
        while ( v18 );
      }
    }
    else if ( a6 != a7 )
    {
      v13 = (unsigned int *)((char *)a1 + 32);
      v14 = (unsigned int)(a7 - a6);
      do
      {
        v15 = *v13++;
        if ( (_DWORD)v15 )
        {
          v11 += v15;
          v16 = &v9[v12 + 2];
          v12 += v15;
          do
          {
            *v16++ = *v10;
            LODWORD(v15) = v15 - 1;
          }
          while ( (_DWORD)v15 );
        }
        ++v10;
        --v14;
      }
      while ( v14 );
    }
    return (struct _XRUNLEN *)&v9[v11 + 2];
  }
}
