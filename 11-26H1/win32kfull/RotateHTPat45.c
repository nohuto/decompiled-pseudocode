/*
 * XREFs of RotateHTPat45 @ 0x140304170
 * Callers:
 *     Generate_HTSC_WORD @ 0x1401E7DF4 (Generate_HTSC_WORD.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RotateHTPat45(unsigned __int8 *a1, _WORD *a2, unsigned int a3, unsigned int a4, int a5, int a6)
{
  unsigned int v6; // r10d
  unsigned int v7; // r12d
  unsigned int v8; // r13d
  unsigned int v9; // r15d
  unsigned int v12; // ecx
  __int64 result; // rax
  __int64 v14; // r14
  __int64 v15; // rbp
  _WORD *v16; // rsi
  _WORD *v17; // r9
  unsigned int v18; // ebx
  unsigned __int8 *v19; // r14
  int v20; // r8d
  unsigned int v21; // r8d
  __int64 v22; // [rsp+8h] [rbp-30h]

  v6 = a4 >> 1;
  v7 = 2 * a5;
  v8 = a3 >> 1;
  v9 = 6 * a3;
  v12 = 6 * ((a3 >> 1) + a6 * (a4 >> 1));
  result = (unsigned int)(6 * a6);
  if ( a4 >> 1 )
  {
    v14 = v12;
    v15 = (unsigned int)result;
    v22 = (unsigned int)result;
    do
    {
      v16 = a2;
      v17 = (_WORD *)((char *)a2 + v14);
      a2 = (_WORD *)((char *)a2 + v15);
      --v6;
      v18 = a3;
      if ( a3 )
      {
        v19 = a1;
        do
        {
          v20 = 8190 * *v19;
          --v18;
          ++v19;
          v21 = a5 + v20;
          *v16 = v21 / v7;
          result = (v21 - 4095) / v7;
          v16 += 3;
          *v17 = result;
          v17 += 3;
          if ( v18 == v8 )
          {
            result = v9;
            v17 = (_WORD *)((char *)v17 - v9);
          }
        }
        while ( v18 );
        v15 = v22;
        a1 = v19;
        v14 = v12;
      }
    }
    while ( v6 );
  }
  return result;
}
