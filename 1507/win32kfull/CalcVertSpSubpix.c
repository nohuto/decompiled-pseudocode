/*
 * XREFs of CalcVertSpSubpix @ 0x1C00EC920
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CalcVertSpSubpix(int a1, int *a2, int *a3)
{
  int v3; // eax
  int v4; // r9d
  int v5; // edx
  int v6; // r10d
  int v7; // r11d
  int v8; // edi
  int v9; // ebx
  int v10; // r8d
  int v11; // ecx
  __int64 result; // rax
  int v13; // r9d
  int v14; // r10d

  v3 = *a2;
  v4 = a2[1];
  v5 = a2[2];
  v6 = a3[1];
  v7 = (a1 << 6) + 32;
  if ( v3 >= v5 )
  {
    v8 = a3[2];
    v9 = v5;
    v10 = *a3;
    v5 = v3;
  }
  else
  {
    v8 = *a3;
    v9 = v3;
    v10 = a3[2];
  }
  do
  {
    v11 = (v9 + v5 + 2 * v4 + 1) >> 2;
    result = (unsigned int)((v8 + v10 + 2 * v6 + 1) >> 2);
    if ( v11 > v7 )
    {
      v13 = v9 + v4;
      v5 = v11;
      v14 = v8 + v6;
      v10 = result;
    }
    else
    {
      if ( v11 >= v7 )
        continue;
      v13 = v5 + v4;
      v9 = v11;
      v14 = v10 + v6;
      v8 = result;
    }
    v4 = v13 >> 1;
    v6 = v14 >> 1;
  }
  while ( v11 != v7 );
  return result;
}
