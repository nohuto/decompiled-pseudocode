/*
 * XREFs of scl_ScaleFromFixedFUnits @ 0x1C0148630
 * Callers:
 *     scl_ScaleFixedCurrentCharPoints @ 0x1C014851C (scl_ScaleFixedCurrentCharPoints.c)
 *     scl_ScaleFixedCurrentPhantomPoints @ 0x1C01485A8 (scl_ScaleFixedCurrentPhantomPoints.c)
 * Callees:
 *     FixMul @ 0x1C00AFF84 (FixMul.c)
 */

__int64 __fastcall scl_ScaleFromFixedFUnits(int *a1, int a2, __int64 a3, int *a4, int a5)
{
  __int64 result; // rax
  __int64 v7; // rbx
  int v9; // ecx
  __int64 v10; // r11
  int v11; // ebx
  __int64 v12; // r11
  __int64 v13; // rdi
  int v14; // edx
  int v15; // eax
  int v16; // edi
  __int64 v17; // r11
  _DWORD *v18; // r10

  result = (unsigned int)a5;
  v7 = a5;
  if ( a2 == 1 )
  {
    if ( a1[2] < 511 )
    {
      v9 = a1[3] + 6;
      if ( a5 > 0 )
      {
        v10 = a3 - (_QWORD)a4;
        do
        {
          result = (unsigned int)(a1[1] >> 1);
          *a4 = ((int)result + a1[2] * *(int *)((char *)a4 + v10)) >> v9;
          ++a4;
          --v7;
        }
        while ( v7 );
      }
      return result;
    }
    goto LABEL_15;
  }
  if ( a2 != 2 )
  {
LABEL_15:
    v16 = *a1 >> 6;
    if ( a5 > 0 )
    {
      v17 = a3 - (_QWORD)a4;
      do
      {
        result = FixMul(*(int *)((char *)a4 + v17), v16);
        *v18 = result;
        a4 = v18 + 1;
        --v7;
      }
      while ( v7 );
    }
    return result;
  }
  v11 = a1[2] >> 6;
  if ( a5 > 0 )
  {
    v12 = a3 - (_QWORD)a4;
    v13 = (unsigned int)a5;
    do
    {
      v14 = *(int *)((char *)a4 + v12);
      v15 = a1[1] >> 1;
      if ( v14 >= 0 )
        result = (unsigned int)((v11 * v14 + v15) / a1[1]);
      else
        result = (unsigned int)-((v15 - v11 * v14) / a1[1]);
      *a4++ = result;
      --v13;
    }
    while ( v13 );
  }
  return result;
}
