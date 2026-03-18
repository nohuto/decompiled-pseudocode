/*
 * XREFs of InitKeyboard @ 0x1C01332C4
 * Callers:
 *     RawInputThread @ 0x1C007B620 (RawInputThread.c)
 *     xxxRemoteReconnect @ 0x1C01537F0 (xxxRemoteReconnect.c)
 * Callees:
 *     ?GetBiosNumLockStatus@@YAXXZ @ 0x1C0133334 (-GetBiosNumLockStatus@@YAXXZ.c)
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
