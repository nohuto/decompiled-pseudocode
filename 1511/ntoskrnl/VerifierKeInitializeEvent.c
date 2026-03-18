/*
 * XREFs of VerifierKeInitializeEvent @ 0x1406C5F40
 * Callers:
 *     <none>
 * Callees:
 *     VfUtilSynchronizationObjectSanityChecks @ 0x1406B7850 (VfUtilSynchronizationObjectSanityChecks.c)
 */

void __fastcall VerifierKeInitializeEvent(PRKEVENT Event, EVENT_TYPE Type, BOOLEAN State)
{
  VfUtilSynchronizationObjectSanityChecks(Event, 24LL);
  pXdvKeInitializeEvent(Event, Type, State);
}
