/*
 * XREFs of MiShouldTrimUnusedSegments @ 0x1401DF244
 * Callers:
 *     MiCheckControlArea @ 0x140027A60 (MiCheckControlArea.c)
 *     MiFreeExcessSegments @ 0x1400A2238 (MiFreeExcessSegments.c)
 *     MiRemoveUnusedSegments @ 0x140141D38 (MiRemoveUnusedSegments.c)
 * Callees:
 *     <none>
 */

__int64 MiShouldTrimUnusedSegments()
{
  unsigned int v0; // r9d

  v0 = 0;
  if ( !qword_1403265A8 )
    return 0LL;
  LOBYTE(v0) = (unsigned __int64)qword_1403265A8 >> 12 > 3 * (qword_140325228 / 0x64uLL);
  return v0;
}
