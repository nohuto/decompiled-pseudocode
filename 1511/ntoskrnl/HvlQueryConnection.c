/*
 * XREFs of HvlQueryConnection @ 0x140120354
 * Callers:
 *     RtlpLookupFunctionEntryForStackWalks @ 0x140027FB0 (RtlpLookupFunctionEntryForStackWalks.c)
 *     EtwpSysModuleRunDown @ 0x140500D74 (EtwpSysModuleRunDown.c)
 *     HvlPhase0Initialize @ 0x140530D90 (HvlPhase0Initialize.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall HvlQueryConnection(_QWORD *a1)
{
  if ( !HvlpHypercallCodeVa )
    return 3221225473LL;
  if ( a1 )
    *a1 = HvlpHypercallCodeVa;
  return 0LL;
}
