/*
 * XREFs of ?bInactive@DC@@QEAAHXZ @ 0x1C0006014
 * Callers:
 *     NtGdiFillPath @ 0x1C0005E40 (NtGdiFillPath.c)
 *     NtGdiFlattenPath @ 0x1C02A54F0 (NtGdiFlattenPath.c)
 *     NtGdiGetPath @ 0x1C02A55A0 (NtGdiGetPath.c)
 *     NtGdiPathToRegion @ 0x1C02A57F0 (NtGdiPathToRegion.c)
 *     NtGdiSelectClipPath @ 0x1C02A5910 (NtGdiSelectClipPath.c)
 *     NtGdiStrokeAndFillPath @ 0x1C02A5A40 (NtGdiStrokeAndFillPath.c)
 *     NtGdiStrokePath @ 0x1C02A5B80 (NtGdiStrokePath.c)
 *     NtGdiWidenPath @ 0x1C02A5C90 (NtGdiWidenPath.c)
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
