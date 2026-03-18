/*
 * XREFs of WinSqmEventWrite @ 0x1C00677D0
 * Callers:
 *     WinSqmEndSession @ 0x1C0062790 (WinSqmEndSession.c)
 *     WinSqmAddToStreamEx @ 0x1C0062F60 (WinSqmAddToStreamEx.c)
 *     ?_WinSqmDWORDEvent@@YAXPEBU_EVENT_DESCRIPTOR@@PEAU_GUID@@KK@Z @ 0x1C0063128 (-_WinSqmDWORDEvent@@YAXPEBU_EVENT_DESCRIPTOR@@PEAU_GUID@@KK@Z.c)
 *     WinSqmStartSession @ 0x1C0067664 (WinSqmStartSession.c)
 *     WinSqmAddToStream @ 0x1C00B23C0 (WinSqmAddToStream.c)
 *     WinSqmSetString @ 0x1C00B25BC (WinSqmSetString.c)
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
  if ( WPP_MAIN_CB.DeviceQueue.DeviceListHead.Flink )
    return EtwWrite(
             (REGHANDLE)WPP_MAIN_CB.DeviceQueue.DeviceListHead.Flink,
             EventDescriptor,
             &Win32kSQMSession,
             UserDataCount,
             UserData);
  return result;
}
