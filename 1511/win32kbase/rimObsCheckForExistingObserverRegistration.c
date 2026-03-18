/*
 * XREFs of rimObsCheckForExistingObserverRegistration @ 0x1C00D2FE0
 * Callers:
 *     rimObsCheckForRegistrationConflicts @ 0x1C00D3100 (rimObsCheckForRegistrationConflicts.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall rimObsCheckForExistingObserverRegistration(char a1, int a2, int a3, int a4)
{
  struct _LIST_ENTRY *Flink; // r10
  unsigned int v5; // r11d

  Flink = gObRimInputObserverList.Flink;
  v5 = 0;
  while ( Flink != &gObRimInputObserverList )
  {
    if ( (!a1 || ((__int64)Flink[6].Flink & 2) != 0)
      && a2 == HIDWORD(Flink[5].Flink)
      && (a2 != 2 || a3 == LODWORD(Flink[5].Blink) && a4 == HIDWORD(Flink[5].Blink)) )
    {
      return 1;
    }
    Flink = Flink->Flink;
  }
  return v5;
}
