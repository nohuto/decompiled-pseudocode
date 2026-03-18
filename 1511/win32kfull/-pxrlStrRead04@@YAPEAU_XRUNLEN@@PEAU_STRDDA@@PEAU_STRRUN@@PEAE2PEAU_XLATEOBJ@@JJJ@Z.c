/*
 * XREFs of ?pxrlStrRead04@@YAPEAU_XRUNLEN@@PEAU_STRDDA@@PEAU_STRRUN@@PEAE2PEAU_XLATEOBJ@@JJJ@Z @ 0x1C02B99D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

struct _XRUNLEN *__fastcall pxrlStrRead04(
        struct _STRDDA *a1,
        struct _STRRUN *a2,
        unsigned __int8 *a3,
        unsigned __int8 *a4,
        struct _XLATEOBJ *a5,
        int a6,
        int a7,
        int a8)
{
  int v8; // ebx
  _DWORD *v9; // r10
  char v10; // r11
  unsigned __int8 *v12; // rsi
  __int64 v13; // r8
  int v14; // r13d
  int v15; // ecx
  __int64 v16; // rbp
  unsigned int *v17; // r14
  unsigned int v18; // eax
  __int64 v19; // rcx
  unsigned int *v20; // rdi
  unsigned int *v21; // r15
  unsigned int v22; // eax
  __int64 v23; // rdx
  ULONG v24; // eax
  ULONG *v25; // rdi
  __int64 v26; // rcx
  int v28; // r14d
  char v29; // bp
  unsigned __int8 *v30; // r13
  int v31; // r9d
  _DWORD *v32; // rdx
  int v33; // ecx
  struct _XLATEOBJ *v34; // rdi
  __int64 v35; // rax
  __int64 v36; // r15
  unsigned int v37; // eax
  __int64 v38; // rcx
  _DWORD *v39; // rdi
  __int64 v40; // rcx
  __int64 v41; // rax
  _DWORD *v42; // [rsp+0h] [rbp-48h]
  int v43; // [rsp+58h] [rbp+10h]
  __int64 v44; // [rsp+60h] [rbp+18h]
  __int64 v45; // [rsp+68h] [rbp+20h]
  int v46; // [rsp+78h] [rbp+30h]

  v8 = a6;
  v9 = (_DWORD *)((char *)a2 + 8);
  v10 = a6 & 7;
  v12 = &a3[4 * ((__int64)a6 >> 3)];
  v13 = a6 & 7;
  v14 = *(_DWORD *)v12;
  v46 = *(_DWORD *)v12;
  if ( a4 )
  {
    v28 = *(_DWORD *)a1;
    v29 = a8 & 0x1F;
    v30 = &a4[4 * ((__int64)a8 >> 5)];
    v31 = 0;
    v43 = *(_DWORD *)v30;
    if ( v8 < a7 )
    {
      v44 = 0LL;
      v32 = (_DWORD *)((char *)a1 + 32);
      v33 = *(_DWORD *)v12;
      v34 = a5;
      v42 = v32;
      v35 = a8 & 0x1F;
LABEL_25:
      v45 = v35;
      while ( 1 )
      {
        v36 = (v33 & (unsigned int)dword_1C02ED4B8[v13]) >> dword_1C02ED2F0[v13];
        if ( v34 )
        {
          LODWORD(v36) = v34->pulXlate[v36];
          v35 = v45;
        }
        if ( (dword_1C02E8920[v35] & v43) != 0 )
        {
          v37 = *v32;
          if ( *v32 )
          {
            v38 = v44 + 2;
            v31 += v37;
            v44 += v37;
            v39 = &v9[v38];
            v40 = v37;
            v32 = v42;
            while ( v40 )
            {
              *v39++ = v36;
              --v40;
            }
            v34 = a5;
          }
        }
        else
        {
          if ( v31 > 0 )
          {
            *v9 = v28;
            v28 += v31;
            v9[1] = v31;
            v41 = v31;
            v31 = 0;
            v9 += v41 + 2;
            v44 = 0LL;
          }
          v28 += *v32;
        }
        ++v32;
        v35 = v45 + 1;
        v42 = v32;
        ++v8;
        ++v45;
        ++v10;
        ++v13;
        ++v29;
        if ( v8 >= a7 )
          break;
        if ( (v10 & 8) != 0 )
        {
          v12 += 4;
          v10 = 0;
          v13 = 0LL;
          v33 = *(_DWORD *)v12;
          v46 = *(_DWORD *)v12;
        }
        else
        {
          v33 = v46;
        }
        if ( (v29 & 0x20) != 0 )
        {
          v30 += 4;
          v29 = 0;
          v43 = *(_DWORD *)v30;
          v35 = 0LL;
          goto LABEL_25;
        }
      }
      if ( v31 > 0 )
      {
        *v9 = v28;
        v9[1] = v31;
        v9 += v31 + 2;
      }
    }
    return (struct _XRUNLEN *)v9;
  }
  else
  {
    v15 = *(_DWORD *)a1;
    v16 = 0LL;
    *v9 = v15;
    *((_DWORD *)a2 + 3) = *((_DWORD *)a1 + 2) - v15;
    if ( a5 )
    {
      if ( v8 < a7 )
      {
        v21 = (unsigned int *)((char *)a1 + 32);
        while ( 1 )
        {
          v22 = *v21++;
          if ( v22 )
          {
            v23 = v22;
            v24 = a5->pulXlate[(unsigned __int64)(v14 & (unsigned int)dword_1C02ED4B8[v13]) >> LOBYTE(dword_1C02ED2F0[v13])];
            v25 = &v9[v16 + 2];
            v26 = (unsigned int)v23;
            LODWORD(a4) = v23 + (_DWORD)a4;
            while ( v26 )
            {
              *v25++ = v24;
              --v26;
            }
            v16 += v23;
          }
          ++v8;
          ++v10;
          ++v13;
          if ( v8 >= a7 )
            break;
          if ( (v10 & 8) != 0 )
          {
            v12 += 4;
            v10 = 0;
            v13 = 0LL;
            v14 = *(_DWORD *)v12;
          }
        }
      }
    }
    else if ( v8 < a7 )
    {
      v17 = (unsigned int *)((char *)a1 + 32);
      while ( 1 )
      {
        v18 = (v14 & (unsigned int)dword_1C02ED4B8[v13]) >> dword_1C02ED2F0[v13];
        v19 = *v17++;
        if ( (_DWORD)v19 )
        {
          LODWORD(a4) = v19 + (_DWORD)a4;
          v20 = (unsigned int *)((char *)a2 + 4 * v16 + 16);
          v16 += (unsigned int)v19;
          while ( v19 )
          {
            *v20++ = v18;
            --v19;
          }
        }
        ++v8;
        ++v10;
        ++v13;
        if ( v8 >= a7 )
          break;
        if ( (v10 & 8) != 0 )
        {
          v12 += 4;
          v10 = 0;
          v13 = 0LL;
          v14 = *(_DWORD *)v12;
        }
      }
    }
    return (struct _XRUNLEN *)&v9[(int)a4 + 2];
  }
}
