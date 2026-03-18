/*
 * XREFs of VerifierKeInitializeEvent @ 0x1407481D0
 * Callers:
 *     <none>
 * Callees:
 *     VfUtilSynchronizationObjectSanityChecks @ 0x140737B44 (VfUtilSynchronizationObjectSanityChecks.c)
 */

void __fastcall VerifierKeInitializeEvent(PRKEVENT Event, EVENT_TYPE Type, BOOLEAN State)
{
  VfUtilSynchronizationObjectSanityChecks((char *)Event, 24LL);
  pXdvKeInitializeEvent(Event, Type, State);
}
