/*
 * XREFs of PsspDumpObject_Semaphore @ 0x18008AEF0
 * Callers:
 *     <none>
 * Callees:
 *     ZwQuerySemaphore @ 0x1800A7970 (ZwQuerySemaphore.c)
 */

NTSTATUS __fastcall PsspDumpObject_Semaphore(void *a1, void *a2, unsigned int a3, ULONG *ReturnLength)
{
  *ReturnLength = 0;
  if ( a3 < 8 )
    return -1073741789;
  else
    return ZwQuerySemaphore(a1, SemaphoreBasicInformation, a2, 8u, ReturnLength);
}
