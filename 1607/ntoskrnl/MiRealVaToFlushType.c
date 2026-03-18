/*
 * XREFs of MiRealVaToFlushType @ 0x1401F28E4
 * Callers:
 *     MiDbgWriteCheck @ 0x14012C5DC (MiDbgWriteCheck.c)
 *     MiDbgReleaseAddress @ 0x14012C7DC (MiDbgReleaseAddress.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiRealVaToFlushType(unsigned __int64 a1)
{
  if ( a1 < 0xFFFF800000000000uLL || a1 >= qword_140327F90 && a1 <= qword_140326CF8 )
    return 1LL;
  if ( a1 < qword_140326910 || a1 >= qword_140326910 + 0x8000000000LL )
    return 0LL;
  return 2LL;
}
