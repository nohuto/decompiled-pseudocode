/*
 * XREFs of BgkDestroy @ 0x14075F69C
 * Callers:
 *     BgkNotifyDisplayOwnershipChange @ 0x14014FED8 (BgkNotifyDisplayOwnershipChange.c)
 *     BgkInitialize @ 0x1407FD810 (BgkInitialize.c)
 * Callees:
 *     BgkpDisableConsole @ 0x14017065C (BgkpDisableConsole.c)
 *     BgDisplayProgressIndicator @ 0x14075E2BC (BgDisplayProgressIndicator.c)
 *     BgConsoleDestroyInterface @ 0x14075F730 (BgConsoleDestroyInterface.c)
 *     BgDisplayBackgroundUpdate @ 0x14075FAAC (BgDisplayBackgroundUpdate.c)
 */

__int64 BgkDestroy()
{
  if ( !byte_140353AF0 )
    return 0LL;
  BgkpDisableConsole();
  byte_140353B10 = 0;
  byte_140353AF0 = 0;
  BgDisplayProgressIndicator(0);
  byte_1403539A0 = 0;
  BgDisplayBackgroundUpdate(0LL);
  byte_1403539A1 = 0;
  if ( qword_140353B00 )
  {
    BgConsoleDestroyInterface();
    qword_140353B00 = 0LL;
  }
  return BgLibraryDestroy();
}
