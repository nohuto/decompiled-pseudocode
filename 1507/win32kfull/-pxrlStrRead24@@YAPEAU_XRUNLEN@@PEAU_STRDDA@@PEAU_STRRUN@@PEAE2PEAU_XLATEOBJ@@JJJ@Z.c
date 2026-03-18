/*
 * XREFs of ?pxrlStrRead24@@YAPEAU_XRUNLEN@@PEAU_STRDDA@@PEAU_STRRUN@@PEAE2PEAU_XLATEOBJ@@JJJ@Z @ 0x1C02BB420
 * Callers:
 *     <none>
 * Callees:
 *     XLATEOBJ_iXlate @ 0x1C00D81F0 (XLATEOBJ_iXlate.c)
 */

struct _XRUNLEN *__fastcall pxrlStrRead24(
        struct _STRDDA *a1,
        struct _STRRUN *a2,
        unsigned __int8 *a3,
        unsigned __int8 *a4,
        XLATEOBJ *pxlo,
        int a6,
        int a7,
        int a8)
{
  int v8; // r15d
  _DWORD *v9; // rbx
  int v10; // r14d
  unsigned __int8 *v11; // rsi
  __int64 v12; // r13
  unsigned int *v13; // r8
  __int64 v14; // r9
  unsigned int v15; // eax
  ULONG *v16; // rdi
  __int64 v17; // rcx
  unsigned int *v18; // r12
  __int64 v19; // r15
  unsigned int v20; // eax
  ULONG v21; // eax
  ULONG *v22; // rdi
  __int64 v23; // rcx
  int v25; // r13d
  char v26; // r12
  unsigned __int8 *v27; // r8
  __int64 v28; // r11
  __int64 v29; // r10
  char *v30; // r9
  __int16 v31; // ax
  ULONG v32; // eax
  ULONG v33; // ecx
  __int64 v34; // rdx
  ULONG v35; // eax
  ULONG *v36; // rdi
  __int64 v37; // rcx
  __int64 v38; // rax
  char *v39; // [rsp+20h] [rbp-10h]
  unsigned __int8 *v40; // [rsp+28h] [rbp-8h]
  ULONG iColor; // [rsp+78h] [rbp+48h]
  __int64 iColora; // [rsp+78h] [rbp+48h]
  ULONG v43; // [rsp+80h] [rbp+50h]
  __int64 v44; // [rsp+88h] [rbp+58h]
  unsigned int v45; // [rsp+98h] [rbp+68h]
  int v46; // [rsp+98h] [rbp+68h]

  v8 = a6;
  v9 = (_DWORD *)((char *)a2 + 8);
  HIBYTE(iColor) = 0;
  v10 = 0;
  HIBYTE(v43) = 0;
  v11 = &a3[2 * a6 + a6];
  if ( a4 )
  {
    v25 = *(_DWORD *)a1;
    v26 = a8 & 0x1F;
    v27 = &a4[4 * ((__int64)a8 >> 5)];
    v46 = *(_DWORD *)v27;
    v40 = v27;
    if ( v8 < a7 )
    {
      v28 = 0LL;
      v29 = a8 & 0x1F;
      v30 = (char *)a1 + 32;
      iColora = 0LL;
      v39 = (char *)a1 + 32;
LABEL_23:
      v44 = v29;
      while ( 1 )
      {
        v31 = *(_WORD *)v11;
        v11 += 3;
        LOWORD(v43) = v31;
        BYTE2(v43) = *(v11 - 1);
        if ( pxlo )
        {
          v32 = XLATEOBJ_iXlate(pxlo, v43);
          v27 = v40;
          v33 = v32;
          v30 = v39;
          v29 = v44;
          v28 = iColora;
          HIBYTE(v43) = HIBYTE(v32);
        }
        else
        {
          v33 = v43;
        }
        if ( (dword_1C02E8060[v29] & v46) != 0 )
        {
          if ( *(_DWORD *)v30 )
          {
            v34 = *(unsigned int *)v30;
            v35 = v33;
            v36 = &v9[v28 + 2];
            v10 += v34;
            v37 = (unsigned int)v34;
            v28 += v34;
            iColora = v28;
            while ( v37 )
            {
              *v36++ = v35;
              --v37;
            }
          }
        }
        else
        {
          if ( v10 > 0 )
          {
            *v9 = v25;
            v25 += v10;
            v9[1] = v10;
            v38 = v10;
            v10 = 0;
            v9 += v38 + 2;
            v28 = 0LL;
            iColora = 0LL;
          }
          v25 += *(_DWORD *)v30;
        }
        ++v29;
        v30 += 4;
        ++v8;
        v44 = v29;
        ++v26;
        v39 = v30;
        if ( v8 >= a7 )
          break;
        if ( (v26 & 0x20) != 0 )
        {
          v27 += 4;
          v26 = 0;
          v40 = v27;
          v29 = 0LL;
          v46 = *(_DWORD *)v27;
          goto LABEL_23;
        }
      }
      if ( v10 > 0 )
      {
        *v9 = v25;
        v9[1] = v10;
        v9 += v10 + 2;
      }
    }
    return (struct _XRUNLEN *)v9;
  }
  else
  {
    v12 = 0LL;
    *v9 = *(_DWORD *)a1;
    *((_DWORD *)a2 + 3) = *((_DWORD *)a1 + 2) - *(_DWORD *)a1;
    if ( pxlo )
    {
      if ( a6 != a7 )
      {
        v18 = (unsigned int *)((char *)a1 + 32);
        v19 = (unsigned int)(a7 - a6);
        do
        {
          v20 = *v18++;
          v45 = v20;
          if ( v20 )
          {
            LOWORD(iColor) = *(_WORD *)v11;
            BYTE2(iColor) = v11[2];
            v21 = XLATEOBJ_iXlate(pxlo, iColor);
            v22 = &v9[v12 + 2];
            HIBYTE(iColor) = HIBYTE(v21);
            v23 = v45;
            v10 += v45;
            while ( v23 )
            {
              *v22++ = v21;
              --v23;
            }
            v12 += v45;
          }
          v11 += 3;
          --v19;
        }
        while ( v19 );
      }
    }
    else if ( a6 != a7 )
    {
      v13 = (unsigned int *)((char *)a1 + 32);
      v14 = (unsigned int)(a7 - a6);
      do
      {
        LOWORD(iColor) = *(_WORD *)v11;
        BYTE2(iColor) = v11[2];
        v15 = *v13++;
        if ( v15 )
        {
          v16 = (ULONG *)((char *)a2 + 4 * v12 + 16);
          v17 = v15;
          v10 += v15;
          while ( v17 )
          {
            *v16++ = iColor;
            --v17;
          }
          v12 += v15;
        }
        v11 += 3;
        --v14;
      }
      while ( v14 );
    }
    return (struct _XRUNLEN *)&v9[v10 + 2];
  }
}
