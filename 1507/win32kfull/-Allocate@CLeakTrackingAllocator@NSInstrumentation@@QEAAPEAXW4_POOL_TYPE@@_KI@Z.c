/*
 * XREFs of ?Allocate@CLeakTrackingAllocator@NSInstrumentation@@QEAAPEAXW4_POOL_TYPE@@_KI@Z @ 0x1C014F91C
 * Callers:
 *     ?AllocatePagedLookasideList@CLeakTrackingAllocator@NSInstrumentation@@QEAAPEAX_KIII@Z @ 0x1C014F974 (-AllocatePagedLookasideList@CLeakTrackingAllocator@NSInstrumentation@@QEAAPEAX_KIII@Z.c)
 * Callees:
 *     ?IsTagTracked@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NI@Z @ 0x1C014F90C (-IsTagTracked@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NI@Z.c)
 *     memset @ 0x1C015D4C0 (memset.c)
 *     ??$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAVCBackTrace@1@@Z @ 0x1C02D3400 (--$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAV.c)
 *     ??$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAVCBackTrace@1@@Z @ 0x1C02D3498 (--$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEA.c)
 */

char *__fastcall NSInstrumentation::CLeakTrackingAllocator::Allocate(
        NSInstrumentation::CLeakTrackingAllocator *this,
        enum _POOL_TYPE a2,
        __int64 a3,
        int a4)
{
  ULONG v5; // r9d
  SIZE_T v6; // r10
  POOL_TYPE v7; // r11d
  char *PoolWithTag; // rbx
  char v10; // si
  PVOID BackTrace[20]; // [rsp+20h] [rbp-A8h] BYREF

  if ( NSInstrumentation::CLeakTrackingAllocator::IsTagTracked(this, a4) )
  {
    v10 = 0;
    if ( v6 < 0x1000 || (v6 & 0xFFF) != 0 )
    {
      v10 = 1;
      v6 += 16LL;
    }
    PoolWithTag = (char *)ExAllocatePoolWithTag(v7, v6, v5);
    memset(BackTrace, 0, sizeof(BackTrace));
    RtlCaptureStackBackTrace(0, 0x14u, BackTrace, 0LL);
    if ( v10 && (unsigned __int64)((unsigned __int16)PoolWithTag & 0xFFF) + 16 < 0x1000 )
    {
      if ( (unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<1>(
                              this,
                              PoolWithTag,
                              BackTrace) )
      {
        PoolWithTag += 16;
        return PoolWithTag;
      }
    }
    else if ( (unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<0>(
                                 this,
                                 PoolWithTag,
                                 BackTrace) )
    {
      return PoolWithTag;
    }
    ExFreePoolWithTag(PoolWithTag, 0);
    return 0LL;
  }
  return (char *)ExAllocatePoolWithTag(v7, v6, v5);
}
