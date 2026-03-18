/*
 * XREFs of DNG_StretchCol @ 0x1400DFD00
 * Callers:
 *     RenderNineGridInternal @ 0x1400DFE90 (RenderNineGridInternal.c)
 * Callees:
 *     DNG_DrawRow @ 0x1400E0D70 (DNG_DrawRow.c)
 *     memmove @ 0x14034FF00 (memmove.c)
 */

unsigned __int64 __fastcall DNG_StretchCol(int *a1, int *a2)
{
  __int64 v2; // rdi
  int v4; // r9d
  __int64 v5; // rsi
  unsigned int v6; // r15d
  unsigned int v7; // ebp
  __int64 v8; // r14
  __int64 v9; // r13
  int v10; // eax
  int v11; // edx
  unsigned __int64 result; // rax
  __int64 v13; // r12
  __int64 v14; // rcx
  int v15; // r8d
  char *v16; // rcx
  const void *v17; // rdx
  char *v18; // r11
  unsigned __int64 v19; // r9
  unsigned __int64 v20; // r10
  int v21; // [rsp+70h] [rbp+8h]
  int v22; // [rsp+78h] [rbp+10h]
  __int64 v23; // [rsp+80h] [rbp+18h]

  v4 = a1[4];
  v5 = *((_QWORD *)a1 + 4);
  v6 = a2[1];
  v7 = 0;
  v23 = *((_QWORD *)a1 + 1);
  v2 = v23;
  v8 = v23 - 4LL * a2[6] * v4;
  v21 = a2[3];
  v9 = v23 - 4LL * a2[7] * v4;
  v22 = a2[2];
  v10 = *a2;
  v11 = 1;
  result = (unsigned int)(a1[10] * v10);
  v13 = v5 - 4LL * (int)result;
  if ( v8 != v9 )
  {
    do
    {
      if ( v11 )
      {
        *((_QWORD *)a1 + 1) = v8;
        *((_QWORD *)a1 + 4) = v13;
        DNG_DrawRow(a1);
      }
      else
      {
        v14 = *a1;
        result = v14 + v4;
        v15 = 4 * a1[6];
        v16 = (char *)(v8 + 4 * v14);
        v17 = (const void *)(v8 + 4 * result);
        if ( v15 <= 0 )
          break;
        v18 = &v16[v15];
        if ( v18 <= v16 )
          break;
        result = (unsigned __int64)v17 + v15;
        if ( result <= (unsigned __int64)v17 )
          break;
        v19 = *((_QWORD *)a1 + 27);
        if ( v19 > (unsigned __int64)v16 )
          break;
        v20 = *((_QWORD *)a1 + 28);
        if ( (unsigned __int64)v18 > v20 )
          break;
        if ( (result > v20 || v19 > (unsigned __int64)v17)
          && (*((_QWORD *)a1 + 29) > (unsigned __int64)v17 || result > *((_QWORD *)a1 + 30)) )
        {
          break;
        }
        memmove(v16, v17, v15);
      }
      v11 = (v6 + v22 < v6) + v21;
      v7 += v11;
      if ( v7 < a1[12] )
        v13 -= 4LL * a1[10] * v11;
      v4 = a1[4];
      v6 += v22;
      result = -(__int64)v4;
      v8 -= 4LL * v4;
    }
    while ( v8 != v9 );
    v2 = v23;
  }
  *((_QWORD *)a1 + 1) = v2;
  *((_QWORD *)a1 + 4) = v5;
  return result;
}
