/*
 * XREFs of rimObsCheckForExistingObserverRegistration @ 0x1C00D1494
 * Callers:
 *     rimObsCheckForRegistrationConflicts @ 0x1C00D1550 (rimObsCheckForRegistrationConflicts.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall rimObsCheckForExistingObserverRegistration(char a1, int a2, int a3)
{
  struct _LIST_ENTRY *Flink; // r9
  unsigned int v4; // r10d

  Flink = gObRimInputObserverList.Flink;
  v4 = 0;
  while ( Flink != &gObRimInputObserverList )
  {
    if ( (!a1 || (HIDWORD(Flink[5].Blink) & 1) != 0) && a2 == WORD2(Flink[5].Flink) && a3 == LOWORD(Flink[5].Blink) )
      return 1;
    Flink = Flink->Flink;
  }
  return v4;
}
