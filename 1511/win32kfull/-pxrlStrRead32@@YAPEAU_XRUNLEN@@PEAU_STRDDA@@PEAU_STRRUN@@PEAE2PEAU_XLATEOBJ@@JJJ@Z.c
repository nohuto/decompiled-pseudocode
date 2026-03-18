/*
 * XREFs of ?pxrlStrRead32@@YAPEAU_XRUNLEN@@PEAU_STRDDA@@PEAU_STRRUN@@PEAE2PEAU_XLATEOBJ@@JJJ@Z @ 0x1C02BAD00
 * Callers:
 *     <none>
 * Callees:
 *     XLATEOBJ_iXlate @ 0x1C00DF4B0 (XLATEOBJ_iXlate.c)
 */

struct _XRUNLEN *__fastcall pxrlStrRead32(
        struct _STRDDA *a1,
        struct _STRRUN *a2,
        unsigned __int8 *a3,
        unsigned __int8 *a4,
        XLATEOBJ *pxlo,
        int a6,
        int a7,
        int a8)
{
  int v8; // ebp
  _DWORD *v9; // rbx
  int v10; // esi
  ULONG *v11; // r14
  __int64 v12; // r15
  unsigned int *v13; // rdi
  __int64 v14; // r8
  __int64 v15; // rcx
  ULONG *v16; // rdx
  unsigned int *v17; // r12
  __int64 v18; // rbp
  __int64 v19; // r13
  ULONG v20; // eax
  ULONG *v21; // rdi
  __int64 v22; // rcx
  int v24; // r12d
  char v25; // r15
  unsigned __int8 *v26; // r8
  __int64 v27; // r9
  __int64 v28; // rdi
  _DWORD *v29; // r13
  ULONG v30; // ecx
  ULONG v31; // eax
  __int64 v32; // rdx
  ULONG v33; // eax
  ULONG *v34; // rdi
  __int64 v35; // rcx
  __int64 v36; // rax
  __int64 v37; // [rsp+68h] [rbp+10h]
  __int64 v38; // [rsp+70h] [rbp+18h]
  unsigned __int8 *v39; // [rsp+78h] [rbp+20h]
  int v40; // [rsp+88h] [rbp+30h]

  v8 = a6;
  v9 = (_DWORD *)((char *)a2 + 8);
  v10 = 0;
  v11 = (ULONG *)&a3[4 * a6];
  if ( a4 )
  {
    v24 = *(_DWORD *)a1;
    v25 = a8 & 0x1F;
    v26 = &a4[4 * ((__int64)a8 >> 5)];
    v40 = *(_DWORD *)v26;
    v39 = v26;
    if ( v8 < a7 )
    {
      v27 = 0LL;
      v28 = a8 & 0x1F;
      v37 = 0LL;
      v29 = (_DWORD *)((char *)a1 + 32);
LABEL_21:
      v38 = v28;
      while ( 1 )
      {
        v30 = *v11++;
        if ( pxlo )
        {
          v31 = XLATEOBJ_iXlate(pxlo, v30);
          v26 = v39;
          v30 = v31;
          v27 = v37;
        }
        if ( (dword_1C02E8920[v28] & v40) != 0 )
        {
          if ( *v29 )
          {
            v32 = (unsigned int)*v29;
            v33 = v30;
            v34 = &v9[v27 + 2];
            v35 = (unsigned int)v32;
            v10 += v32;
            while ( v35 )
            {
              *v34++ = v33;
              --v35;
            }
            v28 = v38;
            v27 += v32;
            v37 = v27;
          }
        }
        else
        {
          if ( v10 > 0 )
          {
            *v9 = v24;
            v24 += v10;
            v9[1] = v10;
            v36 = v10;
            v10 = 0;
            v9 += v36 + 2;
            v27 = 0LL;
            v37 = 0LL;
          }
          v24 += *v29;
        }
        ++v28;
        ++v8;
        ++v25;
        v38 = v28;
        ++v29;
        if ( v8 >= a7 )
          break;
        if ( (v25 & 0x20) != 0 )
        {
          v26 += 4;
          v25 = 0;
          v39 = v26;
          v28 = 0LL;
          v40 = *(_DWORD *)v26;
          goto LABEL_21;
        }
      }
      if ( v10 > 0 )
      {
        *v9 = v24;
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
        v17 = (unsigned int *)((char *)a1 + 32);
        v18 = (unsigned int)(a7 - a6);
        do
        {
          v19 = *v17++;
          if ( (_DWORD)v19 )
          {
            v20 = XLATEOBJ_iXlate(pxlo, *v11);
            v21 = &v9[v12 + 2];
            v22 = (unsigned int)v19;
            v10 += v19;
            while ( v22 )
            {
              *v21++ = v20;
              --v22;
            }
            v12 += v19;
          }
          ++v11;
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
          v10 += v15;
          v16 = &v9[v12 + 2];
          v12 += v15;
          do
          {
            *v16++ = *v11;
            LODWORD(v15) = v15 - 1;
          }
          while ( (_DWORD)v15 );
        }
        ++v11;
        --v14;
      }
      while ( v14 );
    }
    return (struct _XRUNLEN *)&v9[v10 + 2];
  }
}
