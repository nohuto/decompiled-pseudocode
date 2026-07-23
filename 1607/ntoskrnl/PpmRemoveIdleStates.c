/*
 * XREFs of PpmRemoveIdleStates @ 0x140200C38
 * Callers:
 *     <none>
 * Callees:
 *     KxAcquireSpinLock @ 0x140092260 (KxAcquireSpinLock.c)
 *     KxReleaseSpinLock @ 0x1400953A0 (KxReleaseSpinLock.c)
 *     KeAddProcessorAffinityEx @ 0x1400D1E28 (KeAddProcessorAffinityEx.c)
 *     xHalFreeMessageTarget @ 0x1401312D4 (xHalFreeMessageTarget.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     memset @ 0x140171AC0 (memset.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PpmRemoveIdleStates(__int64 a1)
{
  void *v1; // rdi
  _DWORD v4[44]; // [rsp+20h] [rbp-C8h] BYREF

  v1 = *(void **)(a1 + 23808);
  if ( v1 )
  {
    v4[0] = 1310721;
    memset(&v4[1], 0, 0xA4uLL);
    KeAddProcessorAffinityEx(v4, *(_DWORD *)(a1 + 36));
    off_1402F23B8();
    KxAcquireSpinLock(&PpmIdleVetoLock);
    *(_QWORD *)(a1 + 23808) = 0LL;
    KxReleaseSpinLock(&PpmIdleVetoLock);
    *(_QWORD *)(a1 + 23816) = 0LL;
    ExFreePoolWithTag(v1, 0x694D5050u);
  }
  return 0LL;
}
