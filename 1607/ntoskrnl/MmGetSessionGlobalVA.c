/*
 * XREFs of MmGetSessionGlobalVA @ 0x1403E7964
 * Callers:
 *     PfpLogApplicationEvent @ 0x140006504 (PfpLogApplicationEvent.c)
 *     PfpPrivSourceEnum @ 0x140508A08 (PfpPrivSourceEnum.c)
 * Callees:
 *     PsIsSystemProcess @ 0x140072328 (PsIsSystemProcess.c)
 */

unsigned __int64 __fastcall MmGetSessionGlobalVA(struct _KPROCESS *a1)
{
  if ( PsIsSystemProcess(a1) )
    return 0LL;
  else
    return a1[1].ActiveProcessors.Bitmap[2];
}
