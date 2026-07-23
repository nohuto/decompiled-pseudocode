/*
 * XREFs of CcComputeNextScanTime @ 0x1400AE78C
 * Callers:
 *     CcLazyWriteScan @ 0x140070820 (CcLazyWriteScan.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CcComputeNextScanTime(__int64 *a1, _QWORD *a2)
{
  __int64 result; // rax
  __int64 v4; // rdx
  unsigned int v5; // r9d

  *a2 = 0LL;
  result = (unsigned int)CcNumberWorkerThreads;
  if ( CcMaxNumberOfWriteBehindThreads < (unsigned int)CcNumberWorkerThreads )
  {
    result = 160000000LL / KeMaximumIncrement;
    v4 = *a1;
    v5 = ++CcConsecutiveWorklessLazyScanCount;
    if ( v4 != 0x7FFFFFFFFFFFFFFFLL && v4 + result > MEMORY[0xFFFFF78000000320] )
    {
      v5 = 0;
      *a2 = result + v4 - MEMORY[0xFFFFF78000000320];
      CcConsecutiveWorklessLazyScanCount = 0;
    }
    if ( v5 >= CcMaxWorklessLazywriteScans )
    {
      CcConsecutiveWorklessLazyScanCount = 0;
      *a2 = 0x7FFFFFFFFFFFFFFFLL;
    }
  }
  return result;
}
