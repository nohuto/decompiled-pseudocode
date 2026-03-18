/*
 * XREFs of scl_ScaleDownFromSubPixelOverscale @ 0x1C00DA1F4
 * Callers:
 *     fs__Contour @ 0x1C00AE090 (fs__Contour.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall scl_ScaleDownFromSubPixelOverscale(__int64 a1, int a2)
{
  int v2; // r9d
  __int64 result; // rax
  __int64 v4; // r8
  __int64 v5; // r8

  v2 = 0;
  if ( a2 )
  {
    result = *(_QWORD *)(a1 + 64);
    if ( *(_WORD *)(result + 2LL * *(__int16 *)(a1 + 80) - 2) != 0xFFF7 )
    {
      v5 = 0LL;
      do
      {
        ++v2;
        *(_DWORD *)(v5 + *(_QWORD *)(a1 + 16)) = (*(_DWORD *)(v5 + *(_QWORD *)a1) + 3) / 6;
        *(_DWORD *)(v5 + *(_QWORD *)(a1 + 24)) = (*(_DWORD *)(*(_QWORD *)(a1 + 8) + v5) + 2) / 5;
        v5 += 4LL;
        result = (unsigned __int16)(*(_WORD *)(*(_QWORD *)(a1 + 64) + 2LL * *(__int16 *)(a1 + 80) - 2) + 9);
      }
      while ( v2 < (int)result );
    }
  }
  else
  {
    result = *(_QWORD *)(a1 + 64);
    if ( *(_WORD *)(result + 2LL * *(__int16 *)(a1 + 80) - 2) != 0xFFF7 )
    {
      v4 = 0LL;
      do
      {
        ++v2;
        *(_DWORD *)(v4 + *(_QWORD *)(a1 + 16)) = (*(_DWORD *)(v4 + *(_QWORD *)a1) + 3) / 6;
        v4 += 4LL;
        result = (unsigned __int16)(*(_WORD *)(*(_QWORD *)(a1 + 64) + 2LL * *(__int16 *)(a1 + 80) - 2) + 9);
      }
      while ( v2 < (int)result );
    }
  }
  return result;
}
