/*
 * XREFs of ?pxrlStrRead08AND@@YAPEAU_XRUNLEN@@PEAU_STRDDA@@PEAU_STRRUN@@PEAE2PEAU_XLATEOBJ@@JJJ@Z @ 0x1C02BADA0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

struct _XRUNLEN *__fastcall pxrlStrRead08AND(
        struct _STRDDA *a1,
        struct _STRRUN *a2,
        unsigned __int8 *a3,
        unsigned __int8 *a4,
        struct _XLATEOBJ *a5,
        int a6,
        int a7)
{
  int v8; // edi
  unsigned __int8 *v9; // r8
  __int64 v10; // rdx
  unsigned int *v11; // rbx
  __int64 v12; // r11
  __int64 v13; // rcx
  _DWORD *v14; // r9
  unsigned int *v15; // rbx
  __int64 v16; // rsi
  __int64 v17; // r9
  _DWORD *v18; // r11

  v8 = 0;
  v9 = &a3[a6];
  *((_DWORD *)a2 + 2) = *(_DWORD *)a1;
  *((_DWORD *)a2 + 3) = *((_DWORD *)a1 + 2) - *(_DWORD *)a1;
  v10 = 0LL;
  if ( a5 )
  {
    if ( a6 != a7 )
    {
      v15 = (unsigned int *)((char *)a1 + 32);
      v16 = (unsigned int)(a7 - a6);
      do
      {
        v17 = *v15++;
        if ( (_DWORD)v17 )
        {
          v8 += v17;
          v18 = (_DWORD *)((char *)a2 + 4 * v10 + 16);
          v10 += v17;
          do
          {
            *v18++ &= a5->pulXlate[*v9];
            LODWORD(v17) = v17 - 1;
          }
          while ( (_DWORD)v17 );
        }
        else
        {
          *((_DWORD *)a2 + v10 + 4) &= a5->pulXlate[*v9];
        }
        ++v9;
        --v16;
      }
      while ( v16 );
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
        v14 = (_DWORD *)((char *)a2 + 4 * v10 + 16);
        v10 += v13;
        do
        {
          *v14++ &= *v9;
          LODWORD(v13) = v13 - 1;
        }
        while ( (_DWORD)v13 );
      }
      else
      {
        *((_DWORD *)a2 + v10 + 4) &= *v9;
      }
      ++v9;
      --v12;
    }
    while ( v12 );
  }
  return (struct _STRRUN *)((char *)a2 + 4 * v8 + 16);
}
