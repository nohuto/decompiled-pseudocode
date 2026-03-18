/*
 * XREFs of rimObsCheckForRegistrationConflicts @ 0x1C00DFF00
 * Callers:
 *     rimObsAddInputObserver @ 0x1C00DFB04 (rimObsAddInputObserver.c)
 *     rimObsUpdateInputObserverRegistration @ 0x1C00E06B4 (rimObsUpdateInputObserverRegistration.c)
 * Callees:
 *     rimObsCheckForExistingObserverRegistration @ 0x1C00DFDE0 (rimObsCheckForExistingObserverRegistration.c)
 */

__int64 __fastcall rimObsCheckForRegistrationConflicts(char a1, int a2, int a3, int a4)
{
  unsigned int v4; // ebx

  v4 = 0;
  if ( a1 )
  {
    if ( (unsigned int)rimObsCheckForExistingObserverRegistration(0, a2, a3, a4) )
      return (unsigned int)-1073741823;
  }
  else if ( (unsigned int)rimObsCheckForExistingObserverRegistration(1, a2, a3, a4) )
  {
    return (unsigned int)-1073741823;
  }
  return v4;
}
