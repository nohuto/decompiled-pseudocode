/*
 * XREFs of BgpConsoleGetState @ 0x1407619FC
 * Callers:
 *     <none>
 * Callees:
 *     BgpFwReleaseLock @ 0x140150250 (BgpFwReleaseLock.c)
 *     BgpFwAcquireLock @ 0x140150298 (BgpFwAcquireLock.c)
 */

__int64 __fastcall BgpConsoleGetState(__int64 a1)
{
  BgpFwAcquireLock();
  *(_QWORD *)a1 = qword_1403188D4;
  *(_DWORD *)(a1 + 8) = dword_1403188C0[0];
  *(_DWORD *)(a1 + 12) = dword_1403188C4;
  *(_DWORD *)(a1 + 16) = dword_1403188F0;
  *(_DWORD *)(a1 + 20) = dword_1403188F4;
  *(_DWORD *)(a1 + 24) = dword_1403188FC;
  *(_DWORD *)(a1 + 28) = dword_140318900;
  BgpFwReleaseLock();
  return 0LL;
}
