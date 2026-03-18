/*
 * XREFs of KdRegisterPowerHandler @ 0x1401C1E24
 * Callers:
 *     <none>
 * Callees:
 *     KeReleaseSpinLock @ 0x14002D960 (KeReleaseSpinLock.c)
 *     KxAcquireSpinLock @ 0x140076D00 (KxAcquireSpinLock.c)
 *     ExAllocatePoolWithTag @ 0x140238380 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall KdRegisterPowerHandler(__int64 a1, __int64 a2, __int64 **a3)
{
  __int64 *PoolWithTag; // rax
  __int64 *v7; // rbx
  __int64 result; // rax
  KIRQL CurrentIrql; // si
  __int64 **v10; // rax

  PoolWithTag = (__int64 *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x20uLL, 0x6F49644Bu);
  v7 = PoolWithTag;
  if ( !PoolWithTag )
    return 3221225626LL;
  PoolWithTag[2] = a1;
  PoolWithTag[3] = a2;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(0xFuLL);
  KxAcquireSpinLock(&KdpPowerSpinLock);
  v10 = (__int64 **)qword_1402EB728;
  *v7 = (__int64)&KdpPowerListHead;
  v7[1] = (__int64)v10;
  if ( *v10 != &KdpPowerListHead )
    __fastfail(3u);
  *v10 = v7;
  qword_1402EB728 = (__int64)v7;
  KeReleaseSpinLock(&KdpPowerSpinLock, CurrentIrql);
  result = 0LL;
  *a3 = v7;
  return result;
}
