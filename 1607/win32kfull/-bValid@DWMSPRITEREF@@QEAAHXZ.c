/*
 * XREFs of ?bValid@DWMSPRITEREF@@QEAAHXZ @ 0x1C00499E8
 * Callers:
 *     NtGdiDdDDICreateDCFromMemory @ 0x1C0007B20 (NtGdiDdDDICreateDCFromMemory.c)
 *     NtGdiDdDDIDestroyDCFromMemory @ 0x1C0009DB0 (NtGdiDdDDIDestroyDCFromMemory.c)
 *     ?vSetPointer@@YAXPEAUHDEV__@@PEAU_CURSINFO@@KKK@Z @ 0x1C005EC64 (-vSetPointer@@YAXPEAUHDEV__@@PEAU_CURSINFO@@KKK@Z.c)
 *     ?GreCreateSpriteInternal@@YAPEAXPEAUHDEV__@@PEAUHWND__@@PEAUtagRECT@@PEAUtagMINIWINDOWINFO@@HHHHH@Z @ 0x1C0065674 (-GreCreateSpriteInternal@@YAPEAXPEAUHDEV__@@PEAUHWND__@@PEAUtagRECT@@PEAUtagMINIWINDOWINFO@@HHHH.c)
 *     GreDereferenceObject @ 0x1C00D7D48 (GreDereferenceObject.c)
 *     GreReferenceObject @ 0x1C011FAC8 (GreReferenceObject.c)
 *     DxgkEngBltViaGDI @ 0x1C0260390 (DxgkEngBltViaGDI.c)
 *     NtGdiSetColorSpace @ 0x1C02B3230 (NtGdiSetColorSpace.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall DWMSPRITEREF::bValid(DWMSPRITEREF *this)
{
  return *((_QWORD *)this + 4) != 0LL;
}
