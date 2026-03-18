/*
 * XREFs of MmFlushSection @ 0x1400A8E90
 * Callers:
 *     MiFlushDataSection @ 0x14000E728 (MiFlushDataSection.c)
 *     CcSetFileSizesEx @ 0x1400AED28 (CcSetFileSizesEx.c)
 *     CcFlushCachePriv @ 0x1400AFD30 (CcFlushCachePriv.c)
 *     CcPurgeAndClearCacheSection @ 0x1400E7B9C (CcPurgeAndClearCacheSection.c)
 *     CcMdlWriteComplete2 @ 0x1400F23A4 (CcMdlWriteComplete2.c)
 *     CcUnpinRepinnedBcb @ 0x1401A9140 (CcUnpinRepinnedBcb.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x14000A2E0 (ExAcquireSpinLockExclusive.c)
 *     MiComputeFlushRange @ 0x14000C66C (MiComputeFlushRange.c)
 *     KeDelayExecutionThread @ 0x140029A90 (KeDelayExecutionThread.c)
 *     MI_REFERENCE_CONTROL_AREA_FILE @ 0x14003ABE0 (MI_REFERENCE_CONTROL_AREA_FILE.c)
 *     MI_DEREFERENCE_CONTROL_AREA_FILE @ 0x14003AD10 (MI_DEREFERENCE_CONTROL_AREA_FILE.c)
 *     MiFlushSectionInternal @ 0x140063C80 (MiFlushSectionInternal.c)
 *     MiCheckControlArea @ 0x14006D900 (MiCheckControlArea.c)
 *     MiDecrementSubsections @ 0x1400A8B80 (MiDecrementSubsections.c)
 *     MiReturnSubsectionCharges @ 0x1401E3170 (MiReturnSubsectionCharges.c)
 *     FsRtlReleaseFileForCcFlush @ 0x1404556F4 (FsRtlReleaseFileForCcFlush.c)
 *     FsRtlAcquireFileForCcFlushEx @ 0x140455928 (FsRtlAcquireFileForCcFlushEx.c)
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
  ULONG_PTR v10; // rax
  __int64 v11; // r14
  struct _FILE_OBJECT *v12; // r12
  __int64 *v13; // r13
  int v14; // edi
  __int64 v15; // r15
  __int64 *v16; // r12
  KIRQL v17; // bl
  __int64 v18; // rsi
  __int64 v19; // rax
  __int64 v20; // rdx
  __int64 v21; // rsi
  int v23; // [rsp+28h] [rbp-48h]
  __int64 v24; // [rsp+40h] [rbp-30h] BYREF
  ULONG_PTR v25; // [rsp+48h] [rbp-28h]
  __int64 v26; // [rsp+50h] [rbp-20h]
  __int64 *v27; // [rsp+58h] [rbp-18h]
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
  LOBYTE(v32) = CurrentThread[1].Teb;
  LOBYTE(CurrentThread[1].Teb) = 1;
  if ( (v7 & 1) != 0 )
  {
    v9 = 0;
    v10 = MI_REFERENCE_CONTROL_AREA_FILE(v8);
    v11 = v28;
    v12 = (struct _FILE_OBJECT *)v10;
    v13 = v27;
    do
    {
      v14 = FsRtlAcquireFileForCcFlushEx(v12);
      if ( v14 < 0 )
        break;
      v14 = MiFlushSectionInternal(v25, v26, v13, v11, 0LL, v7, (_DWORD *)v5);
      FsRtlReleaseFileForCcFlush(v12);
      if ( v14 != -1073741740 )
        break;
      ++v9;
      KeDelayExecutionThread(0, 0, (PLARGE_INTEGER)&MiShortTime);
    }
    while ( v9 < 5 );
    v8 = v24;
    MI_DEREFERENCE_CONTROL_AREA_FILE(v24, (unsigned __int64)v12);
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
    v14 = MiFlushSectionInternal(v25, v26, v27, v28, 0LL, v23, (_DWORD *)v5);
  }
  if ( v14 < 0 || *(_QWORD *)(v5 + 8) )
    *(_QWORD *)(v5 + 8) += (unsigned int)(v29 << 12);
  else
    *(_QWORD *)(v5 + 8) = v3;
  LOBYTE(CurrentThread[1].Teb) = v32;
  v17 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(v8 + 72));
  v18 = MiDecrementSubsections((__int64)v16, (__int64)v16, 0);
  v19 = MiDecrementSubsections(v15, v15, 0);
  --*(_QWORD *)(v8 + 40);
  LOBYTE(v20) = v17;
  v21 = v19 + v18;
  MiCheckControlArea(v8, v20);
  if ( v21 )
    MiReturnSubsectionCharges(v21);
  return (unsigned int)v14;
}
