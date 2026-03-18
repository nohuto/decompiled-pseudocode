/*
 * XREFs of ?pxrlStrRead04@@YAPEAU_XRUNLEN@@PEAU_STRDDA@@PEAU_STRRUN@@PEAE2PEAU_XLATEOBJ@@JJJ@Z @ 0x1C02BA5E0
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
  __int64 v11; // rsi
  unsigned __int8 *v13; // r8
  int v14; // ecx
  __int64 v15; // rbp
  unsigned int *v16; // r15
  int v17; // r14d
  unsigned int v18; // eax
  __int64 v19; // rcx
  unsigned int *v20; // rdi
  unsigned int *v21; // r13
  int v22; // r15d
  unsigned int v23; // eax
  __int64 v24; // rdx
  ULONG v25; // eax
  ULONG *v26; // rdi
  __int64 v27; // rcx
  int v29; // r14d
  char v30; // bp
  unsigned __int8 *v31; // r13
  int v32; // r9d
  int v33; // ecx
  _DWORD *v34; // rdx
  struct _XLATEOBJ *v35; // rdi
  __int64 v36; // rax
  __int64 v37; // r15
  unsigned int v38; // eax
  __int64 v39; // rcx
  _DWORD *v40; // rdi
  __int64 v41; // rcx
  __int64 v42; // rax
  _DWORD *v43; // [rsp+0h] [rbp-48h]
  int v44; // [rsp+58h] [rbp+10h]
  __int64 v45; // [rsp+60h] [rbp+18h]
  __int64 v46; // [rsp+68h] [rbp+20h]
  int v47; // [rsp+78h] [rbp+30h]

  v8 = a6;
  v9 = (_DWORD *)((char *)a2 + 8);
  v10 = a6 & 7;
  v11 = a6 & 7;
  v13 = &a3[4 * ((__int64)a6 >> 3)];
  if ( a4 )
  {
    v29 = *(_DWORD *)a1;
    v30 = a8 & 0x1F;
    v31 = &a4[4 * ((__int64)a8 >> 5)];
    v32 = 0;
    v44 = *(_DWORD *)v31;
    if ( a6 < a7 )
    {
      v33 = *(_DWORD *)v13;
      v34 = (_DWORD *)((char *)a1 + 32);
      v45 = 0LL;
      v35 = a5;
      v43 = v34;
      v47 = *(_DWORD *)v13;
      v36 = a8 & 0x1F;
LABEL_27:
      v46 = v36;
      while ( 1 )
      {
        v37 = (v33 & (unsigned int)dword_1C02E7080[v11]) >> dword_1C02E7060[v11];
        if ( v35 )
        {
          LODWORD(v37) = v35->pulXlate[v37];
          v36 = v46;
        }
        if ( (dword_1C02E8060[v36] & v44) != 0 )
        {
          v38 = *v34;
          if ( *v34 )
          {
            v39 = v45 + 2;
            v32 += v38;
            v45 += v38;
            v40 = &v9[v39];
            v41 = v38;
            v34 = v43;
            while ( v41 )
            {
              *v40++ = v37;
              --v41;
            }
            v35 = a5;
          }
        }
        else
        {
          if ( v32 > 0 )
          {
            *v9 = v29;
            v29 += v32;
            v9[1] = v32;
            v42 = v32;
            v32 = 0;
            v9 += v42 + 2;
            v45 = 0LL;
          }
          v29 += *v34;
        }
        ++v34;
        v36 = v46 + 1;
        v43 = v34;
        ++v8;
        ++v46;
        ++v10;
        ++v11;
        ++v30;
        if ( v8 >= a7 )
          break;
        if ( (v10 & 8) != 0 )
        {
          v13 += 4;
          v10 = 0;
          v11 = 0LL;
          v33 = *(_DWORD *)v13;
          v47 = *(_DWORD *)v13;
        }
        else
        {
          v33 = v47;
        }
        if ( (v30 & 0x20) != 0 )
        {
          v31 += 4;
          v30 = 0;
          v44 = *(_DWORD *)v31;
          v36 = 0LL;
          goto LABEL_27;
        }
      }
      if ( v32 > 0 )
      {
        *v9 = v29;
        v9[1] = v32;
        v9 += v32 + 2;
      }
    }
    return (struct _XRUNLEN *)v9;
  }
  else
  {
    v14 = *(_DWORD *)a1;
    v15 = 0LL;
    *v9 = v14;
    *((_DWORD *)a2 + 3) = *((_DWORD *)a1 + 2) - v14;
    if ( a5 )
    {
      if ( a6 < a7 )
      {
        v21 = (unsigned int *)((char *)a1 + 32);
LABEL_15:
        v22 = *(_DWORD *)v13;
        while ( 1 )
        {
          v23 = *v21++;
          if ( v23 )
          {
            v24 = v23;
            v25 = a5->pulXlate[(unsigned __int64)(v22 & (unsigned int)dword_1C02E7080[v11]) >> LOBYTE(dword_1C02E7060[v11])];
            v26 = &v9[v15 + 2];
            v27 = (unsigned int)v24;
            LODWORD(a4) = v24 + (_DWORD)a4;
            while ( v27 )
            {
              *v26++ = v25;
              --v27;
            }
            v15 += v24;
          }
          ++v8;
          ++v10;
          ++v11;
          if ( v8 >= a7 )
            break;
          if ( (v10 & 8) != 0 )
          {
            v13 += 4;
            v10 = 0;
            v11 = 0LL;
            goto LABEL_15;
          }
        }
      }
    }
    else if ( a6 < a7 )
    {
      v16 = (unsigned int *)((char *)a1 + 32);
LABEL_5:
      v17 = *(_DWORD *)v13;
      while ( 1 )
      {
        v18 = (v17 & (unsigned int)dword_1C02E7080[v11]) >> dword_1C02E7060[v11];
        v19 = *v16++;
        if ( (_DWORD)v19 )
        {
          LODWORD(a4) = v19 + (_DWORD)a4;
          v20 = (unsigned int *)((char *)a2 + 4 * v15 + 16);
          v15 += (unsigned int)v19;
          while ( v19 )
          {
            *v20++ = v18;
            --v19;
          }
        }
        ++v8;
        ++v10;
        ++v11;
        if ( v8 >= a7 )
          break;
        if ( (v10 & 8) != 0 )
        {
          v13 += 4;
          v10 = 0;
          v11 = 0LL;
          goto LABEL_5;
        }
      }
    }
    return (struct _XRUNLEN *)&v9[(int)a4 + 2];
  }
}
