/*
 * XREFs of KeIntSteerSnapPerf @ 0x1400EA650
 * Callers:
 *     PpmParkSteerInterrupts @ 0x1400E87E0 (PpmParkSteerInterrupts.c)
 * Callees:
 *     KxWaitForSpinLockAndAcquire @ 0x1400A4840 (KxWaitForSpinLockAndAcquire.c)
 *     RtlGetInterruptTimePrecise @ 0x1400EA820 (RtlGetInterruptTimePrecise.c)
 *     KiAcquireSpinLockInstrumented @ 0x14020103C (KiAcquireSpinLockInstrumented.c)
 *     KiReleaseSpinLockInstrumented @ 0x1402010EC (KiReleaseSpinLockInstrumented.c)
 */

__int64 __fastcall KeIntSteerSnapPerf(_DWORD *a1, LARGE_INTEGER *a2)
{
  LARGE_INTEGER InterruptTimePrecise; // rax
  LONGLONG v5; // rbp
  LARGE_INTEGER v6; // r14
  __int64 MHz; // r15
  __int64 v8; // rsi
  unsigned __int8 CurrentIrql; // bl
  ULONG_PTR *i; // rdi
  ULONG_PTR v11; // r8
  ULONG_PTR j; // r11
  unsigned int v13; // ecx
  __int64 v14; // r9
  __int64 v15; // rdx
  __int64 *v16; // rax
  __int64 v17; // r10
  __int64 v18; // rcx
  __int64 v19; // rax
  __int64 v20; // rax
  unsigned __int64 v21; // rax
  __int64 result; // rax
  void *retaddr; // [rsp+58h] [rbp+0h]
  LARGE_INTEGER PerformanceCounter; // [rsp+68h] [rbp+10h] BYREF

  InterruptTimePrecise = RtlGetInterruptTimePrecise(&PerformanceCounter);
  v5 = InterruptTimePrecise.QuadPart - KiIntSteerPreviousPerfSnap;
  v6 = InterruptTimePrecise;
  MHz = KeGetCurrentPrcb()->MHz;
  if ( (unsigned __int64)(InterruptTimePrecise.QuadPart - KiIntSteerPreviousPerfSnap) < 0x186A0 )
  {
    LODWORD(v21) = KiIntSteerLoadPercent;
  }
  else
  {
    v8 = 0LL;
    KiIntSteerPreviousPerfSnap = InterruptTimePrecise.QuadPart;
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
    {
      KiAcquireSpinLockInstrumented(&KiIntTrackSpinlock);
    }
    else if ( _interlockedbittestandset64((volatile signed __int32 *)&KiIntTrackSpinlock, 0LL) )
    {
      KxWaitForSpinLockAndAcquire((volatile signed __int32 *)&KiIntTrackSpinlock);
    }
    for ( i = (ULONG_PTR *)KiIntTrackRootList; i != &KiIntTrackRootList; i = (ULONG_PTR *)*i )
    {
      v11 = i[2];
      for ( j = 0LL; (ULONG_PTR *)v11 != i + 2; v11 = *(_QWORD *)v11 )
      {
        v13 = *(_DWORD *)(v11 + 24);
        v14 = 0LL;
        v15 = 0LL;
        if ( v13 )
        {
          v16 = *(__int64 **)(v11 + 32);
          v17 = v13;
          do
          {
            v18 = *v16++;
            v15 += *(_QWORD *)(v18 + 176);
            v14 += *(_QWORD *)(v18 + 200);
            --v17;
          }
          while ( v17 );
        }
        v19 = v15 - *(_QWORD *)(v11 + 40);
        *(_QWORD *)(v11 + 40) = v15;
        if ( v19 > 0 )
          j += v19;
        v20 = v14 - *(_QWORD *)(v11 + 48);
        *(_QWORD *)(v11 + 48) = v14;
        if ( v20 > 0 )
          j += v20;
      }
      i[23] = j;
      v8 += j;
    }
    if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
      KiReleaseSpinLockInstrumented(&KiIntTrackSpinlock, retaddr);
    else
      _InterlockedAnd64(&KiIntTrackSpinlock, 0LL);
    __writecr8(CurrentIrql);
    v21 = 10000 * v8 / (unsigned __int64)(v5 * MHz);
    KiIntSteerLoadPercent = v21;
  }
  *a1 = v21;
  result = 0LL;
  *a2 = v6;
  return result;
}
