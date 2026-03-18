/*
 * XREFs of ExSaFree @ 0x140265FEC
 * Callers:
 *     ExCleanupAutoExpandPushLock @ 0x14011C67C (ExCleanupAutoExpandPushLock.c)
 *     ExFreeAutoExpandPushLock @ 0x1402633F0 (ExFreeAutoExpandPushLock.c)
 * Callees:
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     ExpSaAllocatorFree @ 0x140266070 (ExpSaAllocatorFree.c)
 */

void __fastcall ExSaFree(unsigned int a1)
{
  unsigned int v1; // edx
  unsigned int v2; // ecx
  struct _KTHREAD *CurrentThread; // rax
  ULONG_PTR v4; // rcx
  struct _KTHREAD *v5; // rcx
  __int16 v6; // ax

  v1 = (a1 >> 13) & 0x3FFFF;
  _BitScanReverse(&v2, v1);
  CurrentThread = KeGetCurrentThread();
  v4 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(ExSaPageGroupDescriptorArray + 8LL * (v2 - 2)) + 8LL * ((1 << v2) ^ v1) + 8)
                 + 16LL);
  --CurrentThread->SpecialApcDisable;
  ExpSaAllocatorFree(v4);
  v5 = KeGetCurrentThread();
  v6 = v5->SpecialApcDisable + 1;
  v5->SpecialApcDisable = v6;
  if ( !v6 && ($CD287064E7C9F7953DE243E927CFCB99 *)v5->ApcState.ApcListHead[0].Flink != &v5->152 )
    KiCheckForKernelApcDelivery();
}
