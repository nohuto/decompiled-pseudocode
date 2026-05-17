/*
 * XREFs of RtlpFreeDebugInfo @ 0x180059E48
 * Callers:
 *     RtlInitializeResource @ 0x180054E10 (RtlInitializeResource.c)
 *     RtlpAddDebugInfoToCriticalSection @ 0x180054F00 (RtlpAddDebugInfoToCriticalSection.c)
 *     RtlDeleteResource @ 0x180059CD0 (RtlDeleteResource.c)
 *     RtlDeleteCriticalSection @ 0x180059D20 (RtlDeleteCriticalSection.c)
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
