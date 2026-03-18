/*
 * XREFs of MiRealVaToFlushType @ 0x1401DFF40
 * Callers:
 *     MiDbgReleaseAddress @ 0x1401DDCD4 (MiDbgReleaseAddress.c)
 *     MiDbgWriteCheck @ 0x1401DE0F4 (MiDbgWriteCheck.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiRealVaToFlushType(unsigned __int64 a1)
{
  __int64 result; // rax

  if ( a1 < 0xFFFF800000000000uLL )
    return 1LL;
  result = 0LL;
  if ( a1 + 0x70000000000LL <= 0x7FFFFFFFFFLL )
    return 2LL;
  return result;
}
