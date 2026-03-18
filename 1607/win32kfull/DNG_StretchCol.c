/*
 * XREFs of DNG_StretchCol @ 0x1C00D4A10
 * Callers:
 *     RenderNineGridInternal @ 0x1C00D4030 (RenderNineGridInternal.c)
 * Callees:
 *     DNG_DrawRow @ 0x1C00D4B90 (DNG_DrawRow.c)
 *     memmove @ 0x1C015A040 (memmove.c)
 */

unsigned __int64 __fastcall DNG_StretchCol(int *a1, int *a2)
{
  __int64 v2; // r8
  int v4; // r9d
  __int64 v5; // r10
  int v6; // r12d
  unsigned int v7; // ebp
  int v8; // r15d
  unsigned int v9; // esi
  __int64 v10; // rdi
  __int64 v11; // rcx
  int v12; // eax
  int v13; // edx
  unsigned __int64 result; // rax
  __int64 v15; // r13
  __int64 v16; // r14
  __int64 v17; // rcx
  int v18; // edx
  char *v19; // rcx
  char *v20; // r9
  size_t v21; // r8
  char *v22; // r10
  char *v23; // r11
  unsigned __int64 v24; // rdx
  __int64 v25; // [rsp+60h] [rbp+8h]
  __int64 v26; // [rsp+68h] [rbp+10h]

  v4 = a1[4];
  v5 = *((_QWORD *)a1 + 4);
  v6 = a2[3];
  v7 = 0;
  v8 = a2[2];
  v9 = a2[1];
  v25 = *((_QWORD *)a1 + 1);
  v2 = v25;
  v26 = v5;
  v10 = v25 - 4LL * v4 * a2[6];
  v11 = v4 * a2[7];
  v12 = *a2;
  v13 = 1;
  result = (unsigned int)(a1[10] * v12);
  v15 = v25 - 4 * v11;
  v16 = v5 - 4LL * (int)result;
  if ( v10 != v15 )
  {
    do
    {
      if ( v13 )
      {
        *((_QWORD *)a1 + 1) = v10;
        *((_QWORD *)a1 + 4) = v16;
        DNG_DrawRow(a1);
      }
      else
      {
        v17 = *a1;
        result = v17 + v4;
        v18 = 4 * a1[6];
        v19 = (char *)(v10 + 4 * v17);
        v20 = (char *)(v10 + 4 * result);
        if ( v18 <= 0 )
          break;
        v21 = v18;
        v22 = &v19[v18];
        if ( v22 <= v19 )
          break;
        v23 = &v20[v18];
        if ( v23 <= v20 )
          break;
        result = *((_QWORD *)a1 + 27);
        if ( result > (unsigned __int64)v19 )
          break;
        v24 = *((_QWORD *)a1 + 28);
        if ( (unsigned __int64)v22 > v24 )
          break;
        if ( (result > (unsigned __int64)v20 || (unsigned __int64)v23 > v24)
          && (*((_QWORD *)a1 + 29) > (unsigned __int64)v20 || (unsigned __int64)v23 > *((_QWORD *)a1 + 30)) )
        {
          break;
        }
        memmove(v19, v20, v21);
      }
      v13 = (v9 + v8 < v9) + v6;
      v7 += v13;
      if ( v7 < a1[12] )
        v16 -= 4LL * a1[10] * v13;
      v4 = a1[4];
      v9 += v8;
      result = -(__int64)v4;
      v10 -= 4LL * v4;
    }
    while ( v10 != v15 );
    v2 = v25;
    v5 = v26;
  }
  *((_QWORD *)a1 + 1) = v2;
  *((_QWORD *)a1 + 4) = v5;
  return result;
}
