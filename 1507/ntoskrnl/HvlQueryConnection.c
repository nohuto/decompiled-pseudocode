/*
 * XREFs of HvlQueryConnection @ 0x1400FED34
 * Callers:
 *     RtlpLookupFunctionEntryForStackWalks @ 0x14001F200 (RtlpLookupFunctionEntryForStackWalks.c)
 *     EtwpSysModuleRunDown @ 0x14051CC04 (EtwpSysModuleRunDown.c)
 *     HvlPhase0Initialize @ 0x1405C0150 (HvlPhase0Initialize.c)
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
