/*
 * XREFs of PsQueryRuntimeProcess @ 0x1404B9F30
 * Callers:
 *     ExpQuerySystemPerformanceInformation @ 0x140414000 (ExpQuerySystemPerformanceInformation.c)
 *     NtQueryInformationProcess @ 0x140422590 (NtQueryInformationProcess.c)
 *     PspSetJobTimeLimitCallback @ 0x140680BA8 (PspSetJobTimeLimitCallback.c)
 * Callees:
 *     PspUnlockProcessThreadListShared @ 0x140095C98 (PspUnlockProcessThreadListShared.c)
 *     PspLockProcessThreadListShared @ 0x140095CDC (PspLockProcessThreadListShared.c)
 */

__int64 __fastcall PsQueryRuntimeProcess(__int64 a1, _DWORD *a2)
{
  struct _KTHREAD *CurrentThread; // rbp
  unsigned int v5; // ebx
  _QWORD *v6; // r8
  int i; // edi
  __int64 result; // rax

  CurrentThread = KeGetCurrentThread();
  PspLockProcessThreadListShared(a1, (__int64)CurrentThread);
  v5 = *(_DWORD *)(a1 + 620);
  v6 = *(_QWORD **)(a1 + 1160);
  for ( i = *(_DWORD *)(a1 + 624); v6 != (_QWORD *)(a1 + 1160); v6 = (_QWORD *)*v6 )
  {
    v5 += *((_DWORD *)v6 - 259);
    i += *((_DWORD *)v6 - 239);
  }
  PspUnlockProcessThreadListShared(a1, (__int64)CurrentThread);
  result = v5;
  *a2 = i;
  return result;
}
