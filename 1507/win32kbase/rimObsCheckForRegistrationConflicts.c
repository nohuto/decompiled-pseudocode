/*
 * XREFs of rimObsCheckForRegistrationConflicts @ 0x1C00D1550
 * Callers:
 *     rimObsAddInputObserver @ 0x1C00D1204 (rimObsAddInputObserver.c)
 *     rimObsUpdateInputObserverRegistration @ 0x1C00D1AA0 (rimObsUpdateInputObserverRegistration.c)
 * Callees:
 *     rimObsCheckForExistingObserverRegistration @ 0x1C00D1494 (rimObsCheckForExistingObserverRegistration.c)
 */

__int64 __fastcall rimObsCheckForRegistrationConflicts(char a1, int a2, int a3)
{
  unsigned int v3; // ebx

  v3 = 0;
  if ( a1 )
  {
    if ( (unsigned int)rimObsCheckForExistingObserverRegistration(0, a2, a3) )
      return (unsigned int)-1073741823;
  }
  else if ( (unsigned int)rimObsCheckForExistingObserverRegistration(1, a2, a3) )
  {
    return (unsigned int)-1073741823;
  }
  return v3;
}
