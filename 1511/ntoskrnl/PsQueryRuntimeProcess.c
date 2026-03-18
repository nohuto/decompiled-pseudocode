/*
 * XREFs of PsQueryRuntimeProcess @ 0x1403CB688
 * Callers:
 *     ExpQuerySystemPerformanceInformation @ 0x1403CB0D0 (ExpQuerySystemPerformanceInformation.c)
 *     PspSetJobTimeLimitCallback @ 0x1406428EC (PspSetJobTimeLimitCallback.c)
 * Callees:
 *     PspUnlockProcessThreadListShared @ 0x140014364 (PspUnlockProcessThreadListShared.c)
 *     PspLockProcessThreadListShared @ 0x1400143A8 (PspLockProcessThreadListShared.c)
 */

__int64 __fastcall PsQueryRuntimeProcess(__int64 a1, _DWORD *a2)
{
  struct _KTHREAD *CurrentThread; // rbp
  unsigned int v5; // edi
  _QWORD *v6; // r8
  int v7; // esi
  __int64 result; // rax

  CurrentThread = KeGetCurrentThread();
  PspLockProcessThreadListShared(a1, (__int64)CurrentThread);
  v5 = *(_DWORD *)(a1 + 620);
  v6 = *(_QWORD **)(a1 + 1160);
  v7 = *(_DWORD *)(a1 + 624);
  while ( v6 != (_QWORD *)(a1 + 1160) )
  {
    v5 += *((_DWORD *)v6 - 257);
    v7 += *((_DWORD *)v6 - 237);
    v6 = (_QWORD *)*v6;
  }
  PspUnlockProcessThreadListShared(a1, (__int64)CurrentThread);
  result = v5;
  *a2 = v7;
  return result;
}
