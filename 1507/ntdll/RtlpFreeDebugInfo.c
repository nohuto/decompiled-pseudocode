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

LOGICAL __fastcall RtlpFreeDebugInfo(char *a1)
{
  if ( LOWORD(RtlCriticalSectionDebugSList.Alignment) < 0xAu
    || &RtlpStaticDebugInfo <= (_UNKNOWN *)a1 && a1 < &RtlpForceCSDebugInfoCreation )
  {
    return RtlpInterlockedPushEntrySList(&RtlCriticalSectionDebugSList, a1);
  }
  else
  {
    return RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, a1);
  }
}
