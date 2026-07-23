/*
 * XREFs of IopCheckSessionDeviceAccess @ 0x1401C92A8
 * Callers:
 *     IopParseDevice @ 0x14043F7C0 (IopParseDevice.c)
 * Callees:
 *     MmGetSessionId @ 0x140013CE0 (MmGetSessionId.c)
 *     PsGetServerSiloGlobals @ 0x140076730 (PsGetServerSiloGlobals.c)
 *     IopGetSessionIdFromPDO @ 0x1404CF1E4 (IopGetSessionIdFromPDO.c)
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
