/*
 * XREFs of PiUEventBroadcastHardwareProfilesChangedEvent @ 0x14062E514
 * Callers:
 *     PiUEventBroadcastEventWorker @ 0x140528570 (PiUEventBroadcastEventWorker.c)
 * Callees:
 *     ObfDereferenceObject @ 0x14006A780 (ObfDereferenceObject.c)
 *     MmGetSessionById @ 0x140076640 (MmGetSessionById.c)
 *     ZwUpdateWnfStateData @ 0x14015D930 (ZwUpdateWnfStateData.c)
 */

NTSTATUS __fastcall PiUEventBroadcastHardwareProfilesChangedEvent(unsigned int a1, const void *a2, __int64 a3)
{
  NTSTATUS result; // eax
  void *SessionById; // rdi
  unsigned int ExplicitScope; // [rsp+50h] [rbp+8h] BYREF

  ExplicitScope = a1;
  if ( a1 == -1 )
    return ZwUpdateWnfStateData(&WNF_PNPA_HARDWAREPROFILES_CHANGED, a2, 0x10u, 0LL, 0LL, 0, 0);
  SessionById = (void *)MmGetSessionById(a1, (__int64)a2, a3);
  result = 0;
  if ( SessionById )
  {
    ZwUpdateWnfStateData(&WNF_PNPA_HARDWAREPROFILES_CHANGED_SESSION, a2, 0x10u, 0LL, &ExplicitScope, 0, 0);
    return ObfDereferenceObject(SessionById);
  }
  return result;
}
