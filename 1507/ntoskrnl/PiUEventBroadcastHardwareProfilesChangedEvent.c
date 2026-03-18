/*
 * XREFs of PiUEventBroadcastHardwareProfilesChangedEvent @ 0x14067EDA8
 * Callers:
 *     PiUEventBroadcastEventWorker @ 0x14051CD24 (PiUEventBroadcastEventWorker.c)
 * Callees:
 *     ObfDereferenceObject @ 0x14004ED50 (ObfDereferenceObject.c)
 *     MmGetSessionById @ 0x1400FD644 (MmGetSessionById.c)
 *     ZwUpdateWnfStateData @ 0x140182610 (ZwUpdateWnfStateData.c)
 */

LONG_PTR __fastcall PiUEventBroadcastHardwareProfilesChangedEvent(int a1, __int64 a2)
{
  LONG_PTR result; // rax
  void *SessionById; // rdi

  if ( a1 == -1 )
    return ZwUpdateWnfStateData((__int64)&WNF_PNPA_HARDWAREPROFILES_CHANGED, a2, 16LL);
  SessionById = (void *)MmGetSessionById(a1);
  result = 0LL;
  if ( SessionById )
  {
    ZwUpdateWnfStateData((__int64)&WNF_PNPA_HARDWAREPROFILES_CHANGED_SESSION, a2, 16LL);
    return ObfDereferenceObject(SessionById);
  }
  return result;
}
