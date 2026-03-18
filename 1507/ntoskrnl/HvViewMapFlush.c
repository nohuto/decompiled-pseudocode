/*
 * XREFs of HvViewMapFlush @ 0x140662CF0
 * Callers:
 *     CmpDoSystemCacheWrite @ 0x14065BA18 (CmpDoSystemCacheWrite.c)
 *     HvExtendHivePrimaryFileValidDataLength @ 0x14065DC30 (HvExtendHivePrimaryFileValidDataLength.c)
 * Callees:
 *     CcSetDirtyPinnedData @ 0x14002F920 (CcSetDirtyPinnedData.c)
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     ExfAcquirePushLockSharedEx @ 0x1400F2F00 (ExfAcquirePushLockSharedEx.c)
 *     ExfReleasePushLockShared @ 0x1400F3600 (ExfReleasePushLockShared.c)
 *     CcFlushCache @ 0x1400F8B70 (CcFlushCache.c)
 *     CcPinRead @ 0x14049D440 (CcPinRead.c)
 *     CcUnpinData @ 0x140511420 (CcUnpinData.c)
 */

__int64 __fastcall HvViewMapFlush(__int64 a1, unsigned int a2, ULONG a3, __int64 a4)
{
  struct _KTHREAD *CurrentThread; // rax
  unsigned __int64 *v8; // rbx
  __int64 v9; // rdi
  __int64 v10; // r9
  ULONG v11; // edi
  unsigned int v12; // r15d
  ULONG v13; // r14d
  struct _KTHREAD *v14; // rcx
  __int16 v15; // ax
  unsigned int Status; // r14d
  PVOID BcbVoid; // [rsp+30h] [rbp-68h] BYREF
  LARGE_INTEGER FileOffset; // [rsp+38h] [rbp-60h] BYREF
  __int64 v20; // [rsp+40h] [rbp-58h] BYREF
  PVOID Buffer; // [rsp+48h] [rbp-50h] BYREF
  struct _IO_STATUS_BLOCK IoStatus; // [rsp+50h] [rbp-48h] BYREF

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v8 = (unsigned __int64 *)(a1 + 8);
  v9 = KeAbPreAcquire(a1 + 8, 0LL, 0LL, a4);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)v8, 17LL, 0LL) )
    ExfAcquirePushLockSharedEx(v8, v9, (ULONG_PTR)v8, v10);
  if ( v9 )
    *(_BYTE *)(v9 + 26) |= 1u;
  v11 = a3;
  v12 = a2;
  while ( v11 )
  {
    v13 = *(_DWORD *)(32LL * ((v12 >> 18) & 0x3F) + *(_QWORD *)(*(_QWORD *)(a1 + 24) + 8LL * (HIBYTE(v12) & 0x7F)) + 24)
        - (v12 & 0x3FFFF);
    if ( v13 > v11 )
      v13 = v11;
    FileOffset.QuadPart = v12;
    CcPinRead(*(PFILE_OBJECT *)(a1 + 16), &FileOffset, v13, 1u, &BcbVoid, &Buffer);
    CcSetDirtyPinnedData(BcbVoid, 0LL);
    CcUnpinData(BcbVoid);
    v12 += v13;
    v11 -= v13;
  }
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 8), 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)(a1 + 8));
  KeAbPostRelease(a1 + 8);
  v14 = KeGetCurrentThread();
  v15 = v14->KernelApcDisable + 1;
  v14->KernelApcDisable = v15;
  if ( !v15
    && ($CD287064E7C9F7953DE243E927CFCB99 *)v14->ApcState.ApcListHead[0].Flink != &v14->152
    && !v14->SpecialApcDisable )
  {
    KiCheckForKernelApcDelivery();
  }
  v20 = a2;
  CcFlushCache(
    *(PSECTION_OBJECT_POINTERS *)(*(_QWORD *)(a1 + 16) + 40LL),
    (PLARGE_INTEGER)((char *)&v20 + 1),
    a3,
    &IoStatus);
  Status = IoStatus.Status;
  if ( IoStatus.Status >= 0 )
    return 0;
  return Status;
}
