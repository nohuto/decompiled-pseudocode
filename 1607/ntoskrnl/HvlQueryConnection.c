/*
 * XREFs of HvlQueryConnection @ 0x14008868C
 * Callers:
 *     RtlpLookupFunctionEntryForStackWalks @ 0x140050EE0 (RtlpLookupFunctionEntryForStackWalks.c)
 *     EtwpSysModuleRunDown @ 0x140499864 (EtwpSysModuleRunDown.c)
 *     HvlPhase0Initialize @ 0x14057DA80 (HvlPhase0Initialize.c)
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
