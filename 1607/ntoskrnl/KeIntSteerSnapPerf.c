/*
 * XREFs of KeIntSteerSnapPerf @ 0x1400D4990
 * Callers:
 *     PpmParkSteerInterrupts @ 0x1400D58E0 (PpmParkSteerInterrupts.c)
 * Callees:
 *     KxWaitForSpinLockAndAcquire @ 0x1400D6100 (KxWaitForSpinLockAndAcquire.c)
 *     KiAcquireSpinLockInstrumented @ 0x1401D3B08 (KiAcquireSpinLockInstrumented.c)
 *     KiReleaseSpinLockInstrumented @ 0x1401D3BB8 (KiReleaseSpinLockInstrumented.c)
 */

__int64 __fastcall KeIntSteerSnapPerf(_DWORD *a1, __int64 *a2)
{
  __int64 v3; // rdi
  __int64 v4; // rbx
  LARGE_INTEGER v5; // rsi
  __int64 v6; // r14
  LARGE_INTEGER PerformanceCounter; // rdx
  __int64 v8; // rdx
  __int64 v9; // r14
  __int64 v10; // rbp
  __int64 MHz; // r15
  __int64 v12; // rsi
  unsigned __int8 CurrentIrql; // r12
  ULONG_PTR *i; // r11
  ULONG_PTR v15; // r10
  ULONG_PTR j; // rdi
  unsigned int v17; // ecx
  __int64 v18; // r8
  __int64 v19; // rdx
  __int64 *v20; // rax
  __int64 v21; // r9
  __int64 v22; // rcx
  __int64 v23; // rax
  __int64 v24; // rax
  unsigned __int64 v25; // rax
  void *retaddr; // [rsp+58h] [rbp+0h]

  v3 = 0LL;
  while ( 1 )
  {
    v4 = MEMORY[0xFFFFF78000000340];
    if ( (MEMORY[0xFFFFF78000000340] & 1) == 0 )
    {
      v5.QuadPart = MEMORY[0xFFFFF78000000350];
      v6 = MEMORY[0xFFFFF78000000008];
      PerformanceCounter = KeQueryPerformanceCounter(0LL);
      if ( MEMORY[0xFFFFF78000000340] == v4 )
        break;
    }
    _mm_pause();
  }
  if ( PerformanceCounter.QuadPart > (unsigned __int64)v5.QuadPart )
  {
    v8 = -1 - v5.QuadPart + PerformanceCounter.QuadPart;
    if ( MEMORY[0xFFFFF78000000369] )
      v8 <<= MEMORY[0xFFFFF78000000369];
    v3 = ((unsigned __int64)v8 * (unsigned __int128)MEMORY[0xFFFFF78000000360]) >> 64;
  }
  v9 = v3 + v6;
  v10 = v9 - KiIntSteerPreviousPerfSnap;
  MHz = KeGetCurrentPrcb()->MHz;
  if ( (unsigned __int64)(v9 - KiIntSteerPreviousPerfSnap) < 0x186A0 )
  {
    LODWORD(v25) = KiIntSteerLoadPercent;
  }
  else
  {
    KiIntSteerPreviousPerfSnap = v9;
    v12 = 0LL;
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
    {
      KiAcquireSpinLockInstrumented(&KiIntTrackSpinlock);
    }
    else if ( _interlockedbittestandset64((volatile signed __int32 *)&KiIntTrackSpinlock, 0LL) )
    {
      KxWaitForSpinLockAndAcquire(&KiIntTrackSpinlock);
    }
    for ( i = (ULONG_PTR *)KiIntTrackRootList; i != &KiIntTrackRootList; i = (ULONG_PTR *)*i )
    {
      v15 = i[2];
      for ( j = 0LL; (ULONG_PTR *)v15 != i + 2; v15 = *(_QWORD *)v15 )
      {
        v17 = *(_DWORD *)(v15 + 24);
        v18 = 0LL;
        v19 = 0LL;
        if ( v17 )
        {
          v20 = *(__int64 **)(v15 + 32);
          v21 = v17;
          do
          {
            v22 = *v20++;
            v19 += *(_QWORD *)(v22 + 176);
            v18 += *(_QWORD *)(v22 + 200);
            --v21;
          }
          while ( v21 );
        }
        v23 = v19 - *(_QWORD *)(v15 + 40);
        *(_QWORD *)(v15 + 40) = v19;
        if ( v23 > 0 )
          j += v23;
        v24 = v18 - *(_QWORD *)(v15 + 48);
        *(_QWORD *)(v15 + 48) = v18;
        if ( v24 > 0 )
          j += v24;
      }
      i[24] = j;
      v12 += j;
    }
    if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
      KiReleaseSpinLockInstrumented(&KiIntTrackSpinlock, retaddr);
    else
      _InterlockedAnd64((volatile signed __int64 *)&KiIntTrackSpinlock, 0LL);
    __writecr8(CurrentIrql);
    v25 = 10000 * v12 / (unsigned __int64)(v10 * MHz);
    KiIntSteerLoadPercent = v25;
  }
  *a2 = v9;
  *a1 = v25;
  return 0LL;
}
