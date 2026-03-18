/*
 * XREFs of DpiMiracastGetDeviceContextFromName @ 0x1C01973F8
 * Callers:
 *     DxgkHandleMiracastDrtEscape @ 0x1C002D184 (DxgkHandleMiracastDrtEscape.c)
 *     DxgkMiracastStartMiracastSession @ 0x1C002D594 (DxgkMiracastStartMiracastSession.c)
 *     DxgkMiracastStopMiracastSession @ 0x1C002E65C (DxgkMiracastStopMiracastSession.c)
 *     DxgkMiracastQueryMiracastStatus @ 0x1C0198950 (DxgkMiracastQueryMiracastStatus.c)
 * Callees:
 *     ?AcquireMiniportListMutex@@YAXXZ @ 0x1C000BB0C (-AcquireMiniportListMutex@@YAXXZ.c)
 *     DpiMiracastAddRefMiracastDeviceContext @ 0x1C0012900 (DpiMiracastAddRefMiracastDeviceContext.c)
 */

__int64 __fastcall DpiMiracastGetDeviceContextFromName(PCWSTR SourceString, char a2)
{
  __int64 v3; // rbx
  __int64 v4; // rsi
  UNICODE_STRING String1; // [rsp+20h] [rbp-18h] BYREF

  RtlInitUnicodeString(&String1, SourceString);
  if ( !a2 )
    AcquireMiniportListMutex();
  v3 = qword_1C00571D0;
  if ( (__int64 *)qword_1C00571D0 == &qword_1C00571D0 )
    goto LABEL_8;
  do
  {
    v4 = v3;
    if ( !RtlCompareUnicodeString(&String1, (PCUNICODE_STRING)(v3 + 160), 1u) )
      break;
    v3 = *(_QWORD *)v3;
  }
  while ( (__int64 *)v3 != &qword_1C00571D0 );
  if ( (__int64 *)v3 == &qword_1C00571D0 )
LABEL_8:
    v4 = 0LL;
  else
    DpiMiracastAddRefMiracastDeviceContext(v4, v4);
  if ( !a2 )
  {
    _InterlockedExchange64(&qword_1C0056EC8, 0LL);
    KeReleaseMutex(Mutex, 0);
  }
  return v4;
}
