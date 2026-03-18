/*
 * XREFs of RawDispatch @ 0x14040B7FC
 * Callers:
 *     <none>
 * Callees:
 *     IofCompleteRequest @ 0x140048F70 (IofCompleteRequest.c)
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     ExpAcquireFastMutexContended @ 0x1400F2E54 (ExpAcquireFastMutexContended.c)
 *     ExpReleaseFastMutexContended @ 0x1400F3D1C (ExpReleaseFastMutexContended.c)
 *     FsRtlIsNtstatusExpected @ 0x140128CBC (FsRtlIsNtstatusExpected.c)
 *     KeBugCheckEx @ 0x140182750 (KeBugCheckEx.c)
 *     RawReadWriteDeviceControl @ 0x14040BAF0 (RawReadWriteDeviceControl.c)
 *     RawClose @ 0x14040BBD8 (RawClose.c)
 *     RawCreate @ 0x14040BCD4 (RawCreate.c)
 *     RawCleanup @ 0x14040BEA0 (RawCleanup.c)
 *     RawQueryVolumeInformation @ 0x14040C044 (RawQueryVolumeInformation.c)
 *     RawFileSystemControl @ 0x14040C3BC (RawFileSystemControl.c)
 *     RawQueryInformation @ 0x1406C6F38 (RawQueryInformation.c)
 *     RawSetInformation @ 0x1406C7008 (RawSetInformation.c)
 */

__int64 __fastcall RawDispatch(__int64 a1, IRP *a2, __int64 a3, __int64 a4)
{
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rsi
  struct _KTHREAD *CurrentThread; // rax
  __int64 v7; // r13
  unsigned int v8; // edx
  unsigned int Information; // eax
  unsigned int v10; // edx
  unsigned int v11; // edx
  unsigned int v12; // edx
  unsigned int v13; // edx
  volatile signed __int32 *v14; // r14
  __int64 v15; // rax
  __int64 v16; // r12
  unsigned __int8 CurrentIrql; // cl
  unsigned __int8 v18; // r12
  signed __int32 v19; // eax
  unsigned __int8 v20; // di
  signed __int32 v21; // eax
  struct _KTHREAD *v22; // rcx
  __int16 v23; // ax
  UCHAR MajorFunction; // al
  unsigned int v26; // ebx
  unsigned int v27; // [rsp+30h] [rbp-38h]
  unsigned __int8 v28; // [rsp+70h] [rbp+8h]

  CurrentStackLocation = a2->Tail.Overlay.CurrentStackLocation;
  if ( *(_WORD *)(a1 + 2) == 336 )
  {
    MajorFunction = CurrentStackLocation->MajorFunction;
    if ( CurrentStackLocation->MajorFunction != 13 || CurrentStackLocation->MinorFunction != 1 )
    {
      if ( (MajorFunction & 0xED) != 0 || MajorFunction == 16 )
        v26 = -1073741808;
      else
        v26 = 0;
      a2->IoStatus.Status = v26;
      IofCompleteRequest(a2, 1);
      return v26;
    }
  }
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v7 = a1 + 336;
  v8 = CurrentStackLocation->MajorFunction;
  if ( v8 <= 9 )
  {
    if ( v8 == 9 )
      goto LABEL_8;
    if ( !CurrentStackLocation->MajorFunction )
    {
      Information = RawCreate((PFSRTL_ADVANCED_FCB_HEADER)(a1 + 336), a2);
      goto LABEL_9;
    }
    if ( v8 == 2 )
    {
      Information = RawClose((PFSRTL_ADVANCED_FCB_HEADER)(a1 + 336), a2);
      goto LABEL_9;
    }
    if ( CurrentStackLocation->MajorFunction > 2u )
    {
      if ( CurrentStackLocation->MajorFunction <= 4u )
      {
LABEL_8:
        Information = RawReadWriteDeviceControl((PFSRTL_ADVANCED_FCB_HEADER)v7, a2);
LABEL_9:
        v27 = Information;
        goto LABEL_39;
      }
      if ( v8 == 5 )
      {
        Information = RawQueryInformation(a1 + 336, a2, CurrentStackLocation);
        goto LABEL_9;
      }
      if ( v8 == 6 )
      {
        Information = RawSetInformation(a1 + 336, a2, CurrentStackLocation);
        goto LABEL_9;
      }
    }
LABEL_37:
    KeBugCheckEx(0x22u, 0LL, 0LL, 0LL, 0LL);
  }
  v10 = v8 - 10;
  if ( !v10 )
  {
    Information = RawQueryVolumeInformation(a1 + 336, a2, CurrentStackLocation);
    goto LABEL_9;
  }
  v11 = v10 - 3;
  if ( !v11 )
  {
    Information = RawFileSystemControl(a1 + 336, a2, CurrentStackLocation);
    goto LABEL_9;
  }
  v12 = v11 - 1;
  if ( !v12 )
    goto LABEL_8;
  v13 = v12 - 4;
  if ( !v13 )
  {
    Information = RawCleanup((PFSRTL_ADVANCED_FCB_HEADER)(a1 + 336), a2);
    goto LABEL_9;
  }
  if ( v13 != 9 )
    goto LABEL_37;
  if ( CurrentStackLocation->MinorFunction != 1 )
  {
    v14 = (volatile signed __int32 *)(a1 + 560);
    v15 = KeAbPreAcquire(a1 + 560, 0LL, 0LL, a4);
    v16 = v15;
    CurrentIrql = KeGetCurrentIrql();
    v28 = CurrentIrql;
    __writecr8(1uLL);
    if ( !_interlockedbittestandreset(v14, 0) )
    {
      ExpAcquireFastMutexContended(v7 + 224, v15);
      CurrentIrql = v28;
    }
    if ( v16 )
      *(_BYTE *)(v16 + 26) |= 1u;
    *(_QWORD *)(v7 + 232) = KeGetCurrentThread();
    *(_DWORD *)(v7 + 272) = CurrentIrql;
    if ( (*(_DWORD *)(v7 + 104) & 2) != 0 )
    {
      v27 = -1073741202;
      a2->IoStatus.Status = -1073741202;
      IofCompleteRequest(a2, 1);
      *(_QWORD *)(v7 + 232) = 0LL;
      v20 = *(_BYTE *)(v7 + 272);
      v21 = _InterlockedCompareExchange(v14, 1, 0);
      if ( v21 )
        ExpReleaseFastMutexContended((volatile signed __int32 *)(v7 + 224), v21);
      __writecr8(v20);
      KeAbPostRelease(v7 + 224);
      goto LABEL_39;
    }
    ++*(_DWORD *)(v7 + 112);
    *(_QWORD *)(v7 + 232) = 0LL;
    v18 = *(_BYTE *)(v7 + 272);
    v19 = _InterlockedCompareExchange(v14, 1, 0);
    if ( v19 )
      ExpReleaseFastMutexContended((volatile signed __int32 *)(v7 + 224), v19);
    __writecr8(v18);
    KeAbPostRelease(v7 + 224);
    goto LABEL_8;
  }
  v27 = -2147483631;
  a2->IoStatus.Status = -2147483631;
  IofCompleteRequest(a2, 1);
LABEL_39:
  v22 = KeGetCurrentThread();
  v23 = v22->KernelApcDisable + 1;
  v22->KernelApcDisable = v23;
  if ( !v23
    && ($CD287064E7C9F7953DE243E927CFCB99 *)v22->ApcState.ApcListHead[0].Flink != &v22->152
    && !v22->SpecialApcDisable )
  {
    KiCheckForKernelApcDelivery();
  }
  return v27;
}
