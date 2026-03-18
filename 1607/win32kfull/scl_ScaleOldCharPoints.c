/*
 * XREFs of scl_ScaleOldCharPoints @ 0x1C00C97E0
 * Callers:
 *     fsg_ExecuteGlyph @ 0x1C00C8060 (fsg_ExecuteGlyph.c)
 * Callees:
 *     scl_Scale @ 0x1C001E4D8 (scl_Scale.c)
 *     FixMul @ 0x1C00C947C (FixMul.c)
 */

__int64 __fastcall scl_ScaleOldCharPoints(__int64 a1, __int64 a2)
{
  int v3; // eax
  int *v5; // r10
  int v6; // edx
  __int64 v7; // rdi
  unsigned __int16 v8; // cx
  __int64 v9; // r11
  __int64 v10; // rdi
  int v11; // edx
  int v12; // r8d
  int *v13; // r10
  __int64 v14; // rdi
  __int64 result; // rax
  __int64 v16; // r11
  __int64 v17; // rdi
  int v18; // edx
  __int64 v19; // rdi
  int v20; // edx
  int v21; // ecx
  int v22; // r8d
  int v23; // edx
  __int64 v24; // rdi
  int v25; // edx
  int v26; // r8d
  int v27; // edx
  unsigned int v28; // edx
  int v29; // edx
  int v30; // ecx
  __int64 v31; // rdi
  int fixed; // eax
  _DWORD *v33; // r10
  __int64 v34; // r11
  __int64 v35; // rdi
  _DWORD *v36; // r10
  __int64 v37; // r11

  v3 = *(__int16 *)(a1 + 80) - 1;
  if ( *(_BYTE *)(a2 + 396) )
  {
    v5 = *(int **)(a1 + 16);
    v6 = *(_DWORD *)(a2 + 184);
    v7 = *(_QWORD *)(a1 + 32);
    v8 = *(_WORD *)(*(_QWORD *)(a1 + 64) + 2LL * v3) + 1;
    v9 = v8;
    if ( v6 == 1 )
    {
      if ( v8 )
      {
        v10 = v7 - (_QWORD)v5;
        do
        {
          v11 = *(int *)((char *)v5++ + v10);
          *(v5 - 1) = ((*(int *)(a2 + 268) >> 1) + *(_DWORD *)(a2 + 272) * v11) >> *(_DWORD *)(a2 + 276);
          --v9;
        }
        while ( v9 );
      }
    }
    else if ( v6 == 2 )
    {
      if ( v8 )
      {
        v19 = v7 - (_QWORD)v5;
        do
        {
          v20 = *(int *)((char *)v5 + v19);
          v21 = *(_DWORD *)(a2 + 268);
          if ( v20 < 0 )
          {
            v23 = -(((v21 >> 1) - *(_DWORD *)(a2 + 272) * v20) / v21);
          }
          else
          {
            v22 = *(_DWORD *)(a2 + 272) * v20 + (v21 >> 1);
            if ( v21 == 2250 )
              v23 = v22 / 2250;
            else
              v23 = v22 / v21;
          }
          *v5++ = v23;
          --v9;
        }
        while ( v9 );
      }
    }
    else if ( v8 )
    {
      v31 = v7 - (_QWORD)v5;
      do
      {
        fixed = FixMul(*(int *)((char *)v5 + v31), *(_DWORD *)(a2 + 264));
        *v33 = fixed;
        v5 = v33 + 1;
      }
      while ( v34 != 1 );
    }
    v12 = *(_DWORD *)(a2 + 188);
    v13 = *(int **)(a1 + 24);
    v14 = *(_QWORD *)(a1 + 40);
    result = *(_QWORD *)(a1 + 64);
    v16 = (unsigned __int16)(*(_WORD *)(result + 2LL * (*(__int16 *)(a1 + 80) - 1)) + 1);
    if ( v12 == 1 )
    {
      if ( *(_WORD *)(result + 2LL * (*(__int16 *)(a1 + 80) - 1)) != 0xFFFF )
      {
        v17 = v14 - (_QWORD)v13;
        do
        {
          v18 = *(int *)((char *)v13++ + v17);
          result = (unsigned int)(*(int *)(a2 + 284) >> 1);
          *(v13 - 1) = ((int)result + *(_DWORD *)(a2 + 288) * v18) >> *(_DWORD *)(a2 + 292);
          --v16;
        }
        while ( v16 );
      }
    }
    else if ( v12 == 2 )
    {
      if ( *(_WORD *)(result + 2LL * (*(__int16 *)(a1 + 80) - 1)) != 0xFFFF )
      {
        v24 = v14 - (_QWORD)v13;
        do
        {
          v25 = *(int *)((char *)v13 + v24);
          v26 = *(_DWORD *)(a2 + 284);
          if ( v25 < 0 )
          {
            v30 = v25 * *(_DWORD *)(a2 + 288);
            result = (unsigned int)(((v26 >> 1) - v30) / v26);
            v29 = -(((v26 >> 1) - v30) / v26);
          }
          else
          {
            v27 = (v26 >> 1) + *(_DWORD *)(a2 + 288) * v25;
            if ( v26 == 2250 )
            {
              v28 = (int)((unsigned __int64)(1954687339LL * v27) >> 32) >> 10;
              result = v28 >> 31;
              v29 = result + v28;
            }
            else
            {
              result = (unsigned int)(v27 / v26);
              v29 = v27 / v26;
            }
          }
          *v13++ = v29;
          --v16;
        }
        while ( v16 );
      }
    }
    else if ( *(_WORD *)(result + 2LL * (*(__int16 *)(a1 + 80) - 1)) != 0xFFFF )
    {
      v35 = v14 - (_QWORD)v13;
      do
      {
        result = FixMul(*(int *)((char *)v13 + v35), *(_DWORD *)(a2 + 280));
        *v36 = result;
        v13 = v36 + 1;
      }
      while ( v37 != 1 );
    }
  }
  else
  {
    scl_Scale(
      (int *)(a2 + 232),
      *(_DWORD *)(a2 + 176),
      *(_QWORD *)(a1 + 32),
      *(int **)(a1 + 16),
      (unsigned __int16)(*(_WORD *)(*(_QWORD *)(a1 + 64) + 2LL * v3) + 1));
    return scl_Scale(
             (int *)(a2 + 248),
             *(_DWORD *)(a2 + 180),
             *(_QWORD *)(a1 + 40),
             *(int **)(a1 + 24),
             (unsigned __int16)(*(_WORD *)(*(_QWORD *)(a1 + 64) + 2LL * (*(__int16 *)(a1 + 80) - 1)) + 1));
  }
  return result;
}
