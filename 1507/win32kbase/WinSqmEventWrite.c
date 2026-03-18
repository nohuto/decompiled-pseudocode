/*
 * XREFs of WinSqmEventWrite @ 0x1C007B6C4
 * Callers:
 *     ?_WinSqmDWORDEvent@@YAXPEBU_EVENT_DESCRIPTOR@@PEAU_GUID@@KK@Z @ 0x1C0066F18 (-_WinSqmDWORDEvent@@YAXPEBU_EVENT_DESCRIPTOR@@PEAU_GUID@@KK@Z.c)
 *     WinSqmEndSession @ 0x1C006B940 (WinSqmEndSession.c)
 *     WinSqmStartSession @ 0x1C007B558 (WinSqmStartSession.c)
 *     WinSqmAddToStreamEx @ 0x1C007E7E0 (WinSqmAddToStreamEx.c)
 *     WinSqmAddToStream @ 0x1C00AE330 (WinSqmAddToStream.c)
 *     WinSqmSetString @ 0x1C00AE52C (WinSqmSetString.c)
 * Callees:
 *     <none>
 */

NTSTATUS __fastcall WinSqmEventWrite(
        PCEVENT_DESCRIPTOR EventDescriptor,
        ULONG UserDataCount,
        PEVENT_DATA_DESCRIPTOR UserData)
{
  NTSTATUS result; // eax

  result = 1359;
  if ( RegHandle )
    return EtwWrite(RegHandle, EventDescriptor, &Win32kSQMSession, UserDataCount, UserData);
  return result;
}
