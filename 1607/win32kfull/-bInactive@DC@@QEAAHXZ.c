/*
 * XREFs of ?bInactive@DC@@QEAAHXZ @ 0x1C02A5D20
 * Callers:
 *     NtGdiFillPath @ 0x1C02A6000 (NtGdiFillPath.c)
 *     NtGdiFlattenPath @ 0x1C02A6100 (NtGdiFlattenPath.c)
 *     NtGdiGetPath @ 0x1C02A61B0 (NtGdiGetPath.c)
 *     NtGdiPathToRegion @ 0x1C02A6400 (NtGdiPathToRegion.c)
 *     NtGdiSelectClipPath @ 0x1C02A6530 (NtGdiSelectClipPath.c)
 *     NtGdiStrokeAndFillPath @ 0x1C02A6660 (NtGdiStrokeAndFillPath.c)
 *     NtGdiStrokePath @ 0x1C02A67A0 (NtGdiStrokePath.c)
 *     NtGdiWidenPath @ 0x1C02A68B0 (NtGdiWidenPath.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DC::bInactive(DC *this)
{
  int v1; // eax
  unsigned int v2; // ecx

  if ( !*((_QWORD *)this + 21) )
    return 0;
  v1 = *((_DWORD *)this + 44);
  v2 = 1;
  if ( (v1 & 1) != 0 )
    return 0;
  return v2;
}
