/*
 * XREFs of InitKeyboard @ 0x1C0144B1C
 * Callers:
 *     xxxRemoteReconnect @ 0x1C012DFA0 (xxxRemoteReconnect.c)
 *     RawInputThread @ 0x1C0143560 (RawInputThread.c)
 * Callees:
 *     ?GetBiosNumLockStatus@@YAXXZ @ 0x1C0144B54 (-GetBiosNumLockStatus@@YAXXZ.c)
 */

void InitKeyboard()
{
  if ( !gProtocolType )
  {
    GetBiosNumLockStatus();
    gfsModifiers = 0;
    gfsModOnlyCandidate = 0;
    gfsSASModifiersDown = 0;
    WindowArrangementSequence::fWindowArrangementSequenceInProgress = 0;
  }
}
