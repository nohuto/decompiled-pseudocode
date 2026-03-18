/*
 * XREFs of ?bValidSurf@XDCOBJ@@QEAAHXZ @ 0x1C002D65C
 * Callers:
 *     GreStretchBltInternal @ 0x1C0046C60 (GreStretchBltInternal.c)
 *     GreMaskBlt @ 0x1C00F0648 (GreMaskBlt.c)
 *     NtGdiExtFloodFill @ 0x1C012E0C0 (NtGdiExtFloodFill.c)
 *     ?GreExtEscapeInternal@@YAHAEAVDCOBJ@@HHPEADH1@Z @ 0x1C0140480 (-GreExtEscapeInternal@@YAHAEAVDCOBJ@@HHPEADH1@Z.c)
 *     ?GreDoBanding@@YAHPEAUHDC__@@HPEAU_POINTL@@PEAUtagSIZE@@@Z @ 0x1C0267750 (-GreDoBanding@@YAHPEAUHDC__@@HPEAU_POINTL@@PEAUtagSIZE@@@Z.c)
 *     ?GreGetPerBandInfo@@YAKPEAUHDC__@@PEAU_PERBANDINFO@@@Z @ 0x1C026798C (-GreGetPerBandInfo@@YAKPEAUHDC__@@PEAU_PERBANDINFO@@@Z.c)
 *     ?bEndDocInternal@@YAHPEAUHDC__@@K@Z @ 0x1C0267D78 (-bEndDocInternal@@YAHPEAUHDC__@@K@Z.c)
 *     NtGdiEndPage @ 0x1C0269A00 (NtGdiEndPage.c)
 *     NtGdiStartPage @ 0x1C026A420 (NtGdiStartPage.c)
 *     GrePlgBlt @ 0x1C028000C (GrePlgBlt.c)
 *     NtGdiUpdateColors @ 0x1C02B1C00 (NtGdiUpdateColors.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall XDCOBJ::bValidSurf(XDCOBJ *this)
{
  __int64 v1; // rax
  unsigned int v2; // ecx

  v1 = *(_QWORD *)this;
  v2 = 0;
  if ( v1 && *(_QWORD *)(v1 + 512) )
    return (*(_DWORD *)(v1 + 36) & 0x5000) != 4096;
  return v2;
}
