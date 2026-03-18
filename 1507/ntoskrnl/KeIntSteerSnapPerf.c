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

__int64 __fastcall KeIntSteerSnapPerf(_DWORD *a1, __int64 *a2, __int64 a3)
{
  __int64 InterruptTimePrecise; // rax
  __int64 v6; // rbp
  __int64 v7; // r14
  __int64 MHz; // r15
  __int64 v9; // rsi
  unsigned __int8 CurrentIrql; // bl
  ULONG_PTR *i; // rdi
  ULONG_PTR v12; // r8
  ULONG_PTR j; // r11
  unsigned int v14; // ecx
  __int64 v15; // r9
  __int64 v16; // rdx
  __int64 *v17; // rax
  __int64 v18; // r10
  __int64 v19; // rcx
  __int64 v20; // rax
  __int64 v21; // rax
  unsigned __int64 v22; // rax
  __int64 result; // rax
  void *retaddr; // [rsp+58h] [rbp+0h]
  char v25; // [rsp+68h] [rbp+10h] BYREF

  InterruptTimePrecise = RtlGetInterruptTimePrecise(&v25, a2, a3);
  v6 = InterruptTimePrecise - KiIntSteerPreviousPerfSnap;
  v7 = InterruptTimePrecise;
  MHz = KeGetCurrentPrcb()->MHz;
  if ( (unsigned __int64)(InterruptTimePrecise - KiIntSteerPreviousPerfSnap) < 0x186A0 )
  {
    LODWORD(v22) = KiIntSteerLoadPercent;
  }
  else
  {
    v9 = 0LL;
    KiIntSteerPreviousPerfSnap = InterruptTimePrecise;
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
      v12 = i[2];
      for ( j = 0LL; (ULONG_PTR *)v12 != i + 2; v12 = *(_QWORD *)v12 )
      {
        v14 = *(_DWORD *)(v12 + 24);
        v15 = 0LL;
        v16 = 0LL;
        if ( v14 )
        {
          v17 = *(__int64 **)(v12 + 32);
          v18 = v14;
          do
          {
            v19 = *v17++;
            v16 += *(_QWORD *)(v19 + 176);
            v15 += *(_QWORD *)(v19 + 200);
            --v18;
          }
          while ( v18 );
        }
        v20 = v16 - *(_QWORD *)(v12 + 40);
        *(_QWORD *)(v12 + 40) = v16;
        if ( v20 > 0 )
          j += v20;
        v21 = v15 - *(_QWORD *)(v12 + 48);
        *(_QWORD *)(v12 + 48) = v15;
        if ( v21 > 0 )
          j += v21;
      }
      i[23] = j;
      v9 += j;
    }
    if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
      KiReleaseSpinLockInstrumented(&KiIntTrackSpinlock, retaddr);
    else
      _InterlockedAnd64(&KiIntTrackSpinlock, 0LL);
    __writecr8(CurrentIrql);
    v22 = 10000 * v9 / (unsigned __int64)(v6 * MHz);
    KiIntSteerLoadPercent = v22;
  }
  *a1 = v22;
  result = 0LL;
  *a2 = v7;
  return result;
}
