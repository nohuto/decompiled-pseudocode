/*
 * XREFs of MmGetSessionGlobalVA @ 0x1403E8F94
 * Callers:
 *     PfpLogApplicationEvent @ 0x140006674 (PfpLogApplicationEvent.c)
 *     PfpPrivSourceEnum @ 0x1404EB998 (PfpPrivSourceEnum.c)
 * Callees:
 *     PsIsSystemProcess @ 0x140071EA8 (PsIsSystemProcess.c)
 */

unsigned __int64 __fastcall MmGetSessionGlobalVA(struct _KPROCESS *a1)
{
  if ( PsIsSystemProcess(a1) )
    return 0LL;
  else
    return a1[1].ActiveProcessors.Bitmap[2];
}
