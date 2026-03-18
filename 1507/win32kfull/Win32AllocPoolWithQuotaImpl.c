/*
 * XREFs of Win32AllocPoolWithQuotaImpl @ 0x1C00D4570
 * Callers:
 *     <none>
 * Callees:
 *     memset @ 0x1C015D4C0 (memset.c)
 *     ??$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAVCBackTrace@1@@Z @ 0x1C02D3400 (--$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAV.c)
 *     ??$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAVCBackTrace@1@@Z @ 0x1C02D3498 (--$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEA.c)
 */

char *__fastcall Win32AllocPoolWithQuotaImpl(int a1, SIZE_T a2, ULONG a3)
{
  PVOID v3; // rdi
  char *PoolWithQuotaTag; // rbx
  __int64 v6; // rax
  char v7; // si
  PVOID BackTrace[20]; // [rsp+20h] [rbp-A8h] BYREF

  v3 = gpLeakTrackingAllocator;
  if ( (a3 & *((_DWORD *)gpLeakTrackingAllocator + 10)) == a3 )
  {
    v6 = 0LL;
    if ( *((_DWORD *)gpLeakTrackingAllocator + 11) )
    {
      while ( *((_DWORD *)gpLeakTrackingAllocator + v6) != a3 )
      {
        if ( ++v6 >= (unsigned __int64)*((unsigned int *)gpLeakTrackingAllocator + 11) )
          return (char *)ExAllocatePoolWithQuotaTag((POOL_TYPE)(a1 | 8), a2, a3);
      }
      v7 = 0;
      if ( a2 < 0x1000 || (a2 & 0xFFF) != 0 )
      {
        v7 = 1;
        a2 += 16LL;
      }
      PoolWithQuotaTag = (char *)ExAllocatePoolWithQuotaTag((POOL_TYPE)(a1 | 8), a2, a3);
      memset(BackTrace, 0, sizeof(BackTrace));
      RtlCaptureStackBackTrace(0, 0x14u, BackTrace, 0LL);
      if ( v7 && (unsigned __int64)((unsigned __int16)PoolWithQuotaTag & 0xFFF) + 16 < 0x1000 )
      {
        if ( (unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<1>(
                                v3,
                                PoolWithQuotaTag,
                                BackTrace) )
        {
          PoolWithQuotaTag += 16;
          return PoolWithQuotaTag;
        }
      }
      else if ( (unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<0>(
                                   v3,
                                   PoolWithQuotaTag,
                                   BackTrace) )
      {
        return PoolWithQuotaTag;
      }
      ExFreePoolWithTag(PoolWithQuotaTag, 0);
      return 0LL;
    }
  }
  return (char *)ExAllocatePoolWithQuotaTag((POOL_TYPE)(a1 | 8), a2, a3);
}
