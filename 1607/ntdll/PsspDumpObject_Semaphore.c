/*
 * XREFs of PsspDumpObject_Semaphore @ 0x180006840
 * Callers:
 *     <none>
 * Callees:
 *     ZwQuerySemaphore @ 0x1800A8D50 (ZwQuerySemaphore.c)
 */

__int64 __fastcall PsspDumpObject_Semaphore(__int64 a1, __int64 a2, unsigned int a3, _DWORD *a4)
{
  *a4 = 0;
  if ( a3 < 8 )
    return 3221225507LL;
  else
    return ZwQuerySemaphore(a1, 0LL, a2, 8LL, a4);
}
