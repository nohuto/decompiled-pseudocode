/*
 * XREFs of ?bConvertDfbDcToDib@@YAHPEAVXDCOBJ@@@Z @ 0x1C02B35C0
 * Callers:
 *     NtGdiExtFloodFill @ 0x1C0103240 (NtGdiExtFloodFill.c)
 *     ?bSpUpdateShape@@YAHPEAVSPRITE@@KPEAUHDC__@@1KPEAU_BLENDFUNCTION@@PEAU_POINTL@@PEAUtagSIZE@@PEAU_RECTL@@@Z @ 0x1C0271B2C (-bSpUpdateShape@@YAHPEAVSPRITE@@KPEAUHDC__@@1KPEAU_BLENDFUNCTION@@PEAU_POINTL@@PEAUtagSIZE@@PEAU.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall bConvertDfbDcToDib(struct XDCOBJ *a1)
{
  return pConvertDfbSurfaceToDib(*(_QWORD *)(*(_QWORD *)a1 + 512LL), 1LL) != 0;
}
