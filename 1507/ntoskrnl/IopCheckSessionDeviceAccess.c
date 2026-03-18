/*
 * XREFs of IopCheckSessionDeviceAccess @ 0x1401F6948
 * Callers:
 *     IopParseDevice @ 0x14048B640 (IopParseDevice.c)
 * Callees:
 *     MmGetSessionId @ 0x140050140 (MmGetSessionId.c)
 *     IopGetSessionIdFromPDO @ 0x14045E7E8 (IopGetSessionIdFromPDO.c)
 *     PsGetServerSiloServiceSessionId @ 0x1406C0B44 (PsGetServerSiloServiceSessionId.c)
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
