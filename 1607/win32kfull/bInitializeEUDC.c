/*
 * XREFs of bInitializeEUDC @ 0x1C0107FB0
 * Callers:
 *     <none>
 * Callees:
 *     EngGetCurrentCodePage @ 0x1C0018130 (EngGetCurrentCodePage.c)
 *     ?vInitializeFontAssocStatus@@YAXXZ @ 0x1C01081B0 (-vInitializeFontAssocStatus@@YAXXZ.c)
 *     bAddAllFlEntry @ 0x1C01082A8 (bAddAllFlEntry.c)
 *     ?InitializeGdiFastLinkedFontUFIsFlag@@YAXXZ @ 0x1C0289980 (-InitializeGdiFastLinkedFontUFIsFlag@@YAXXZ.c)
 */

__int64 bInitializeEUDC()
{
  int v0; // ebx
  unsigned __int16 v2; // ax
  struct _UNICODE_STRING String; // [rsp+30h] [rbp-10h] BYREF
  USHORT AnsiCodePage; // [rsp+60h] [rbp+20h] BYREF
  USHORT OemCodePage; // [rsp+68h] [rbp+28h] BYREF
  int v6; // [rsp+70h] [rbp+30h] BYREF
  unsigned __int16 v7; // [rsp+78h] [rbp+38h] BYREF

  v0 = 0;
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
  qword_1C03289E8 = 0LL;
  gqlEUDC = 1;
  EngGetCurrentCodePage(&OemCodePage, &AnsiCodePage);
  String.Buffer = &word_1C032DB10;
  *(_DWORD *)&String.Length = 1310720;
  RtlIntegerToUnicodeString(AnsiCodePage, 0xAu, &String);
  SharedQueryTable.QueryRoutine = 0LL;
  SharedQueryTable.Name = L"FontLinkControl";
  SharedQueryTable.Flags = 292;
  SharedQueryTable.EntryContext = &ulFontLinkControl;
  SharedQueryTable.DefaultType = 67108868;
  SharedQueryTable.DefaultData = 0LL;
  SharedQueryTable.DefaultLength = 0;
  qword_1C03289A8 = 0LL;
  dword_1C03289B0 = 0;
  qword_1C03289B8 = 0LL;
  if ( RtlQueryRegistryValues(3u, L"FontLink", &SharedQueryTable, 0LL, 0LL) < 0 )
    ulFontLinkControl = 0;
  SharedQueryTable.Name = L"FontLinkDefaultChar";
  SharedQueryTable.EntryContext = &v7;
  if ( RtlQueryRegistryValues(3u, L"FontLink", &SharedQueryTable, 0LL, 0LL) >= 0 )
    v2 = v7;
  else
    v2 = 12539;
  EudcDefaultChar = v2;
  v6 = 0;
  SharedQueryTable.Name = L"AllowSCPUAFontFallback";
  SharedQueryTable.EntryContext = &v6;
  if ( RtlQueryRegistryValues(3u, L"FontLink", &SharedQueryTable, 0LL, 0LL) >= 0 )
  {
    LOBYTE(v0) = v6 != 0;
    gbAllowSCPUAFontFallback = v0;
  }
  off_1C03207E0 = &off_1C03207D8;
  off_1C03207D8 = &off_1C03207D8;
  if ( (ulFontLinkControl & 1) == 0 )
  {
    dword_1C03292A0 = 3;
    bAddAllFlEntry(0LL);
    dword_1C03292A0 = 12;
    vInitializeFontAssocStatus();
    InitializeGdiFastLinkedFontUFIsFlag();
  }
  return 1LL;
}
