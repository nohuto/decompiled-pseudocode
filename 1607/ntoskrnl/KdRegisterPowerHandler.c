/*
 * XREFs of KdRegisterPowerHandler @ 0x14014C170
 * Callers:
 *     <none>
 * Callees:
 *     KxAcquireSpinLock @ 0x140092260 (KxAcquireSpinLock.c)
 *     KeReleaseSpinLock @ 0x1400EB600 (KeReleaseSpinLock.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall KdRegisterPowerHandler(__int64 a1, __int64 a2, _QWORD *a3)
{
  _QWORD *PoolWithTag; // rax
  _QWORD *v7; // rbx
  KIRQL CurrentIrql; // di
  _QWORD *v9; // rax
  __int64 result; // rax

  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x20uLL, 0x6F49644Bu);
  v7 = PoolWithTag;
  if ( !PoolWithTag )
    return 3221225626LL;
  PoolWithTag[2] = a1;
  PoolWithTag[3] = a2;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(0xFuLL);
  KxAcquireSpinLock(&KdpPowerSpinLock);
  v9 = (_QWORD *)qword_14031CCD8;
  if ( *(__int64 **)qword_14031CCD8 != &KdpPowerListHead )
    __fastfail(3u);
  *v7 = &KdpPowerListHead;
  v7[1] = v9;
  *v9 = v7;
  qword_14031CCD8 = (__int64)v7;
  KeReleaseSpinLock(&KdpPowerSpinLock, CurrentIrql);
  result = 0LL;
  *a3 = v7;
  return result;
}
