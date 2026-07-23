/*
 * XREFs of VfKeCheckForChanges @ 0x140712BB0
 * Callers:
 *     VfInitVerifierComponents @ 0x140703330 (VfInitVerifierComponents.c)
 *     VfSettingsCheckForChanges @ 0x140716730 (VfSettingsCheckForChanges.c)
 * Callees:
 *     ExAllocatePoolWithTagPriority @ 0x14007E290 (ExAllocatePoolWithTagPriority.c)
 *     memset @ 0x140171AC0 (memset.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 */

void __fastcall VfKeCheckForChanges(__int16 a1)
{
  PVOID PoolWithTagPriority; // rax
  void *v3; // rdi
  PVOID v4; // rax
  void *v5; // rbx

  if ( (MmVerifierData & 0xFBF) != 0 )
  {
    if ( !ViTrackIrqlQueue && ((a1 & 2) != 0 || VfVerifyMode >= 3) )
    {
      if ( (unsigned int)ViTrackIrqlQueueLength > 0x10000 )
        ViTrackIrqlQueueLength = 0x10000;
      PoolWithTagPriority = ExAllocatePoolWithTagPriority(
                              NonPagedPoolNx,
                              56LL * (unsigned int)ViTrackIrqlQueueLength,
                              0x6C717249u,
                              HighPoolPriority);
      v3 = PoolWithTagPriority;
      if ( PoolWithTagPriority )
      {
        memset(PoolWithTagPriority, 0, 56LL * (unsigned int)ViTrackIrqlQueueLength);
        if ( _InterlockedCompareExchange64((volatile signed __int64 *)&ViTrackIrqlQueue, (signed __int64)v3, 0LL) )
          ExFreePoolWithTag(v3, 0);
      }
    }
    if ( !VfKeCriticalRegionTraces && (a1 & 0x800) != 0 )
    {
      if ( (unsigned int)VfKeCriticalRegionTracesLength > 0x10000 )
        VfKeCriticalRegionTracesLength = 0x10000;
      v4 = ExAllocatePoolWithTagPriority(
             NonPagedPoolNx,
             (unsigned __int64)(unsigned int)VfKeCriticalRegionTracesLength << 6,
             0x52436656u,
             HighPoolPriority);
      v5 = v4;
      if ( v4 )
      {
        memset(v4, 0, (unsigned __int64)(unsigned int)VfKeCriticalRegionTracesLength << 6);
        if ( _InterlockedCompareExchange64(&VfKeCriticalRegionTraces, (signed __int64)v5, 0LL) )
          ExFreePoolWithTag(v5, 0);
      }
    }
  }
}
