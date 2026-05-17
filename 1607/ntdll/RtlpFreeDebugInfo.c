/*
 * XREFs of RtlpFreeDebugInfo @ 0x1800524D8
 * Callers:
 *     RtlInitializeResource @ 0x18002B050 (RtlInitializeResource.c)
 *     RtlpAddDebugInfoToCriticalSection @ 0x18002B140 (RtlpAddDebugInfoToCriticalSection.c)
 *     RtlDeleteResource @ 0x180052360 (RtlDeleteResource.c)
 *     RtlDeleteCriticalSection @ 0x1800523B0 (RtlDeleteCriticalSection.c)
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
    return RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, a1);
  }
}
