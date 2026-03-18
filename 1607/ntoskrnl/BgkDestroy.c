/*
 * XREFs of BgkDestroy @ 0x140728724
 * Callers:
 *     BgkNotifyDisplayOwnershipChange @ 0x140126E68 (BgkNotifyDisplayOwnershipChange.c)
 *     BgkInitialize @ 0x1407D3DF4 (BgkInitialize.c)
 * Callees:
 *     BgkpDisableConsole @ 0x14014C880 (BgkpDisableConsole.c)
 *     BgDisplayProgressIndicator @ 0x1407271A4 (BgDisplayProgressIndicator.c)
 *     BgConsoleDestroyInterface @ 0x1407287B8 (BgConsoleDestroyInterface.c)
 *     BgDisplayBackgroundUpdate @ 0x140728B50 (BgDisplayBackgroundUpdate.c)
 */

__int64 BgkDestroy()
{
  if ( !byte_140328DE0 )
    return 0LL;
  BgkpDisableConsole();
  byte_140328CD3 = 0;
  byte_140328DE0 = 0;
  BgDisplayProgressIndicator(0);
  byte_140328CD2 = 0;
  BgDisplayBackgroundUpdate(0LL);
  byte_140328CD0 = 0;
  byte_140328CD1 = 0;
  if ( qword_140328CC8 )
  {
    BgConsoleDestroyInterface();
    qword_140328CC8 = 0LL;
  }
  return BgLibraryDestroy();
}
