/*
 * XREFs of MiShouldTrimUnusedSegments @ 0x1401DF418
 * Callers:
 *     MiCheckControlArea @ 0x140027EE0 (MiCheckControlArea.c)
 *     MiFreeExcessSegments @ 0x1400A3910 (MiFreeExcessSegments.c)
 *     MiRemoveUnusedSegments @ 0x1401417C8 (MiRemoveUnusedSegments.c)
 * Callees:
 *     <none>
 */

__int64 MiShouldTrimUnusedSegments()
{
  unsigned int v0; // r9d

  v0 = 0;
  if ( !qword_140326568 )
    return 0LL;
  LOBYTE(v0) = (unsigned __int64)qword_140326568 >> 12 > 3 * (qword_1403251E8 / 0x64uLL);
  return v0;
}
