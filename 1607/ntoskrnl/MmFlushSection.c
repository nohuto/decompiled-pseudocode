/*
 * XREFs of MmFlushSection @ 0x1400220D8
 * Callers:
 *     CcPurgeAndClearCacheSection @ 0x14006C3C0 (CcPurgeAndClearCacheSection.c)
 *     CcSetFileSizesEx @ 0x140072FCC (CcSetFileSizesEx.c)
 *     CcMdlWriteComplete2 @ 0x1400B1818 (CcMdlWriteComplete2.c)
 *     CcFlushCachePriv @ 0x1400E6CB0 (CcFlushCachePriv.c)
 *     MiFlushDataSection @ 0x1400FB530 (MiFlushDataSection.c)
 *     CcUnpinRepinnedBcb @ 0x1401B1D50 (CcUnpinRepinnedBcb.c)
 * Callees:
 *     MiComputeFlushRange @ 0x1400213D4 (MiComputeFlushRange.c)
 *     MiDecrementSubsections @ 0x1400222F4 (MiDecrementSubsections.c)
 *     MiDereferenceControlAreaFile @ 0x1400261C0 (MiDereferenceControlAreaFile.c)
 *     MiReferenceControlAreaFile @ 0x140026210 (MiReferenceControlAreaFile.c)
 *     MiCheckControlArea @ 0x140027A60 (MiCheckControlArea.c)
 *     MiFlushSectionInternal @ 0x140029930 (MiFlushSectionInternal.c)
 *     ExAcquireSpinLockExclusive @ 0x14002E710 (ExAcquireSpinLockExclusive.c)
 *     KeDelayExecutionThread @ 0x1400CE420 (KeDelayExecutionThread.c)
 *     MiReturnSubsectionCharges @ 0x1401F513C (MiReturnSubsectionCharges.c)
 *     FsRtlAcquireFileForCcFlushEx @ 0x14042AAEC (FsRtlAcquireFileForCcFlushEx.c)
 *     FsRtlReleaseFileForCcFlush @ 0x14042AD70 (FsRtlReleaseFileForCcFlush.c)
 */

__int64 MmFlushSection(__int64 a1, va_list a2, __int64 a3, ...)
{
  __int64 v3; // rsi
  __int64 v4; // rax
  __int64 v5; // rbx
  struct _KTHREAD *CurrentThread; // r13
  int v7; // r15d
  __int64 v8; // r14
  unsigned int v9; // esi
  __int64 v10; // rax
  int v11; // r14d
  struct _FILE_OBJECT *v12; // r12
  int v13; // r13d
  int v14; // edi
  __int64 v15; // r15
  __int64 v16; // r12
  KIRQL v17; // bl
  __int64 v18; // rsi
  __int64 v19; // rax
  __int64 v20; // rdx
  __int64 v21; // rsi
  int v23; // [rsp+28h] [rbp-48h]
  __int64 v24; // [rsp+40h] [rbp-30h] BYREF
  __int64 v25; // [rsp+48h] [rbp-28h]
  __int64 v26; // [rsp+50h] [rbp-20h]
  __int64 v27; // [rsp+58h] [rbp-18h]
  __int64 v28; // [rsp+60h] [rbp-10h]
  int v29; // [rsp+68h] [rbp-8h]
  struct _KTHREAD *v30; // [rsp+B8h] [rbp+48h]
  __int64 v32; // [rsp+C8h] [rbp+58h] BYREF
  va_list va; // [rsp+C8h] [rbp+58h]
  _DWORD *v34; // [rsp+D0h] [rbp+60h]
  __int64 v35; // [rsp+D8h] [rbp+68h]
  va_list va1; // [rsp+E0h] [rbp+70h] BYREF

  va_start(va1, a3);
  va_start(va, a3);
  v32 = va_arg(va1, _QWORD);
  v34 = va_arg(va1, _DWORD *);
  v35 = va_arg(va1, _QWORD);
  v3 = a3;
  if ( a2 )
  {
    v4 = *(_QWORD *)a2;
    va_copy(a2, va);
    v32 = v4;
  }
  v5 = (__int64)v34;
  *v34 = 0;
  *(_QWORD *)(v5 + 8) = a3;
  if ( !(unsigned int)MiComputeFlushRange(a1, (__int64)a2, a3, (__int64)&v24) )
    return 0LL;
  CurrentThread = KeGetCurrentThread();
  v7 = v35;
  v8 = v24;
  v30 = CurrentThread;
  LOBYTE(v32) = BYTE4(CurrentThread[1].Queue);
  BYTE4(CurrentThread[1].Queue) = 1;
  if ( (v7 & 1) != 0 )
  {
    v9 = 0;
    v10 = MiReferenceControlAreaFile(v8);
    v11 = v28;
    v12 = (struct _FILE_OBJECT *)v10;
    v13 = v27;
    do
    {
      v14 = FsRtlAcquireFileForCcFlushEx(v12);
      if ( v14 < 0 )
        break;
      v14 = MiFlushSectionInternal(v25, v26, v13, v11, 0LL, v7, v5);
      FsRtlReleaseFileForCcFlush(v12);
      if ( v14 != -1073741740 )
        break;
      ++v9;
      KeDelayExecutionThread(0, 0, (PLARGE_INTEGER)&MiShortTime);
    }
    while ( v9 < 5 );
    v8 = v24;
    MiDereferenceControlAreaFile(v24, v12);
    v3 = a3;
    CurrentThread = v30;
    v15 = v28;
    v16 = v27;
  }
  else
  {
    v16 = v27;
    v23 = v7;
    v15 = v28;
    v14 = MiFlushSectionInternal(v25, v26, v27, v28, 0LL, v23, v5);
  }
  if ( v14 < 0 || *(_QWORD *)(v5 + 8) )
    *(_QWORD *)(v5 + 8) += (unsigned int)(v29 << 12);
  else
    *(_QWORD *)(v5 + 8) = v3;
  BYTE4(CurrentThread[1].Queue) = v32;
  v17 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(v8 + 72));
  v18 = MiDecrementSubsections(v16, v16, 0LL);
  v19 = MiDecrementSubsections(v15, v15, 0LL);
  --*(_QWORD *)(v8 + 40);
  LOBYTE(v20) = v17;
  v21 = v19 + v18;
  MiCheckControlArea(v8, v20);
  if ( v21 )
    MiReturnSubsectionCharges(v21);
  return (unsigned int)v14;
}
