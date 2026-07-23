/*
 * XREFs of RtlDeleteResource @ 0x180008160
 * Callers:
 *     <none>
 * Callees:
 *     RtlDeleteCriticalSection @ 0x1800081B0 (RtlDeleteCriticalSection.c)
 *     RtlpFreeDebugInfo @ 0x1800082D8 (RtlpFreeDebugInfo.c)
 *     NtClose @ 0x1800939F0 (NtClose.c)
 */

void __cdecl RtlDeleteResource(PRTL_RESOURCE Resource)
{
  RtlDeleteCriticalSection(&Resource->CriticalSection);
  NtClose(Resource->SharedSemaphore);
  NtClose(Resource->ExclusiveSemaphore);
  RtlpFreeDebugInfo(Resource->DebugInfo);
  memset(Resource, 0, sizeof(_RTL_RESOURCE));
}
