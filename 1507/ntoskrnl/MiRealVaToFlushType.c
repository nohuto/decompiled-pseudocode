/*
 * XREFs of MiRealVaToFlushType @ 0x140225F80
 * Callers:
 *     MiDbgReleaseAddress @ 0x140223080 (MiDbgReleaseAddress.c)
 *     MiDbgWriteCheck @ 0x1402236C0 (MiDbgWriteCheck.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiRealVaToFlushType(unsigned __int64 a1)
{
  __int64 result; // rax

  if ( a1 + 0x800000000000LL > 0x757FFFFFFFFFLL && a1 < 0xFFFFF58010804000uLL )
    return 1LL;
  result = 0LL;
  if ( a1 + 0x70000000000LL <= 0x7FFFFFFFFFLL )
    return 2LL;
  return result;
}
