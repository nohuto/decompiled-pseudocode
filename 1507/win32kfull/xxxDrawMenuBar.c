/*
 * XREFs of xxxDrawMenuBar @ 0x1C011D940
 * Callers:
 *     <none>
 * Callees:
 *     xxxSetWindowPosAndBand @ 0x1C00850A0 (xxxSetWindowPosAndBand.c)
 */

__int64 __fastcall xxxDrawMenuBar(__int64 a1)
{
  if ( (*(_BYTE *)(a1 + 55) & 0xC0) != 0x40 )
    xxxSetWindowPosAndBand((struct tagWND *)a1, 0LL, 0, 0, 0, 0, 55, 0);
  return 1LL;
}
