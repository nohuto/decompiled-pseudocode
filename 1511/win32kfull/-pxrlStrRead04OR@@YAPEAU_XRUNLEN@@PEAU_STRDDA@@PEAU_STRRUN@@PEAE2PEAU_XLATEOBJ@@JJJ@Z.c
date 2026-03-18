/*
 * XREFs of ?pxrlStrRead04OR@@YAPEAU_XRUNLEN@@PEAU_STRDDA@@PEAU_STRRUN@@PEAE2PEAU_XLATEOBJ@@JJJ@Z @ 0x1C02B9E30
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
  __int64 v11; // rbx
  unsigned __int8 *v12; // rdi
  int v13; // r8d
  int v14; // r12d
  int v15; // eax
  __int64 v16; // r8
  unsigned int *v17; // r14
  unsigned int v18; // esi
  __int64 v19; // rcx
  _DWORD *v20; // rdx
  unsigned int *v21; // r14
  ULONG v22; // esi
  __int64 v23; // rdx
  _DWORD *v24; // rcx

  v7 = a6;
  v8 = 0;
  v9 = a6 & 7;
  v11 = a6 & 7;
  v12 = &a3[4 * ((__int64)a6 >> 3)];
  v13 = *(_DWORD *)a1;
  v14 = *(_DWORD *)v12;
  *((_DWORD *)a2 + 2) = *(_DWORD *)a1;
  v15 = *((_DWORD *)a1 + 2) - v13;
  v16 = 0LL;
  *((_DWORD *)a2 + 3) = v15;
  if ( a5 )
  {
    if ( a6 < a7 )
    {
      v21 = (unsigned int *)((char *)a1 + 32);
      while ( 1 )
      {
        v22 = a5->pulXlate[(unsigned __int64)(v14 & (unsigned int)dword_1C02ED4B8[v11]) >> LOBYTE(dword_1C02ED2F0[v11])];
        v23 = *v21++;
        if ( (_DWORD)v23 )
        {
          v8 += v23;
          v24 = (_DWORD *)((char *)a2 + 4 * v16 + 16);
          v16 += v23;
          do
          {
            *v24++ |= v22;
            LODWORD(v23) = v23 - 1;
          }
          while ( (_DWORD)v23 );
        }
        else
        {
          *((_DWORD *)a2 + v16 + 4) |= v22;
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
          v14 = *(_DWORD *)v12;
        }
      }
    }
  }
  else if ( a6 < a7 )
  {
    v17 = (unsigned int *)((char *)a1 + 32);
    while ( 1 )
    {
      v18 = (v14 & (unsigned int)dword_1C02ED4B8[v11]) >> dword_1C02ED2F0[v11];
      v19 = *v17++;
      if ( (_DWORD)v19 )
      {
        v8 += v19;
        v20 = (_DWORD *)((char *)a2 + 4 * v16 + 16);
        v16 += v19;
        do
        {
          *v20++ |= v18;
          LODWORD(v19) = v19 - 1;
        }
        while ( (_DWORD)v19 );
      }
      else
      {
        *((_DWORD *)a2 + v16 + 4) |= v18;
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
        v14 = *(_DWORD *)v12;
      }
    }
  }
  return (struct _STRRUN *)((char *)a2 + 4 * v8 + 16);
}
