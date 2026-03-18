/*
 * XREFs of CalcHorizSpSubpix @ 0x1C02DDF90
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CalcHorizSpSubpix(int a1, unsigned int *a2, int *a3)
{
  int v3; // eax
  int v4; // r10d
  int v5; // r8d
  int v6; // r9d
  int v7; // r11d
  unsigned int v8; // ebx
  int v9; // edi
  unsigned int v10; // esi
  unsigned int v11; // edx
  int v12; // ecx
  int v13; // r9d
  int v14; // r10d

  v3 = *a3;
  v4 = a3[1];
  v5 = a3[2];
  v6 = a2[1];
  v7 = (a1 << 6) + 32;
  if ( v3 >= v5 )
  {
    v8 = a2[2];
    v9 = v5;
    v10 = *a2;
    v5 = v3;
  }
  else
  {
    v8 = *a2;
    v9 = v3;
    v10 = a2[2];
  }
  do
  {
    v11 = (int)(v8 + v10 + 2 * v6 + 1) >> 2;
    v12 = (v5 + 2 * v4 + v9 + 1) >> 2;
    if ( v12 <= v7 )
    {
      if ( v12 >= v7 )
        continue;
      v13 = v10 + v6;
      v8 = v11;
      v14 = v5 + v4;
      v9 = v12;
    }
    else
    {
      v13 = v8 + v6;
      v10 = v11;
      v14 = v9 + v4;
      v5 = v12;
    }
    v6 = v13 >> 1;
    v4 = v14 >> 1;
  }
  while ( v12 != v7 );
  return v11;
}
