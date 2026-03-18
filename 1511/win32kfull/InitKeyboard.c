/*
 * XREFs of InitKeyboard @ 0x1C009D464
 * Callers:
 *     RawInputThread @ 0x1C009B5A0 (RawInputThread.c)
 *     xxxRemoteReconnect @ 0x1C014DAC0 (xxxRemoteReconnect.c)
 * Callees:
 *     ?GetBiosNumLockStatus@@YAXXZ @ 0x1C009D844 (-GetBiosNumLockStatus@@YAXXZ.c)
 */

void InitKeyboard()
{
  if ( !gProtocolType )
  {
    GetBiosNumLockStatus();
    gfsModifiers = 0;
    gfsModOnlyCandidate = 0;
    gfsSASModifiersDown = 0;
    gfsRawModifiersForHotKey = 0;
    WindowArrangementSequence::fWindowArrangementSequenceInProgress = 0;
  }
}
