/*
 * XREFs of IopCheckSessionDeviceAccess @ 0x1401C9408
 * Callers:
 *     IopParseDevice @ 0x1404408F0 (IopParseDevice.c)
 * Callees:
 *     MmGetSessionId @ 0x140014160 (MmGetSessionId.c)
 *     PsGetServerSiloGlobals @ 0x1400766B0 (PsGetServerSiloGlobals.c)
 *     IopGetSessionIdFromPDO @ 0x1404ED078 (IopGetSessionIdFromPDO.c)
 */

bool IopCheckSessionDeviceAccess()
{
  int SessionId; // ebx
  __int64 v1; // rdx
  int SessionIdFromPDO; // eax
  bool result; // al

  SessionId = MmGetSessionId(KeGetCurrentThread()->ApcState.Process);
  result = 1;
  if ( SessionId != *((_DWORD *)PsGetServerSiloGlobals(-1LL) + 252) || IopSessionZeroAccessCheckEnabled )
  {
    SessionIdFromPDO = IopGetSessionIdFromPDO(v1);
    if ( SessionIdFromPDO != -1 && SessionId != SessionIdFromPDO )
      return 0;
  }
  return result;
}
