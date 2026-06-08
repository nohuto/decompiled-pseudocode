/*
 * XREFs of ProcLibTraceControlCallback @ 0x1C0016930
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall ProcLibTraceControlCallback(
        LPCGUID SourceId,
        ULONG ControlCode,
        UCHAR Level,
        ULONGLONG MatchAnyKeyword)
{
  if ( ControlCode == 2 )
    JUMPOUT(0x1C0018B00LL);
}
