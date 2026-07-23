/*
 * XREFs of RtlDeleteResource @ 0x180059CD0
 * Callers:
 *     <none>
 * Callees:
 *     RtlDeleteCriticalSection @ 0x180059D20 (RtlDeleteCriticalSection.c)
 *     RtlpFreeDebugInfo @ 0x180059E48 (RtlpFreeDebugInfo.c)
 *     NtClose @ 0x1800A52A0 (NtClose.c)
 */

void __cdecl RtlDeleteResource(PRTL_RESOURCE Resource)
{
  RtlDeleteCriticalSection(&Resource->CriticalSection);
  NtClose(Resource->SharedSemaphore);
  NtClose(Resource->ExclusiveSemaphore);
  RtlpFreeDebugInfo(Resource->DebugInfo);
  memset(Resource, 0, sizeof(_RTL_RESOURCE));
}
