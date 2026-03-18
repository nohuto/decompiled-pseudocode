/*
 * XREFs of ?pxrlStrRead04OR@@YAPEAU_XRUNLEN@@PEAU_STRDDA@@PEAU_STRRUN@@PEAE2PEAU_XLATEOBJ@@JJJ@Z @ 0x1C02BCFF0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

struct _XRUNLEN *__fastcall pxrlStrRead04OR(
        struct _STRDDA *a1,
        struct _STRRUN *a2,
        unsigned __int8 *a3,
        unsigned __int8 *a4,
        struct _XLATEOBJ *a5,
        int a6,
        int a7)
{
  int v7; // r10d
  int v8; // ebp
  char v9; // r9
  __int64 v11; // rdi
  unsigned __int8 *v12; // rbx
  int v13; // r8d
  int v14; // eax
  __int64 v15; // r8
  unsigned int *v16; // r15
  int v17; // r14d
  unsigned int v18; // esi
  __int64 v19; // rcx
  _DWORD *v20; // rdx
  unsigned int *v21; // r15
  int v22; // r14d
  ULONG v23; // esi
  __int64 v24; // rdx
  _DWORD *v25; // rcx

  v7 = a6;
  v8 = 0;
  v9 = a6 & 7;
  v11 = a6 & 7;
  v12 = &a3[4 * ((__int64)a6 >> 3)];
  v13 = *(_DWORD *)a1;
  *((_DWORD *)a2 + 2) = *(_DWORD *)a1;
  v14 = *((_DWORD *)a1 + 2) - v13;
  v15 = 0LL;
  *((_DWORD *)a2 + 3) = v14;
  if ( a5 )
  {
    if ( a6 < a7 )
    {
      v21 = (unsigned int *)((char *)a1 + 32);
LABEL_14:
      v22 = *(_DWORD *)v12;
      while ( 1 )
      {
        v23 = a5->pulXlate[(unsigned __int64)(v22 & (unsigned int)dword_1C02ED598[v11]) >> LOBYTE(dword_1C02ED578[v11])];
        v24 = *v21++;
        if ( (_DWORD)v24 )
        {
          v8 += v24;
          v25 = (_DWORD *)((char *)a2 + 4 * v15 + 16);
          v15 += v24;
          do
          {
            *v25++ |= v23;
            LODWORD(v24) = v24 - 1;
          }
          while ( (_DWORD)v24 );
        }
        else
        {
          *((_DWORD *)a2 + v15 + 4) |= v23;
        }
        ++v7;
        ++v9;
        ++v11;
        if ( v7 >= a7 )
          break;
        if ( (v9 & 8) != 0 )
        {
          v12 += 4;
          v9 = 0;
          v11 = 0LL;
          goto LABEL_14;
        }
      }
    }
  }
  else if ( a6 < a7 )
  {
    v16 = (unsigned int *)((char *)a1 + 32);
LABEL_4:
    v17 = *(_DWORD *)v12;
    while ( 1 )
    {
      v18 = (v17 & (unsigned int)dword_1C02ED598[v11]) >> dword_1C02ED578[v11];
      v19 = *v16++;
      if ( (_DWORD)v19 )
      {
        v8 += v19;
        v20 = (_DWORD *)((char *)a2 + 4 * v15 + 16);
        v15 += v19;
        do
        {
          *v20++ |= v18;
          LODWORD(v19) = v19 - 1;
        }
        while ( (_DWORD)v19 );
      }
      else
      {
        *((_DWORD *)a2 + v15 + 4) |= v18;
      }
      ++v7;
      ++v9;
      ++v11;
      if ( v7 >= a7 )
        break;
      if ( (v9 & 8) != 0 )
      {
        v12 += 4;
        v9 = 0;
        v11 = 0LL;
        goto LABEL_4;
      }
    }
  }
  return (struct _STRRUN *)((char *)a2 + 4 * v8 + 16);
}
