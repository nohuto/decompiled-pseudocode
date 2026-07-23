/*
 * XREFs of ExSaFree @ 0x1401351C8
 * Callers:
 *     ExpCleanupAutoExpandPushLock @ 0x14009C604 (ExpCleanupAutoExpandPushLock.c)
 * Callees:
 *     ExpSaAllocatorFree @ 0x14013522C (ExpSaAllocatorFree.c)
 */

__int64 __fastcall ExSaFree(unsigned int a1)
{
  unsigned int v1; // edx
  unsigned int v2; // ecx
  struct _KTHREAD *CurrentThread; // rax
  ULONG_PTR v4; // rcx

  v1 = (a1 >> 13) & 0x3FFFF;
  _BitScanReverse(&v2, v1);
  CurrentThread = KeGetCurrentThread();
  v4 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(ExSaPageGroupDescriptorArray + 8LL * (v2 - 2)) + 8LL * ((1 << v2) ^ v1) + 8)
                 + 16LL);
  --CurrentThread->SpecialApcDisable;
  ExpSaAllocatorFree(v4);
  return KiLeaveGuardedRegionUnsafe((__int64)KeGetCurrentThread());
}
