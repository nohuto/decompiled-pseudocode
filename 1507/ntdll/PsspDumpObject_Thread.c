/*
 * XREFs of PsspDumpObject_Thread @ 0x180082DF0
 * Callers:
 *     <none>
 * Callees:
 *     ZwQueryInformationThread @ 0x180093B50 (ZwQueryInformationThread.c)
 */

__int64 __fastcall PsspDumpObject_Thread(__int64 a1, __int64 a2, unsigned int a3, _DWORD *a4)
{
  __int64 result; // rax

  *a4 = 0;
  if ( a3 < 0x38 )
    return 3221225507LL;
  result = ZwQueryInformationThread(a1, 0LL, a2);
  if ( (int)result < 0 || (result = ZwQueryInformationThread(a1, 9LL, a2 + 48), (int)result < 0) )
    *a4 = 0;
  else
    *a4 += 8;
  return result;
}
