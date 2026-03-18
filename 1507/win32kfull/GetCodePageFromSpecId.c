/*
 * XREFs of GetCodePageFromSpecId @ 0x1C0245020
 * Callers:
 *     bConvertExtras @ 0x1C015911C (bConvertExtras.c)
 *     CreateGlyphSetFromMITable @ 0x1C0244CD4 (CreateGlyphSetFromMITable.c)
 * Callees:
 *     EngGetCurrentCodePage @ 0x1C0125210 (EngGetCurrentCodePage.c)
 */

__int64 __fastcall GetCodePageFromSpecId(unsigned __int16 a1)
{
  int v1; // ebx
  unsigned int v2; // edx
  USHORT AnsiCodePage; // [rsp+30h] [rbp+8h] BYREF
  USHORT OemCodePage; // [rsp+38h] [rbp+10h] BYREF

  v1 = a1;
  EngGetCurrentCodePage(&OemCodePage, &AnsiCodePage);
  v2 = AnsiCodePage;
  switch ( v1 )
  {
    case 2:
      return 932;
    case 3:
      return 936;
    case 4:
      return 950;
    case 5:
      return 949;
  }
  return v2;
}
