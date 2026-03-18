/*
 * XREFs of KeRundownApcQueues @ 0x14050BA4C
 * Callers:
 *     sub_14023207C @ 0x14023207C (sub_14023207C.c)
 *     PspExitThread @ 0x14051611C (PspExitThread.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x14006A0A0 (KeLeaveCriticalRegionThread.c)
 *     KiAcquireReleaseThreadLock @ 0x1400CB30C (KiAcquireReleaseThreadLock.c)
 *     KeForceResumeThread @ 0x1400CB374 (KeForceResumeThread.c)
 *     KiFlushQueueApc @ 0x1400CBB54 (KiFlushQueueApc.c)
 *     KeBugCheckEx @ 0x14015D500 (KeBugCheckEx.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 */

_QWORD *__fastcall KeRundownApcQueues(__int64 a1)
{
  _QWORD *v2; // rax
  _QWORD *v3; // rsi
  _QWORD *result; // rax
  _QWORD *v5; // rdi
  _QWORD *v6; // rcx
  void (*v7)(void); // rax
  unsigned __int8 CurrentIrql; // cl

  --*(_WORD *)(a1 + 484);
  *(_DWORD *)(a1 + 116) &= ~0x4000u;
  KiAcquireReleaseThreadLock(a1);
  KeForceResumeThread(a1);
  KeLeaveCriticalRegionThread(a1);
  v2 = KiFlushQueueApc(a1, 1);
  v3 = v2;
  if ( v2 )
  {
    v5 = v2;
    do
    {
      v6 = v5 - 2;
      v5 = (_QWORD *)*v5;
      v7 = (void (*)(void))v6[5];
      if ( v7 )
        v7();
      else
        ExFreePoolWithTag(v6, 0);
    }
    while ( v5 != v3 );
  }
  result = KiFlushQueueApc(a1, 0);
  if ( result || *(_DWORD *)(a1 + 484) )
  {
    CurrentIrql = KeGetCurrentIrql();
    KeBugCheckEx(0x20u, (ULONG_PTR)result, *(unsigned int *)(a1 + 484), CurrentIrql, 0LL);
  }
  return result;
}
