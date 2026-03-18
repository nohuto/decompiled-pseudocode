/*
 * XREFs of GreSetPaletteOwner @ 0x1C005CFA0
 * Callers:
 *     ??0PDEVOBJ@@QEAA@PEAU_LDEV@@PEAU_devicemodeW@@PEAG22PEAXPEAUtagREMOTETYPEONENODE@@PEAU_GDIINFO@@PEAUtagDEVINFO@@HKK@Z @ 0x1C0038390 (--0PDEVOBJ@@QEAA@PEAU_LDEV@@PEAU_devicemodeW@@PEAG22PEAXPEAUtagREMOTETYPEONENODE@@PEAU_GDIINFO@@.c)
 *     GreCreatePaletteInternal @ 0x1C005CF0C (GreCreatePaletteInternal.c)
 *     EngCreatePalette @ 0x1C005E000 (EngCreatePalette.c)
 * Callees:
 *     HmgSetOwner @ 0x1C0023D60 (HmgSetOwner.c)
 */

__int64 __fastcall GreSetPaletteOwner(HPALETTE a1, int a2)
{
  __int64 result; // rax

  result = 0LL;
  if ( a1 != qword_1C0103E68 )
    return HmgSetOwner((int)a1, a2, 8);
  return result;
}
