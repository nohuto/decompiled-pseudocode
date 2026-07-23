/*
 * XREFs of RtlBackoff @ 0x180063160
 * Callers:
 *     TppWorkerThread @ 0x18001E740 (TppWorkerThread.c)
 *     RtlAcquireSRWLockExclusive @ 0x180020BE0 (RtlAcquireSRWLockExclusive.c)
 *     RtlpAllocateHeapInternal @ 0x180022DE0 (RtlpAllocateHeapInternal.c)
 *     RtlpxLookupFunctionTable @ 0x1800362E0 (RtlpxLookupFunctionTable.c)
 *     RtlAcquireSRWLockShared @ 0x180042640 (RtlAcquireSRWLockShared.c)
 *     RtlpQueueWaitBlockToSRWLock @ 0x1800630B4 (RtlpQueueWaitBlockToSRWLock.c)
 *     RtlTryAcquireSRWLockShared @ 0x18007EA20 (RtlTryAcquireSRWLockShared.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall RtlBackoff(unsigned int *a1)
{
  unsigned int v1; // r8d
  unsigned __int64 result; // rax
  unsigned __int64 v3; // rax
  unsigned int v4; // r8d
  int v5; // [rsp+8h] [rbp+8h]

  v1 = *a1;
  if ( *a1 )
  {
    if ( v1 < 0x1FFF )
      v1 *= 2;
  }
  else
  {
    result = (unsigned __int64)NtCurrentTeb();
    if ( *(_DWORD *)(*(_QWORD *)(result + 96) + 184LL) == 1 )
      return result;
    v1 = 64;
  }
  *a1 = v1;
  v3 = __rdtsc();
  v5 = 0;
  result = (v1 - 1) & (unsigned int)v3;
  v4 = result + v1;
  if ( v4 )
  {
    do
    {
      _mm_pause();
      result = (unsigned int)(v5 + 1);
      v5 = result;
    }
    while ( (unsigned int)result < v4 );
  }
  return result;
}
