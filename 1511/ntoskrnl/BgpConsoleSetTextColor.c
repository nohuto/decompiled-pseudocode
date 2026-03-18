/*
 * XREFs of BgpConsoleSetTextColor @ 0x1406DEC7C
 * Callers:
 *     <none>
 * Callees:
 *     BgpFwReleaseLock @ 0x14011BFCC (BgpFwReleaseLock.c)
 *     BgpFwAcquireLock @ 0x14011C010 (BgpFwAcquireLock.c)
 */

__int64 __fastcall BgpConsoleSetTextColor(int *a1, int *a2)
{
  BgpFwAcquireLock();
  if ( a1 )
    dword_1402C986C = *a1;
  if ( a2 )
    dword_1402C9870 = *a2;
  BgpFwReleaseLock();
  return 0LL;
}
