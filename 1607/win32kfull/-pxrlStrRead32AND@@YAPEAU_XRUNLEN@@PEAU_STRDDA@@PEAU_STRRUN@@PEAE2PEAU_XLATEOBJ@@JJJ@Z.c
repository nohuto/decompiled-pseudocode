/*
 * XREFs of ?pxrlStrRead32AND@@YAPEAU_XRUNLEN@@PEAU_STRDDA@@PEAU_STRRUN@@PEAE2PEAU_XLATEOBJ@@JJJ@Z @ 0x1C01472B0
 * Callers:
 *     <none>
 * Callees:
 *     XLATEOBJ_iXlate @ 0x1C00F95E0 (XLATEOBJ_iXlate.c)
 */

struct _XRUNLEN *__fastcall pxrlStrRead32AND(
        struct _STRDDA *a1,
        struct _STRRUN *a2,
        unsigned __int8 *a3,
        unsigned __int8 *a4,
        XLATEOBJ *pxlo,
        int a6,
        int a7)
{
  int v8; // r14d
  __int64 v9; // rbx
  ULONG *v10; // rsi
  unsigned int *v11; // r8
  __int64 v12; // r9
  __int64 v13; // rcx
  _DWORD *v14; // rdx
  unsigned int *v16; // r12
  __int64 v17; // r15
  __int64 v18; // rbp
  ULONG v19; // eax
  _DWORD *v20; // rcx

  v8 = 0;
  v9 = 0LL;
  *((_DWORD *)a2 + 2) = *(_DWORD *)a1;
  v10 = (ULONG *)&a3[4 * a6];
  *((_DWORD *)a2 + 3) = *((_DWORD *)a1 + 2) - *(_DWORD *)a1;
  if ( pxlo )
  {
    if ( a6 != a7 )
    {
      v16 = (unsigned int *)((char *)a1 + 32);
      v17 = (unsigned int)(a7 - a6);
      do
      {
        v18 = *v16++;
        v19 = XLATEOBJ_iXlate(pxlo, *v10);
        if ( (_DWORD)v18 )
        {
          v8 += v18;
          v20 = (_DWORD *)((char *)a2 + 4 * v9 + 16);
          v9 += v18;
          do
          {
            *v20++ &= v19;
            LODWORD(v18) = v18 - 1;
          }
          while ( (_DWORD)v18 );
        }
        else
        {
          *((_DWORD *)a2 + v9 + 4) &= v19;
        }
        ++v10;
        --v17;
      }
      while ( v17 );
    }
  }
  else if ( a6 != a7 )
  {
    v11 = (unsigned int *)((char *)a1 + 32);
    v12 = (unsigned int)(a7 - a6);
    do
    {
      v13 = *v11++;
      if ( (_DWORD)v13 )
      {
        v8 += v13;
        v14 = (_DWORD *)((char *)a2 + 4 * v9 + 16);
        v9 += v13;
        do
        {
          *v14++ &= *v10;
          LODWORD(v13) = v13 - 1;
        }
        while ( (_DWORD)v13 );
      }
      else
      {
        *((_DWORD *)a2 + v9 + 4) &= *v10;
      }
      ++v10;
      --v12;
    }
    while ( v12 );
  }
  return (struct _STRRUN *)((char *)a2 + 4 * v8 + 16);
}
