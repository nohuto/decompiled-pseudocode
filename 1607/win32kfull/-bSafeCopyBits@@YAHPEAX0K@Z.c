/*
 * XREFs of ?bSafeCopyBits@@YAHPEAX0K@Z @ 0x1C02ABF28
 * Callers:
 *     NtGdiCLIPOBJ_bEnum @ 0x1C02AC500 (NtGdiCLIPOBJ_bEnum.c)
 *     NtGdiFONTOBJ_cGetAllGlyphHandles @ 0x1C02B0050 (NtGdiFONTOBJ_cGetAllGlyphHandles.c)
 *     NtGdiFONTOBJ_vGetInfo @ 0x1C02B08D0 (NtGdiFONTOBJ_vGetInfo.c)
 *     NtGdiHT_Get8BPPFormatPalette @ 0x1C02B0A10 (NtGdiHT_Get8BPPFormatPalette.c)
 *     NtGdiHT_Get8BPPMaskPalette @ 0x1C02B0AB0 (NtGdiHT_Get8BPPMaskPalette.c)
 *     NtGdiXFORMOBJ_bApplyXform @ 0x1C02B17F0 (NtGdiXFORMOBJ_bApplyXform.c)
 *     NtGdiXLATEOBJ_cGetPalette @ 0x1C02B1A90 (NtGdiXLATEOBJ_cGetPalette.c)
 * Callees:
 *     memmove @ 0x1C015A040 (memmove.c)
 */

__int64 __fastcall bSafeCopyBits(char *a1, void *a2, unsigned int a3)
{
  char *v3; // r10

  if ( a1 && a2 )
  {
    v3 = &a1[a3];
    if ( (unsigned __int64)v3 > W32UserProbeAddress || v3 <= a1 )
      *W32UserProbeAddress = 0;
    memmove(a1, a2, a3);
  }
  return 1LL;
}
