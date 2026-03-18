/*
 * XREFs of scl_ScaleDownFromSubPixelOverscale @ 0x1C00B14EC
 * Callers:
 *     fsg_GetContourData @ 0x1C00B0F3C (fsg_GetContourData.c)
 *     fs__Contour @ 0x1C00B4F90 (fs__Contour.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall scl_ScaleDownFromSubPixelOverscale(__int64 a1)
{
  int v1; // r10d
  __int64 result; // rax
  __int64 v3; // r8

  v1 = 0;
  result = *(_QWORD *)(a1 + 64);
  if ( *(_WORD *)(result + 2LL * *(__int16 *)(a1 + 80) - 2) != 0xFFF7 )
  {
    v3 = 0LL;
    do
    {
      ++v1;
      *(_DWORD *)(v3 + *(_QWORD *)(a1 + 16)) = (*(_DWORD *)(v3 + *(_QWORD *)a1) + 3) / 6;
      v3 += 4LL;
      result = (unsigned __int16)(*(_WORD *)(*(_QWORD *)(a1 + 64) + 2LL * *(__int16 *)(a1 + 80) - 2) + 9);
    }
    while ( v1 < (int)result );
  }
  return result;
}
