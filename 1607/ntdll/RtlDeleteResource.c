/*
 * XREFs of RtlDeleteResource @ 0x180052350
 * Callers:
 *     <none>
 * Callees:
 *     RtlDeleteCriticalSection @ 0x1800523A0 (RtlDeleteCriticalSection.c)
 *     RtlpFreeDebugInfo @ 0x1800524C8 (RtlpFreeDebugInfo.c)
 *     NtClose @ 0x1800A6600 (NtClose.c)
 */

void __cdecl RtlDeleteResource(PRTL_RESOURCE Resource)
{
  RtlDeleteCriticalSection(&Resource->CriticalSection);
  NtClose(Resource->SharedSemaphore);
  NtClose(Resource->ExclusiveSemaphore);
  RtlpFreeDebugInfo(Resource->DebugInfo);
  memset(Resource, 0, sizeof(_RTL_RESOURCE));
}
