/*
 * XREFs of ?pxrlStrRead24OR@@YAPEAU_XRUNLEN@@PEAU_STRDDA@@PEAU_STRRUN@@PEAE2PEAU_XLATEOBJ@@JJJ@Z @ 0x1C02BDB90
 * Callers:
 *     <none>
 * Callees:
 *     XLATEOBJ_iXlate @ 0x1C00F95E0 (XLATEOBJ_iXlate.c)
 */

struct _XRUNLEN *__fastcall pxrlStrRead24OR(
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
  unsigned __int8 *v10; // rdi
  unsigned int *v11; // r8
  __int64 v12; // r9
  __int64 v13; // rcx
  _DWORD *v14; // rdx
  unsigned int *v15; // r12
  __int64 v16; // r15
  __int64 v17; // rbp
  ULONG v18; // eax
  _DWORD *v19; // rcx
  ULONG iColora; // [rsp+78h] [rbp+40h]

  HIBYTE(iColora) = 0;
  v8 = 0;
  v9 = 0LL;
  *((_DWORD *)a2 + 2) = *(_DWORD *)a1;
  v10 = &a3[2 * a6 + a6];
  *((_DWORD *)a2 + 3) = *((_DWORD *)a1 + 2) - *(_DWORD *)a1;
  if ( pxlo )
  {
    if ( a6 != a7 )
    {
      v15 = (unsigned int *)((char *)a1 + 32);
      v16 = (unsigned int)(a7 - a6);
      do
      {
        v17 = *v15++;
        LOWORD(iColora) = *(_WORD *)v10;
        BYTE2(iColora) = v10[2];
        v18 = XLATEOBJ_iXlate(pxlo, iColora);
        HIBYTE(iColora) = HIBYTE(v18);
        if ( (_DWORD)v17 )
        {
          v8 += v17;
          v19 = (_DWORD *)((char *)a2 + 4 * v9 + 16);
          v9 += v17;
          do
          {
            *v19++ |= v18;
            LODWORD(v17) = v17 - 1;
          }
          while ( (_DWORD)v17 );
        }
        else
        {
          *((_DWORD *)a2 + v9 + 4) |= v18;
        }
        v10 += 3;
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
      LOWORD(iColora) = *(_WORD *)v10;
      BYTE2(iColora) = v10[2];
      if ( (_DWORD)v13 )
      {
        v8 += v13;
        v14 = (_DWORD *)((char *)a2 + 4 * v9 + 16);
        v9 += v13;
        do
        {
          *v14++ |= iColora;
          LODWORD(v13) = v13 - 1;
        }
        while ( (_DWORD)v13 );
      }
      else
      {
        *((_DWORD *)a2 + v9 + 4) |= iColora;
      }
      v10 += 3;
      --v12;
    }
    while ( v12 );
  }
  return (struct _STRRUN *)((char *)a2 + 4 * v8 + 16);
}
