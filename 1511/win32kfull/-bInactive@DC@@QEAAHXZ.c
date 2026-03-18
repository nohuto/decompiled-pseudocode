/*
 * XREFs of ?bInactive@DC@@QEAAHXZ @ 0x1C02A4BD0
 * Callers:
 *     NtGdiFillPath @ 0x1C02A4E80 (NtGdiFillPath.c)
 *     NtGdiFlattenPath @ 0x1C02A4F80 (NtGdiFlattenPath.c)
 *     NtGdiGetPath @ 0x1C02A5020 (NtGdiGetPath.c)
 *     NtGdiPathToRegion @ 0x1C02A5260 (NtGdiPathToRegion.c)
 *     NtGdiSelectClipPath @ 0x1C02A5380 (NtGdiSelectClipPath.c)
 *     NtGdiStrokeAndFillPath @ 0x1C02A54A0 (NtGdiStrokeAndFillPath.c)
 *     NtGdiStrokePath @ 0x1C02A55E0 (NtGdiStrokePath.c)
 *     NtGdiWidenPath @ 0x1C02A56F0 (NtGdiWidenPath.c)
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
