/*
 * XREFs of RtlpFreeDebugInfo @ 0x1800082D8
 * Callers:
 *     RtlInitializeResource @ 0x1800076C0 (RtlInitializeResource.c)
 *     RtlpAddDebugInfoToCriticalSection @ 0x1800077B0 (RtlpAddDebugInfoToCriticalSection.c)
 *     RtlDeleteResource @ 0x180008160 (RtlDeleteResource.c)
 *     RtlDeleteCriticalSection @ 0x1800081B0 (RtlDeleteCriticalSection.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlpFreeDebugInfo(unsigned __int64 a1)
{
  if ( LOWORD(RtlCriticalSectionDebugSList.Alignment) < 0xAu
    || (unsigned __int64)&RtlpStaticDebugInfo <= a1 && a1 < (unsigned __int64)&RtlpForceCSDebugInfoCreation )
  {
    return RtlpInterlockedPushEntrySList(&RtlCriticalSectionDebugSList, a1);
  }
  else
  {
    return RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0LL, a1);
  }
}
