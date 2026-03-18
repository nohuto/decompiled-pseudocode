/*
 * XREFs of WinSqmEventWrite @ 0x1C0052A74
 * Callers:
 *     WinSqmStartSession @ 0x1C005290C (WinSqmStartSession.c)
 *     WinSqmEndSession @ 0x1C006F750 (WinSqmEndSession.c)
 *     WinSqmAddToStreamEx @ 0x1C0070640 (WinSqmAddToStreamEx.c)
 *     ?_WinSqmDWORDEvent@@YAXPEBU_EVENT_DESCRIPTOR@@PEAU_GUID@@KK@Z @ 0x1C0070808 (-_WinSqmDWORDEvent@@YAXPEBU_EVENT_DESCRIPTOR@@PEAU_GUID@@KK@Z.c)
 *     WinSqmAddToStream @ 0x1C00BC3A0 (WinSqmAddToStream.c)
 *     WinSqmSetString @ 0x1C00BC59C (WinSqmSetString.c)
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
  if ( *(_QWORD *)&WPP_MAIN_CB.AlignmentRequirement )
    return EtwWrite(
             *(REGHANDLE *)&WPP_MAIN_CB.AlignmentRequirement,
             EventDescriptor,
             &Win32kSQMSession,
             UserDataCount,
             UserData);
  return result;
}
