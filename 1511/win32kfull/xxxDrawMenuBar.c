/*
 * XREFs of xxxDrawMenuBar @ 0x1C01474A0
 * Callers:
 *     <none>
 * Callees:
 *     xxxSetWindowPosAndBand @ 0x1C0074F6C (xxxSetWindowPosAndBand.c)
 */

__int64 __fastcall xxxDrawMenuBar(__int64 a1)
{
  if ( (*(_BYTE *)(a1 + 55) & 0xC0) != 0x40 )
    xxxSetWindowPosAndBand((struct tagWND *)a1, 0, 0, 0, 0, 0, 55, 0);
  return 1LL;
}
