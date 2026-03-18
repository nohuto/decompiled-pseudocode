/*
 * XREFs of DpiMiracastSendAsyncUserModeRequest @ 0x1C0169E20
 * Callers:
 *     DpiMiracastStopMiracastSessionSync @ 0x1C00251B0 (DpiMiracastStopMiracastSessionSync.c)
 *     DxgkMiracastStartMiracastSession @ 0x1C00269F0 (DxgkMiracastStartMiracastSession.c)
 *     DpiMiracastCbSendUserModeMessage @ 0x1C0168D40 (DpiMiracastCbSendUserModeMessage.c)
 * Callees:
 *     memmove @ 0x1C0010940 (memmove.c)
 *     Template_pdqqq @ 0x1C0028238 (Template_pdqqq.c)
 */

__int64 __fastcall DpiMiracastSendAsyncUserModeRequest(
        _QWORD *a1,
        __int64 a2,
        __int64 a3,
        const void *a4,
        size_t Size,
        __int64 a6,
        unsigned int a7,
        __int64 a8,
        __int64 a9,
        PDEVICE_OBJECT DeviceObject)
{
  char v10; // di
  struct _FILE_OBJECT *v13; // rsi
  struct _DEVICE_OBJECT *v14; // r13
  __int64 v15; // rax
  __int64 v16; // rcx
  __int64 v17; // r8
  unsigned int v18; // edi
  unsigned int v19; // eax
  unsigned int v20; // eax
  _QWORD *PoolWithTag; // rax
  __int64 v22; // rcx
  _QWORD *v23; // r14
  _QWORD *v24; // rax
  PIRP Irp; // rax
  __int64 v26; // rcx
  IRP *v27; // rdi
  _QWORD *v28; // rax
  struct _IO_STACK_LOCATION *CurrentStackLocation; // r13
  __int64 v30; // rax
  struct _IO_STACK_LOCATION *v31; // rax
  _QWORD *v32; // rax
  __int64 v34; // [rsp+20h] [rbp-58h]
  __int64 v35; // [rsp+28h] [rbp-50h]
  __int64 v36; // [rsp+30h] [rbp-48h]
  __int64 v37; // [rsp+38h] [rbp-40h]
  DWORD v38; // [rsp+90h] [rbp+18h]
  struct _DEVICE_OBJECT *DeviceObjecta; // [rsp+C8h] [rbp+50h]

  v38 = a3;
  v10 = 0;
  if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x200000) != 0 )
    Template_pdqqq((__int64)a1, &EventEnterMiracastSendUserModeRequest, a3, a1[12], 0, Size, a7, 0);
  if ( DeviceObject )
    LOBYTE(DeviceObject->Type) = 0;
  if ( (struct _KTHREAD *)a1[11] != KeGetCurrentThread() )
  {
    v10 = 1;
    ExEnterCriticalRegionAndAcquireFastMutexUnsafe(a1 + 4);
    a1[11] = KeGetCurrentThread();
  }
  v13 = (struct _FILE_OBJECT *)a1[22];
  v14 = (struct _DEVICE_OBJECT *)a1[23];
  DeviceObjecta = v14;
  if ( v13 )
    ObfReferenceObject(v13);
  if ( v10 )
  {
    a1[11] = 0LL;
    ExReleaseFastMutexUnsafeAndLeaveCriticalRegion(a1 + 4);
  }
  if ( !v13 )
  {
    v15 = WdLogNewEntry5_WdWarning(a1, a2, a3, a4);
    *(_QWORD *)(v15 + 24) = DpiMiracastSendAsyncUserModeRequest;
    *(_QWORD *)(v15 + 32) = a1;
    WdLogEvent5_WdWarning(v15);
    v18 = -1073741130;
    goto LABEL_30;
  }
  v19 = a7;
  if ( (unsigned int)Size > a7 )
    v19 = Size;
  v20 = v19 + 56;
  if ( v20 < 0x38 )
  {
    v18 = -1073741675;
    v32 = (_QWORD *)WdLogNewEntry5_WdError(a1);
    v32[3] = DpiMiracastSendAsyncUserModeRequest;
    v32[4] = RtlUIntAdd;
    v32[5] = -1073741675LL;
    WdLogEvent5_WdError(v32);
    goto LABEL_29;
  }
  PoolWithTag = ExAllocatePoolWithTag((POOL_TYPE)512, v20, 0x74727044u);
  v23 = PoolWithTag;
  if ( !PoolWithTag )
  {
    v18 = -1073741801;
    v24 = (_QWORD *)WdLogNewEntry5_WdLowResource(v22);
    v24[3] = DpiMiracastSendAsyncUserModeRequest;
    v24[4] = ExAllocatePoolWithTag;
    v24[5] = -1073741801LL;
    WdLogEvent5_WdLowResource(v24);
LABEL_29:
    ObfDereferenceObject(v13);
    goto LABEL_30;
  }
  *PoolWithTag = v13;
  PoolWithTag[1] = a1[12];
  PoolWithTag[4] = a8;
  PoolWithTag[5] = a9;
  Irp = IoAllocateIrp(v14->StackSize, 0);
  v27 = Irp;
  if ( !Irp )
  {
    v18 = -1073741801;
    v28 = (_QWORD *)WdLogNewEntry5_WdLowResource(v26);
    v28[3] = DpiMiracastSendAsyncUserModeRequest;
    v28[4] = IoAllocateIrp;
    v28[5] = -1073741801LL;
    WdLogEvent5_WdLowResource(v28);
    ExFreePoolWithTag(v23, 0);
    goto LABEL_29;
  }
  CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
  CurrentStackLocation[-1].Parameters.Read.ByteOffset.LowPart = v38;
  v30 = 0LL;
  CurrentStackLocation[-1].MajorFunction = 14;
  CurrentStackLocation[-1].Parameters.Read.Length = a7;
  if ( a7 )
    v30 = a6;
  CurrentStackLocation[-1].Parameters.Create.Options = Size;
  v27->UserBuffer = (PVOID)v30;
  v23[6] = v30;
  if ( (_DWORD)Size || a7 )
  {
    v27->AssociatedIrp.MasterIrp = (struct _IRP *)(v23 + 7);
    if ( (_DWORD)Size )
      memmove(v23 + 7, a4, (unsigned int)Size);
  }
  CurrentStackLocation[-1].FileObject = v13;
  v31 = v27->Tail.Overlay.CurrentStackLocation;
  v31[-1].CompletionRoutine = (PIO_COMPLETION_ROUTINE)DpiMiracastIoCompleteRoutine;
  v31[-1].Context = v23;
  v31[-1].Control = -32;
  v18 = IofCallDriver(DeviceObjecta, v27);
  if ( DeviceObject )
    LOBYTE(DeviceObject->Type) = 1;
LABEL_30:
  if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x200000) != 0 )
  {
    LODWORD(v37) = v18;
    LODWORD(v36) = a7;
    LODWORD(v35) = Size;
    LODWORD(v34) = 0;
    Template_pdqqq(v16, &EventLeaveMiracastSendUserModeRequest, v17, a1[12], v34, v35, v36, v37);
  }
  return v18;
}
