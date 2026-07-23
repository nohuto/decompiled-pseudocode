/*
 * XREFs of BgkDestroy @ 0x140728724
 * Callers:
 *     BgkNotifyDisplayOwnershipChange @ 0x1401273D8 (BgkNotifyDisplayOwnershipChange.c)
 *     BgkInitialize @ 0x1407D3DF4 (BgkInitialize.c)
 * Callees:
 *     BgkpDisableConsole @ 0x14014CDF0 (BgkpDisableConsole.c)
 *     BgDisplayProgressIndicator @ 0x1407271A4 (BgDisplayProgressIndicator.c)
 *     BgConsoleDestroyInterface @ 0x1407287B8 (BgConsoleDestroyInterface.c)
 *     BgDisplayBackgroundUpdate @ 0x140728B50 (BgDisplayBackgroundUpdate.c)
 */

__int64 BgkDestroy()
{
  if ( !byte_140328E20 )
    return 0LL;
  BgkpDisableConsole();
  byte_140328D13 = 0;
  byte_140328E20 = 0;
  BgDisplayProgressIndicator(0);
  byte_140328D12 = 0;
  BgDisplayBackgroundUpdate(0LL);
  byte_140328D10 = 0;
  byte_140328D11 = 0;
  if ( qword_140328D08 )
  {
    BgConsoleDestroyInterface();
    qword_140328D08 = 0LL;
  }
  return BgLibraryDestroy();
}
