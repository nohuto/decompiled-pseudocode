/*
 * XREFs of IopCheckSessionDeviceAccess @ 0x1401BB60C
 * Callers:
 *     IopParseDevice @ 0x140412F10 (IopParseDevice.c)
 * Callees:
 *     MmGetSessionId @ 0x140038610 (MmGetSessionId.c)
 *     IopGetSessionIdFromPDO @ 0x1404F2C18 (IopGetSessionIdFromPDO.c)
 *     PsGetServerSiloServiceSessionId @ 0x14063F7A8 (PsGetServerSiloServiceSessionId.c)
 */

bool __fastcall IopCheckSessionDeviceAccess(__int64 a1)
{
  int SessionId; // ebx
  int SessionIdFromPDO; // eax
  bool result; // al

  SessionId = MmGetSessionId(KeGetCurrentThread()->ApcState.Process);
  result = 1;
  if ( SessionId != (unsigned int)PsGetServerSiloServiceSessionId(-1LL) || IopSessionZeroAccessCheckEnabled )
  {
    SessionIdFromPDO = IopGetSessionIdFromPDO(a1);
    if ( SessionIdFromPDO != -1 && SessionId != SessionIdFromPDO )
      return 0;
  }
  return result;
}
