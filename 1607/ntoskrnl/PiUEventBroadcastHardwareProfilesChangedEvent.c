/*
 * XREFs of PiUEventBroadcastHardwareProfilesChangedEvent @ 0x14062E460
 * Callers:
 *     PiUEventBroadcastEventWorker @ 0x140528030 (PiUEventBroadcastEventWorker.c)
 * Callees:
 *     ObfDereferenceObject @ 0x14006AC00 (ObfDereferenceObject.c)
 *     MmGetSessionById @ 0x1400765C0 (MmGetSessionById.c)
 *     ZwUpdateWnfStateData @ 0x14015D3C0 (ZwUpdateWnfStateData.c)
 */

LONG_PTR __fastcall PiUEventBroadcastHardwareProfilesChangedEvent(unsigned int a1, __int64 a2, __int64 a3)
{
  LONG_PTR result; // rax
  void *SessionById; // rdi

  if ( a1 == -1 )
    return ZwUpdateWnfStateData((__int64)&WNF_PNPA_HARDWAREPROFILES_CHANGED, a2, 16LL);
  SessionById = (void *)MmGetSessionById(a1, a2, a3);
  result = 0LL;
  if ( SessionById )
  {
    ZwUpdateWnfStateData((__int64)&WNF_PNPA_HARDWAREPROFILES_CHANGED_SESSION, a2, 16LL);
    return ObfDereferenceObject(SessionById);
  }
  return result;
}
