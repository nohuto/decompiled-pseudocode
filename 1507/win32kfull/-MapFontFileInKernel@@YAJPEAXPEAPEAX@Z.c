/*
 * XREFs of ?MapFontFileInKernel@@YAJPEAXPEAPEAX@Z @ 0x1C029B1A8
 * Callers:
 *     ?pchTranslate@RFONTOBJ@@QEAAPEADPEAD@Z @ 0x1C029B7E0 (-pchTranslate@RFONTOBJ@@QEAAPEADPEAD@Z.c)
 *     NtGdiGetFontFileData @ 0x1C02B4880 (NtGdiGetFontFileData.c)
 * Callees:
 *     Win32MapViewInSessionSpace @ 0x1C01E85B8 (Win32MapViewInSessionSpace.c)
 *     ?vClosePrintKView@@YAXXZ @ 0x1C029BC30 (-vClosePrintKView@@YAXXZ.c)
 */

int __fastcall MapFontFileInKernel(PVOID Section, PVOID *MappedBase)
{
  int result; // eax
  ULONG_PTR ViewSize; // [rsp+38h] [rbp+10h] BYREF

  *MappedBase = 0LL;
  ViewSize = 0LL;
  result = Win32MapViewInSessionSpace(Section, MappedBase, &ViewSize);
  if ( result < 0 )
  {
    vClosePrintKView();
    return Win32MapViewInSessionSpace(Section, MappedBase, &ViewSize);
  }
  return result;
}
