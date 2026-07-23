/*
 * XREFs of MiRealVaToFlushType @ 0x1401F2710
 * Callers:
 *     MiDbgWriteCheck @ 0x14012CB4C (MiDbgWriteCheck.c)
 *     MiDbgReleaseAddress @ 0x14012CD4C (MiDbgReleaseAddress.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiRealVaToFlushType(unsigned __int64 a1)
{
  if ( a1 < 0xFFFF800000000000uLL || a1 >= qword_140327FD0 && a1 <= qword_140326D38 )
    return 1LL;
  if ( a1 < qword_140326950 || a1 >= qword_140326950 + 0x8000000000LL )
    return 0LL;
  return 2LL;
}
