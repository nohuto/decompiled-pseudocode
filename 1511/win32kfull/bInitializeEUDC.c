/*
 * XREFs of bInitializeEUDC @ 0x1C000EF50
 * Callers:
 *     <none>
 * Callees:
 *     ?vInitializeFontAssocStatus@@YAXXZ @ 0x1C000F10C (-vInitializeFontAssocStatus@@YAXXZ.c)
 *     bAddAllFlEntry @ 0x1C000F208 (bAddAllFlEntry.c)
 *     EngGetCurrentCodePage @ 0x1C00128B0 (EngGetCurrentCodePage.c)
 */

__int64 bInitializeEUDC()
{
  struct _UNICODE_STRING String; // [rsp+30h] [rbp-18h] BYREF
  USHORT AnsiCodePage; // [rsp+50h] [rbp+8h] BYREF
  USHORT OemCodePage; // [rsp+58h] [rbp+10h] BYREF
  unsigned __int16 v4; // [rsp+60h] [rbp+18h] BYREF

  Dst = 0;
  ghsemEUDC1 = (HSEMAPHORE)GreCreateSemaphore();
  if ( !ghsemEUDC1 )
    return 0LL;
  ghsemEUDC2 = (HSEMAPHORE)GreCreateSemaphore();
  if ( !ghsemEUDC2 )
    return 0LL;
  ghsemEnableEUDC = (HSEMAPHORE)GreCreateSemaphore();
  if ( !ghsemEnableEUDC )
    return 0LL;
  qword_1C0323338 = 0LL;
  gqlEUDC = 1;
  EngGetCurrentCodePage(&OemCodePage, &AnsiCodePage);
  String.Buffer = word_1C0327810;
  *(_DWORD *)&String.Length = 1310720;
  RtlIntegerToUnicodeString(AnsiCodePage, 0xAu, &String);
  SharedQueryTable.QueryRoutine = 0LL;
  SharedQueryTable.Name = L"FontLinkControl";
  SharedQueryTable.Flags = 36;
  SharedQueryTable.EntryContext = &ulFontLinkControl;
  SharedQueryTable.DefaultType = 4;
  SharedQueryTable.DefaultData = 0LL;
  SharedQueryTable.DefaultLength = 0;
  qword_1C03232E8 = 0LL;
  dword_1C03232F0 = 0;
  qword_1C03232F8 = 0LL;
  if ( RtlQueryRegistryValues(3u, L"FontLink", &SharedQueryTable, 0LL, 0LL) < 0 )
    ulFontLinkControl = 0;
  SharedQueryTable.Name = L"FontLinkDefaultChar";
  SharedQueryTable.EntryContext = &v4;
  if ( RtlQueryRegistryValues(3u, L"FontLink", &SharedQueryTable, 0LL, 0LL) < 0 )
    EudcDefaultChar = 12539;
  else
    EudcDefaultChar = v4;
  off_1C031E850 = &off_1C031E848;
  off_1C031E848 = &off_1C031E848;
  if ( (ulFontLinkControl & 1) == 0 )
  {
    dword_1C0323BAC = 3;
    bAddAllFlEntry(0LL);
    dword_1C0323BAC = 12;
    vInitializeFontAssocStatus();
  }
  return 1LL;
}
