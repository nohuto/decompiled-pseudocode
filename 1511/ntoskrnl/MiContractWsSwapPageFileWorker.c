/*
 * XREFs of MiContractWsSwapPageFileWorker @ 0x1401E13D8
 * Callers:
 *     <none>
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x14000A2E0 (ExAcquireSpinLockExclusive.c)
 *     ExReleaseSpinLockExclusive @ 0x14004CC00 (ExReleaseSpinLockExclusive.c)
 *     KeReleaseSemaphoreEx @ 0x14007A6F0 (KeReleaseSemaphoreEx.c)
 *     KeWaitForSingleObject @ 0x140081870 (KeWaitForSingleObject.c)
 *     MiWsSwapPageFileNumber @ 0x1400F5DE0 (MiWsSwapPageFileNumber.c)
 *     MiUnlockWsSwapExclusive @ 0x1400F5E18 (MiUnlockWsSwapExclusive.c)
 *     MiLockWsSwapExclusive @ 0x1400F5E60 (MiLockWsSwapExclusive.c)
 *     memset @ 0x140166CC0 (memset.c)
 */

__int64 __fastcall MiContractWsSwapPageFileWorker(__int64 a1)
{
  unsigned int v2; // eax
  struct _KTHREAD *CurrentThread; // rsi
  __int64 v4; // rcx
  __int64 v5; // rbx
  char v6; // al
  KIRQL v7; // al
  _QWORD *v8; // rdx
  __int64 v9; // r9
  __int64 result; // rax
  _QWORD v11[12]; // [rsp+38h] [rbp-9h] BYREF

  v2 = MiWsSwapPageFileNumber(a1);
  CurrentThread = KeGetCurrentThread();
  v5 = *(_QWORD *)(v4 + 8LL * v2 + 5728);
  memset(v11, 0, sizeof(v11));
  v11[4] = -1LL;
  v11[3] = a1;
  v6 = *(_BYTE *)(v5 + 204);
  v11[5] = 0x10000LL;
  BYTE4(v11[9]) = v6 & 0xF;
  v11[8] = &v11[7];
  v11[7] = &v11[7];
  LOWORD(v11[6]) = 0;
  BYTE2(v11[6]) = 6;
  HIDWORD(v11[6]) = 0;
  MiLockWsSwapExclusive((__int64)CurrentThread, a1);
  v7 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 1536));
  v8 = *(_QWORD **)(a1 + 1312);
  v11[1] = a1 + 1304;
  v11[2] = v8;
  if ( *v8 != a1 + 1304 )
    __fastfail(3u);
  *v8 = &v11[1];
  *(_QWORD *)(a1 + 1312) = &v11[1];
  ExReleaseSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 1536), v7);
  KeReleaseSemaphoreEx(a1 + 1272, 0, 1LL, v9, 1);
  KeWaitForSingleObject(&v11[6], Executive, 0, 0, 0LL);
  result = MiUnlockWsSwapExclusive((__int64)CurrentThread, a1);
  _InterlockedExchange((volatile __int32 *)(a1 + 1040), 0);
  return result;
}
