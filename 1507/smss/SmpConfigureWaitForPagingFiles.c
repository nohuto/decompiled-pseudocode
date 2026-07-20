/*
 * XREFs of SmpConfigureWaitForPagingFiles @ 0x14000C180
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall SmpConfigureWaitForPagingFiles(__int64 a1, __int64 a2, int *a3, int a4)
{
  if ( a4 == 4 )
    SmpWaitForPagingFiles = *a3;
  else
    SmpWaitForPagingFiles = 0;
  return 0LL;
}
