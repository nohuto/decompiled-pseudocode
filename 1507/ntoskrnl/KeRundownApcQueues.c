/*
 * XREFs of KeRundownApcQueues @ 0x140421134
 * Callers:
 *     sub_1402685C8 @ 0x1402685C8 (sub_1402685C8.c)
 *     PspExitThread @ 0x140422830 (PspExitThread.c)
 * Callees:
 *     KiAcquireReleaseThreadLock @ 0x14000E500 (KiAcquireReleaseThreadLock.c)
 *     KeForceResumeThread @ 0x14000E584 (KeForceResumeThread.c)
 *     KiFlushQueueApc @ 0x14000F0C4 (KiFlushQueueApc.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     KeBugCheckEx @ 0x140182750 (KeBugCheckEx.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 */

_QWORD *__fastcall KeRundownApcQueues(__int64 a1)
{
  __int64 v2; // rdx
  __int64 v3; // r8
  __int16 v4; // ax
  _QWORD *v5; // rax
  _QWORD *v6; // rsi
  _QWORD *result; // rax
  _QWORD *v8; // rdi
  _QWORD *v9; // rcx
  void (*v10)(void); // rax
  unsigned __int8 CurrentIrql; // cl

  --*(_WORD *)(a1 + 484);
  *(_DWORD *)(a1 + 116) &= ~0x4000u;
  KiAcquireReleaseThreadLock(a1);
  KeForceResumeThread(a1, v2, v3);
  v4 = *(_WORD *)(a1 + 484) + 1;
  *(_WORD *)(a1 + 484) = v4;
  if ( !v4 && *(_QWORD *)(a1 + 152) != a1 + 152 && !*(_WORD *)(a1 + 486) )
    KiCheckForKernelApcDelivery();
  v5 = KiFlushQueueApc(a1, 1);
  v6 = v5;
  if ( v5 )
  {
    v8 = v5;
    do
    {
      v9 = v8 - 2;
      v8 = (_QWORD *)*v8;
      v10 = (void (*)(void))v9[5];
      if ( v10 )
        v10();
      else
        ExFreePoolWithTag(v9, 0);
    }
    while ( v8 != v6 );
  }
  result = KiFlushQueueApc(a1, 0);
  if ( result || *(_DWORD *)(a1 + 484) )
  {
    CurrentIrql = KeGetCurrentIrql();
    KeBugCheckEx(0x20u, (ULONG_PTR)result, *(unsigned int *)(a1 + 484), CurrentIrql, 0LL);
  }
  return result;
}
