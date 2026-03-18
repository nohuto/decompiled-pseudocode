/*
 * XREFs of scl_ScaleDownFromSubPixelOverscale @ 0x1C00F8464
 * Callers:
 *     fs__Contour @ 0x1C00C7348 (fs__Contour.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall scl_ScaleDownFromSubPixelOverscale(__int64 a1, int a2)
{
  int v2; // r9d
  int v3; // eax
  __int64 v5; // rcx
  __int64 result; // rax
  __int64 v7; // r8
  __int64 v8; // rdx
  __int64 v9; // r8

  v2 = 0;
  v3 = *(__int16 *)(a1 + 80) - 1;
  if ( a2 )
  {
    v8 = v3;
    result = *(_QWORD *)(a1 + 64);
    if ( *(_WORD *)(result + 2 * v8) != 0xFFF7 )
    {
      v9 = 0LL;
      do
      {
        ++v2;
        *(_DWORD *)(v9 + *(_QWORD *)(a1 + 16)) = (*(_DWORD *)(v9 + *(_QWORD *)a1) + 3) / 6;
        *(_DWORD *)(v9 + *(_QWORD *)(a1 + 24)) = (*(_DWORD *)(*(_QWORD *)(a1 + 8) + v9) + 2) / 5;
        v9 += 4LL;
        result = (unsigned __int16)(*(_WORD *)(*(_QWORD *)(a1 + 64) + 2LL * (*(__int16 *)(a1 + 80) - 1)) + 9);
      }
      while ( v2 < (int)result );
    }
  }
  else
  {
    v5 = v3;
    result = *(_QWORD *)(a1 + 64);
    if ( *(_WORD *)(result + 2 * v5) != 0xFFF7 )
    {
      v7 = 0LL;
      do
      {
        ++v2;
        *(_DWORD *)(v7 + *(_QWORD *)(a1 + 16)) = (*(_DWORD *)(v7 + *(_QWORD *)a1) + 3) / 6;
        v7 += 4LL;
        result = (unsigned __int16)(*(_WORD *)(*(_QWORD *)(a1 + 64) + 2LL * (*(__int16 *)(a1 + 80) - 1)) + 9);
      }
      while ( v2 < (int)result );
    }
  }
  return result;
}
