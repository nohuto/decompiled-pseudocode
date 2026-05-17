/*
 * XREFs of RtlDeleteResource @ 0x180059CD0
 * Callers:
 *     <none>
 * Callees:
 *     RtlDeleteCriticalSection @ 0x180059D20 (RtlDeleteCriticalSection.c)
 *     RtlpFreeDebugInfo @ 0x180059E48 (RtlpFreeDebugInfo.c)
 *     NtClose @ 0x1800A52A0 (NtClose.c)
 */

void *__fastcall RtlDeleteResource(HANDLE *a1)
{
  RtlDeleteCriticalSection(a1);
  NtClose(a1[5]);
  NtClose(a1[7]);
  RtlpFreeDebugInfo(a1[11]);
  return memset(a1, 0, 0x60uLL);
}
