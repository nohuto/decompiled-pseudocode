/*
 * XREFs of EtwpKernelProvEnableCallback @ 0x140580F64
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
void __fastcall EtwpKernelProvEnableCallback(
        __int64 SourceId,
        __int64 ControlCode,
        __int64 Level,
        char MatchAnyKeyword,
        int MatchAllKeyword,
        int **FilterData)
{
  SeEtwEnableCallback(SourceId, ControlCode, Level, MatchAnyKeyword, MatchAllKeyword, FilterData);
}
