/*
 * XREFs of BgpConsoleSetTextColor @ 0x140761CF8
 * Callers:
 *     <none>
 * Callees:
 *     BgpFwReleaseLock @ 0x140150250 (BgpFwReleaseLock.c)
 *     BgpFwAcquireLock @ 0x140150298 (BgpFwAcquireLock.c)
 */

__int64 __fastcall BgpConsoleSetTextColor(int *a1, int *a2)
{
  BgpFwAcquireLock();
  if ( a1 )
    dword_1403188CC = *a1;
  if ( a2 )
    dword_1403188D0 = *a2;
  BgpFwReleaseLock();
  return 0LL;
}
