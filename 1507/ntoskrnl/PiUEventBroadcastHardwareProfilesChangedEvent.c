/*
 * XREFs of PiUEventBroadcastHardwareProfilesChangedEvent @ 0x14067EDA8
 * Callers:
 *     PiUEventBroadcastEventWorker @ 0x14051CD24 (PiUEventBroadcastEventWorker.c)
 * Callees:
 *     ObfDereferenceObject @ 0x14004ED50 (ObfDereferenceObject.c)
 *     MmGetSessionById @ 0x1400FD644 (MmGetSessionById.c)
 *     ZwUpdateWnfStateData @ 0x140182610 (ZwUpdateWnfStateData.c)
 */

NTSTATUS __fastcall PiUEventBroadcastHardwareProfilesChangedEvent(int a1, const void *a2)
{
  NTSTATUS result; // eax
  void *SessionById; // rdi
  int ExplicitScope; // [rsp+50h] [rbp+8h] BYREF

  ExplicitScope = a1;
  if ( a1 == -1 )
    return ZwUpdateWnfStateData(&WNF_PNPA_HARDWAREPROFILES_CHANGED, a2, 0x10u, 0LL, 0LL, 0, 0);
  SessionById = (void *)MmGetSessionById(a1);
  result = 0;
  if ( SessionById )
  {
    ZwUpdateWnfStateData(&WNF_PNPA_HARDWAREPROFILES_CHANGED_SESSION, a2, 0x10u, 0LL, &ExplicitScope, 0, 0);
    return ObfDereferenceObject(SessionById);
  }
  return result;
}
