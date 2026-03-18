/*
 * XREFs of MmFlushSection @ 0x140085220
 * Callers:
 *     CcFlushCachePriv @ 0x140040060 (CcFlushCachePriv.c)
 *     CcSetFileSizesEx @ 0x140078B30 (CcSetFileSizesEx.c)
 *     CcPurgeAndClearCacheSection @ 0x140078F1C (CcPurgeAndClearCacheSection.c)
 *     MiFlushDataSection @ 0x1400E07B8 (MiFlushDataSection.c)
 *     CcMdlWriteComplete2 @ 0x140128BC4 (CcMdlWriteComplete2.c)
 *     CcUnpinRepinnedBcb @ 0x1401DD4E8 (CcUnpinRepinnedBcb.c)
 * Callees:
 *     MiDecrementSubsections @ 0x140054288 (MiDecrementSubsections.c)
 *     ExpWaitForSpinLockExclusiveAndAcquire @ 0x14007EC50 (ExpWaitForSpinLockExclusiveAndAcquire.c)
 *     MiComputeFlushRange @ 0x140085450 (MiComputeFlushRange.c)
 *     MI_REFERENCE_CONTROL_AREA_FILE @ 0x140088960 (MI_REFERENCE_CONTROL_AREA_FILE.c)
 *     MI_DEREFERENCE_CONTROL_AREA_FILE @ 0x140088A90 (MI_DEREFERENCE_CONTROL_AREA_FILE.c)
 *     MiCheckControlArea @ 0x14008B090 (MiCheckControlArea.c)
 *     MiFlushSectionInternal @ 0x14008D1E0 (MiFlushSectionInternal.c)
 *     KeDelayExecutionThread @ 0x1400E73A0 (KeDelayExecutionThread.c)
 *     HvlNotifyLongSpinWait @ 0x14017DFB0 (HvlNotifyLongSpinWait.c)
 *     MiReturnSubsectionCharges @ 0x140230538 (MiReturnSubsectionCharges.c)
 *     ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x140264044 (ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
 *     FsRtlAcquireFileForCcFlushEx @ 0x1404B1FB8 (FsRtlAcquireFileForCcFlushEx.c)
 *     FsRtlReleaseFileForCcFlush @ 0x1404B2240 (FsRtlReleaseFileForCcFlush.c)
 */

__int64 __fastcall MmFlushSection(__int64 a1, __int64 *a2, __int64 a3, __int64 a4, _DWORD *a5, int a6)
{
  __int64 v6; // r12
  __int64 v7; // rax
  __int64 v8; // rbx
  struct _KTHREAD *CurrentThread; // r13
  __int64 v10; // rdi
  int v11; // eax
  __int64 v12; // rsi
  __int64 v13; // r14
  int v14; // r15d
  volatile signed __int32 *v15; // rbx
  unsigned __int8 CurrentIrql; // r12
  unsigned int v17; // edi
  signed __int32 v18; // eax
  __int64 v19; // rbx
  __int64 v20; // rax
  __int64 v21; // rdx
  __int64 v22; // rbx
  unsigned int v24; // r12d
  __int64 v25; // rax
  struct _FILE_OBJECT *v26; // r13
  int v27; // edi
  struct _KTHREAD *v28; // [rsp+40h] [rbp-40h]
  __int64 v29; // [rsp+48h] [rbp-38h] BYREF
  __int64 v30; // [rsp+50h] [rbp-30h]
  __int64 v31; // [rsp+58h] [rbp-28h]
  __int64 v32; // [rsp+60h] [rbp-20h]
  __int64 v33; // [rsp+68h] [rbp-18h]
  int v34; // [rsp+70h] [rbp-10h]
  __int64 v35; // [rsp+C8h] [rbp+48h] BYREF
  __int64 v36; // [rsp+D0h] [rbp+50h]
  __int64 v37; // [rsp+D8h] [rbp+58h]

  v37 = a4;
  v36 = a3;
  v6 = a3;
  if ( a2 )
  {
    v7 = *a2;
    a2 = &v35;
    v35 = v7;
  }
  v8 = (__int64)a5;
  *a5 = 0;
  *(_QWORD *)(v8 + 8) = a3;
  if ( !(unsigned int)MiComputeFlushRange(a1, a2, a3, &v29) )
    return 0LL;
  CurrentThread = KeGetCurrentThread();
  v10 = v29;
  v28 = CurrentThread;
  LOBYTE(v37) = CurrentThread[1].Teb;
  v11 = a6;
  LOBYTE(CurrentThread[1].Teb) = 1;
  if ( (v11 & 1) != 0 )
  {
    v24 = 0;
    v25 = MI_REFERENCE_CONTROL_AREA_FILE(v10);
    v12 = v33;
    v26 = (struct _FILE_OBJECT *)v25;
    v13 = v32;
    v27 = a6;
    do
    {
      v14 = FsRtlAcquireFileForCcFlushEx(v26);
      if ( v14 < 0 )
        break;
      v14 = MiFlushSectionInternal(v30, v31, v13, v12, 0LL, v27, v8);
      FsRtlReleaseFileForCcFlush(v26);
      if ( v14 != -1073741740 )
        break;
      ++v24;
      KeDelayExecutionThread(0, 0, (PLARGE_INTEGER)&MiShortTime);
    }
    while ( v24 < 5 );
    v10 = v29;
    MI_DEREFERENCE_CONTROL_AREA_FILE(v29, v26);
    v6 = v36;
    CurrentThread = v28;
  }
  else
  {
    v12 = v33;
    v13 = v32;
    v14 = MiFlushSectionInternal(v30, v31, v32, v33, 0LL, v11, v8);
  }
  if ( v14 < 0 || *(_QWORD *)(v8 + 8) )
    *(_QWORD *)(v8 + 8) += (unsigned int)(v34 << 12);
  else
    *(_QWORD *)(v8 + 8) = v6;
  v15 = (volatile signed __int32 *)(v10 + 72);
  LOBYTE(CurrentThread[1].Teb) = v37;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(v10 + 72);
  }
  else
  {
    v17 = 0;
    if ( _interlockedbittestandset(v15, 0x1Fu) )
      v17 = ExpWaitForSpinLockExclusiveAndAcquire(v15);
    while ( 1 )
    {
      v18 = *v15;
      if ( (*v15 & 0xBFFFFFFF) == 0x80000000 )
        break;
      if ( (v18 & 0x40000000) == 0 )
        _InterlockedCompareExchange(v15, v18 | 0x40000000, v18);
      if ( (++v17 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
        _mm_pause();
      else
        HvlNotifyLongSpinWait(v17);
    }
    v12 = v33;
    v13 = v32;
    v10 = v29;
  }
  v19 = MiDecrementSubsections(v13, v13, 0);
  v20 = MiDecrementSubsections(v12, v12, 0);
  --*(_QWORD *)(v10 + 40);
  LOBYTE(v21) = CurrentIrql;
  v22 = v20 + v19;
  MiCheckControlArea(v10, v21);
  if ( v22 )
    MiReturnSubsectionCharges(v22);
  return (unsigned int)v14;
}
