/*
 * XREFs of IopLiveDumpTracingControlCallback @ 0x1401BD4B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall IopLiveDumpTracingControlCallback(
        LPCGUID SourceId,
        ULONG ControlCode,
        UCHAR Level,
        ULONGLONG MatchAnyKeyword)
{
  _InterlockedExchange(&IopLiveDumpEtwEnabled, ControlCode != 0);
}
