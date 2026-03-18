/*
 * XREFs of HvlQueryVsmConnection @ 0x1401EDE7C
 * Callers:
 *     MmSnapTriageDumpInformation @ 0x140218C8C (MmSnapTriageDumpInformation.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall HvlQueryVsmConnection(_QWORD *a1)
{
  if ( !HvlpVsmVtlCallVa )
    return 3221225473LL;
  *a1 = HvlpVsmVtlCallVa;
  return 0LL;
}
