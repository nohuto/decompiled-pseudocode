/*
 * XREFs of UnionRect @ 0x1C00E29C0
 * Callers:
 *     CenterRectangles @ 0x1C00E2C90 (CenterRectangles.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall UnionRect(__int64 a1, int *a2, int *a3)
{
  BOOL v4; // ecx
  int v5; // r10d
  BOOL v6; // eax
  __int64 result; // rax
  __int128 v8; // xmm0
  int v9; // ecx
  int v10; // ecx
  int v11; // ecx

  v4 = *a2 >= a2[2] || a2[1] >= a2[3];
  v5 = *a3;
  v6 = *a3 >= a3[2] || a3[1] >= a3[3];
  if ( v4 )
  {
    if ( v6 )
    {
      result = 0LL;
      *(_QWORD *)a1 = 0LL;
      *(_QWORD *)(a1 + 8) = 0LL;
      return result;
    }
    v8 = *(_OWORD *)a3;
  }
  else
  {
    if ( !v6 )
    {
      if ( *a2 < v5 )
        v5 = *a2;
      *(_DWORD *)a1 = v5;
      v9 = a3[1];
      if ( a2[1] < v9 )
        v9 = a2[1];
      *(_DWORD *)(a1 + 4) = v9;
      v10 = a3[2];
      if ( a2[2] > v10 )
        v10 = a2[2];
      *(_DWORD *)(a1 + 8) = v10;
      v11 = a3[3];
      if ( a2[3] > v11 )
        v11 = a2[3];
      *(_DWORD *)(a1 + 12) = v11;
      return 1LL;
    }
    v8 = *(_OWORD *)a2;
  }
  *(_OWORD *)a1 = v8;
  return 1LL;
}
