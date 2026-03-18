/*
 * XREFs of BgkDestroy @ 0x1406DC654
 * Callers:
 *     BgkNotifyDisplayOwnershipChange @ 0x14011BC4C (BgkNotifyDisplayOwnershipChange.c)
 *     BgkInitialize @ 0x140787C58 (BgkInitialize.c)
 * Callees:
 *     BgkpDisableConsole @ 0x1401429A4 (BgkpDisableConsole.c)
 *     BgDisplayProgressIndicator @ 0x1406DB274 (BgDisplayProgressIndicator.c)
 *     BgConsoleDestroyInterface @ 0x1406DC6E8 (BgConsoleDestroyInterface.c)
 *     BgDisplayBackgroundUpdate @ 0x1406DCA64 (BgDisplayBackgroundUpdate.c)
 */

__int64 BgkDestroy()
{
  if ( !byte_140305D78 )
    return 0LL;
  BgkpDisableConsole();
  byte_140305D99 = 0;
  byte_140305D78 = 0;
  BgDisplayProgressIndicator(0);
  byte_140305C20 = 0;
  BgDisplayBackgroundUpdate(0LL);
  byte_140305C21 = 0;
  byte_140305D98 = 0;
  if ( qword_140305D88 )
  {
    BgConsoleDestroyInterface();
    qword_140305D88 = 0LL;
  }
  return BgLibraryDestroy();
}
