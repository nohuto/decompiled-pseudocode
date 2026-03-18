/*
 * XREFs of ?MapFontFileInKernel@@YAJPEAXPEAPEAX@Z @ 0x1C029A76C
 * Callers:
 *     ?pchTranslate@RFONTOBJ@@QEAAPEADPEAD@Z @ 0x1C029ACD0 (-pchTranslate@RFONTOBJ@@QEAAPEADPEAD@Z.c)
 *     NtGdiGetFontFileData @ 0x1C02B6980 (NtGdiGetFontFileData.c)
 * Callees:
 *     ?vClosePrintKView@@YAXXZ @ 0x1C029B120 (-vClosePrintKView@@YAXXZ.c)
 */

int __fastcall MapFontFileInKernel(PVOID Section, PVOID *MappedBase)
{
  int result; // eax
  ULONG_PTR ViewSize; // [rsp+38h] [rbp+10h] BYREF

  *MappedBase = 0LL;
  ViewSize = 0LL;
  result = MmMapViewInSessionSpace(Section, MappedBase, &ViewSize);
  if ( result < 0 )
  {
    vClosePrintKView();
    return MmMapViewInSessionSpace(Section, MappedBase, &ViewSize);
  }
  return result;
}
