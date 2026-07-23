/*
 * XREFs of MiContractWsSwapPageFileWorker @ 0x1401F75E8
 * Callers:
 *     <none>
 * Callees:
 *     KeWaitForSingleObject @ 0x14005C400 (KeWaitForSingleObject.c)
 *     MiLockWsSwapExclusive @ 0x1400B1F04 (MiLockWsSwapExclusive.c)
 *     MiUnlockWsSwapExclusive @ 0x1400B2758 (MiUnlockWsSwapExclusive.c)
 *     MiWsSwapPageFileNumber @ 0x1400B4D80 (MiWsSwapPageFileNumber.c)
 *     memset @ 0x140171AC0 (memset.c)
 *     MiQueuePageFileExtension @ 0x1401EEB64 (MiQueuePageFileExtension.c)
 */

__int64 __fastcall MiContractWsSwapPageFileWorker(__int64 a1)
{
  unsigned int v2; // eax
  struct _KTHREAD *CurrentThread; // rdi
  __int64 v4; // rcx
  __int64 v5; // rbx
  char v6; // al
  __int64 result; // rax
  _QWORD v8[12]; // [rsp+38h] [rbp-9h] BYREF

  v2 = MiWsSwapPageFileNumber(a1);
  CurrentThread = KeGetCurrentThread();
  v5 = *(_QWORD *)(v4 + 8LL * v2 + 6304);
  memset(v8, 0, 0x58uLL);
  v8[4] = -1LL;
  v8[3] = a1;
  v6 = *(_BYTE *)(v5 + 204);
  v8[5] = 0x10000LL;
  BYTE4(v8[9]) = v6 & 0xF;
  v8[8] = &v8[7];
  v8[7] = &v8[7];
  LOWORD(v8[6]) = 0;
  BYTE2(v8[6]) = 6;
  HIDWORD(v8[6]) = 0;
  MiLockWsSwapExclusive((__int64)CurrentThread, a1);
  MiQueuePageFileExtension((__int64)v8, 1, 0x11u);
  KeWaitForSingleObject(&v8[6], Executive, 0, 0, 0LL);
  result = MiUnlockWsSwapExclusive((__int64)CurrentThread, a1);
  _InterlockedExchange((volatile __int32 *)(a1 + 1032), 0);
  return result;
}
