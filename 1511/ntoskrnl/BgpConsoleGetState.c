/*
 * XREFs of BgpConsoleGetState @ 0x1406DE980
 * Callers:
 *     <none>
 * Callees:
 *     BgpFwReleaseLock @ 0x14011BFCC (BgpFwReleaseLock.c)
 *     BgpFwAcquireLock @ 0x14011C010 (BgpFwAcquireLock.c)
 */

__int64 __fastcall BgpConsoleGetState(__int64 a1)
{
  BgpFwAcquireLock();
  *(_QWORD *)a1 = qword_1402C9874;
  *(_DWORD *)(a1 + 8) = dword_1402C9860[0];
  *(_DWORD *)(a1 + 12) = dword_1402C9864;
  *(_DWORD *)(a1 + 16) = dword_1402C9890;
  *(_DWORD *)(a1 + 20) = dword_1402C9894;
  *(_DWORD *)(a1 + 24) = dword_1402C989C;
  *(_DWORD *)(a1 + 28) = dword_1402C98A0;
  BgpFwReleaseLock();
  return 0LL;
}
