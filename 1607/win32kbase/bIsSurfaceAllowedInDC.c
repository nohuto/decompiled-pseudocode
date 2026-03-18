/*
 * XREFs of bIsSurfaceAllowedInDC @ 0x1C00CD5C0
 * Callers:
 *     ?hbmSelectBitmapInternal@@YAPEAUHBITMAP__@@AEAVXDCOBJ@@PEAU1@HHH@Z @ 0x1C00C4EA0 (-hbmSelectBitmapInternal@@YAPEAUHBITMAP__@@AEAVXDCOBJ@@PEAU1@HHH@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall bIsSurfaceAllowedInDC(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  unsigned int v3; // r8d
  unsigned int v4; // r9d
  int v5; // edx

  v2 = *(_QWORD *)(a1 + 48);
  if ( (SURFACE *)a1 == SURFACE::pdibDefault )
    return 1;
  v3 = 0;
  v4 = 1;
  if ( !a2 )
    return v4;
  if ( !*(_QWORD *)(a1 + 40) )
    return 1;
  v5 = *(_DWORD *)(a2 + 56) & 1;
  if ( v5 && (*(_DWORD *)(a1 + 112) & 0x40000) != 0 || v2 && v5 != (*(_DWORD *)(v2 + 56) & 1) )
    return v3;
  return v4;
}
