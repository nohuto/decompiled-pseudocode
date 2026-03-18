/*
 * XREFs of MmGetSessionGlobalVA @ 0x140444BBC
 * Callers:
 *     PfpLogApplicationEvent @ 0x14001A7CC (PfpLogApplicationEvent.c)
 *     PfpPrivSourceEnum @ 0x14050CF74 (PfpPrivSourceEnum.c)
 * Callees:
 *     PsIsSystemProcess @ 0x140020228 (PsIsSystemProcess.c)
 */

unsigned __int64 __fastcall MmGetSessionGlobalVA(struct _KPROCESS *a1)
{
  if ( PsIsSystemProcess(a1) )
    return 0LL;
  else
    return a1[1].ActiveProcessors.Bitmap[2];
}
