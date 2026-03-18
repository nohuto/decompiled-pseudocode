/*
 * XREFs of HvlQueryConnection @ 0x140086D9C
 * Callers:
 *     RtlpLookupFunctionEntryForStackWalks @ 0x140051360 (RtlpLookupFunctionEntryForStackWalks.c)
 *     EtwpSysModuleRunDown @ 0x140498DD4 (EtwpSysModuleRunDown.c)
 *     HvlPhase0Initialize @ 0x14057D5D4 (HvlPhase0Initialize.c)
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
