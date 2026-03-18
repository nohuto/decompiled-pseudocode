/*
 * XREFs of BgDisplayProgressIndicator @ 0x1406DB274
 * Callers:
 *     PopDecompressHiberBlocks @ 0x1403A2574 (PopDecompressHiberBlocks.c)
 *     BgkDestroy @ 0x1406DC654 (BgkDestroy.c)
 *     Phase1InitializationDiscard @ 0x1407645E8 (Phase1InitializationDiscard.c)
 * Callees:
 *     BgpFwReleaseLock @ 0x14011BFCC (BgpFwReleaseLock.c)
 *     BgpFwAcquireLock @ 0x14011C010 (BgpFwAcquireLock.c)
 *     AnFwDisplayProgressIndicator @ 0x1406DB564 (AnFwDisplayProgressIndicator.c)
 */

__int64 __fastcall BgDisplayProgressIndicator(char a1)
{
  __int64 v2; // rcx
  unsigned int v3; // ebx

  BgpFwAcquireLock();
  if ( (dword_1402D4BB0 & 1) != 0 )
  {
    LOBYTE(v2) = a1;
    v3 = AnFwDisplayProgressIndicator(v2);
  }
  else
  {
    v3 = -1073741823;
  }
  BgpFwReleaseLock();
  return v3;
}
