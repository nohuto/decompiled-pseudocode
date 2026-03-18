/*
 * XREFs of ?pxrlStrRead01AND@@YAPEAU_XRUNLEN@@PEAU_STRDDA@@PEAU_STRRUN@@PEAE2PEAU_XLATEOBJ@@JJJ@Z @ 0x1C00DA8A0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

struct _XRUNLEN *__fastcall pxrlStrRead01AND(
        struct _STRDDA *a1,
        struct _STRRUN *a2,
        unsigned __int8 *a3,
        unsigned __int8 *a4,
        struct _XLATEOBJ *a5,
        int a6,
        int a7)
{
  int v7; // ebx
  char v9; // r10
  unsigned __int8 *v10; // r15
  ULONG v11; // ebp
  int v12; // r14d
  int v13; // ecx
  int v14; // edi
  int v15; // r12d
  __int64 v16; // rsi
  unsigned int *v17; // r11
  __int64 v18; // r8
  __int64 v19; // rcx
  _DWORD *v20; // r9
  _DWORD *v21; // r9
  ULONG *pulXlate; // rax

  v7 = a6;
  v9 = a6 & 0x1F;
  v10 = &a3[4 * ((__int64)a6 >> 5)];
  if ( a5 )
  {
    pulXlate = a5->pulXlate;
    v11 = *pulXlate;
    v12 = pulXlate[1];
  }
  else
  {
    v11 = 0;
    v12 = 1;
  }
  v13 = *(_DWORD *)a1;
  v14 = 0;
  *((_DWORD *)a2 + 2) = v13;
  *((_DWORD *)a2 + 3) = *((_DWORD *)a1 + 2) - v13;
  v15 = *(_DWORD *)v10;
  if ( a6 < a7 )
  {
    v16 = a6 & 0x1F;
    v17 = (unsigned int *)((char *)a1 + 32);
    v18 = 0LL;
    while ( 1 )
    {
      v19 = *v17++;
      if ( (dword_1C02E8920[v16] & v15) != 0 )
      {
        if ( (_DWORD)v19 )
        {
          v14 += v19;
          v21 = (_DWORD *)((char *)a2 + 4 * v18 + 16);
          v18 += v19;
          do
          {
            *v21++ &= v12;
            LODWORD(v19) = v19 - 1;
          }
          while ( (_DWORD)v19 );
        }
        else
        {
          *((_DWORD *)a2 + v18 + 4) &= v12;
        }
      }
      else if ( (_DWORD)v19 )
      {
        v14 += v19;
        v20 = (_DWORD *)((char *)a2 + 4 * v18 + 16);
        v18 += v19;
        do
        {
          *v20++ &= v11;
          LODWORD(v19) = v19 - 1;
        }
        while ( (_DWORD)v19 );
      }
      else
      {
        *((_DWORD *)a2 + v18 + 4) &= v11;
      }
      ++v7;
      ++v9;
      ++v16;
      if ( v7 >= a7 )
        break;
      if ( (v9 & 0x20) != 0 )
      {
        v10 += 4;
        v9 = 0;
        v16 = 0LL;
        v15 = *(_DWORD *)v10;
      }
    }
  }
  return (struct _STRRUN *)((char *)a2 + 4 * v14 + 16);
}
