/*
 * XREFs of MmGetSessionGlobalVA @ 0x1404BAD68
 * Callers:
 *     PfpLogApplicationEvent @ 0x14001B76C (PfpLogApplicationEvent.c)
 *     PfpPrivSourceEnum @ 0x14044B238 (PfpPrivSourceEnum.c)
 * Callees:
 *     PsIsSystemProcess @ 0x140091DCC (PsIsSystemProcess.c)
 */

unsigned __int64 __fastcall MmGetSessionGlobalVA(struct _KPROCESS *a1)
{
  if ( PsIsSystemProcess(a1) )
    return 0LL;
  else
    return a1[1].ActiveProcessors.Bitmap[2];
}
