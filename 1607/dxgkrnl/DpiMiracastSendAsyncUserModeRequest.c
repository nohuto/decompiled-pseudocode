/*
 * XREFs of DpiMiracastSendAsyncUserModeRequest @ 0x1C0197BB0
 * Callers:
 *     DpiMiracastStopMiracastSessionSync @ 0x1C002C100 (DpiMiracastStopMiracastSessionSync.c)
 *     DxgkMiracastStartMiracastSession @ 0x1C002D594 (DxgkMiracastStartMiracastSession.c)
 *     DpiMiracastCbSendUserModeMessage @ 0x1C0196C80 (DpiMiracastCbSendUserModeMessage.c)
 * Callees:
 *     memmove @ 0x1C0012480 (memmove.c)
 *     Template_pdqqq @ 0x1C002ECC4 (Template_pdqqq.c)
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
        PDEVICE_OBJECT DeviceObject,
        IRP **a11)
{
  char v11; // bl
  void *v15; // rsi
  __int64 v16; // rax
  __int64 v17; // rcx
  __int64 v18; // r8
  unsigned int v19; // ebx
  unsigned int v20; // eax
  unsigned int v21; // eax
  _QWORD *PoolWithTag; // rax
  __int64 v23; // rcx
  _QWORD *v24; // r14
  __int64 v25; // rax
  PIRP Irp; // rax
  __int64 v27; // rcx
  IRP *v28; // rbx
  __int64 v29; // rax
  __int64 v30; // rax
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rax
  __int64 v32; // rax
  __int64 v34; // [rsp+20h] [rbp-58h]
  __int64 v35; // [rsp+28h] [rbp-50h]
  __int64 v36; // [rsp+30h] [rbp-48h]
  __int64 v37; // [rsp+38h] [rbp-40h]
  int v38; // [rsp+90h] [rbp+18h]
  PDEVICE_OBJECT DeviceObjecta; // [rsp+C8h] [rbp+50h]
  __int64 v41; // [rsp+D0h] [rbp+58h]

  v38 = a3;
  v11 = 0;
  if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x200000) != 0 )
    Template_pdqqq((__int64)a1, &EventEnterMiracastSendUserModeRequest, a3, a1[12], 0, Size, a7, 0);
  if ( DeviceObject )
    LOBYTE(DeviceObject->Type) = 0;
  if ( a11 )
    *a11 = 0LL;
  if ( (struct _KTHREAD *)a1[11] != KeGetCurrentThread() )
  {
    v11 = 1;
    ExEnterCriticalRegionAndAcquireFastMutexUnsafe(a1 + 4);
    a1[11] = KeGetCurrentThread();
  }
  v15 = (void *)a1[22];
  DeviceObjecta = (PDEVICE_OBJECT)a1[23];
  if ( v15 )
    ObfReferenceObject(v15);
  if ( v11 )
  {
    a1[11] = 0LL;
    ExReleaseFastMutexUnsafeAndLeaveCriticalRegion(a1 + 4);
  }
  if ( !v15 )
  {
    v16 = WdLogNewEntry5_WdWarning(a1, a2, a3, a4);
    *(_QWORD *)(v16 + 24) = a1;
    WdLogEvent5_WdWarning(v16);
    v19 = -1073741130;
    goto LABEL_34;
  }
  v20 = a7;
  if ( (unsigned int)Size > a7 )
    v20 = Size;
  v21 = v20 + 64;
  if ( v21 < 0x40 )
  {
    v19 = -1073741675;
    v32 = WdLogNewEntry5_WdError(a1);
    *(_QWORD *)(v32 + 24) = -1073741675LL;
    WdLogEvent5_WdError(v32);
    goto LABEL_33;
  }
  PoolWithTag = ExAllocatePoolWithTag((POOL_TYPE)512, v21, 0x74727044u);
  v24 = PoolWithTag;
  if ( !PoolWithTag )
  {
    v19 = -1073741801;
    v25 = WdLogNewEntry5_WdLowResource(v23);
    *(_QWORD *)(v25 + 24) = -1073741801LL;
    WdLogEvent5_WdLowResource(v25);
LABEL_33:
    ObfDereferenceObject(v15);
    goto LABEL_34;
  }
  *PoolWithTag = v15;
  PoolWithTag[1] = a1[12];
  PoolWithTag[4] = a8;
  PoolWithTag[5] = a9;
  *((_DWORD *)PoolWithTag + 14) = a11 == 0LL;
  Irp = IoAllocateIrp(DeviceObjecta->StackSize, 0);
  v28 = Irp;
  if ( !Irp )
  {
    v19 = -1073741801;
    v29 = WdLogNewEntry5_WdLowResource(v27);
    *(_QWORD *)(v29 + 24) = -1073741801LL;
    WdLogEvent5_WdLowResource(v29);
    ExFreePoolWithTag(v24, 0);
    goto LABEL_33;
  }
  v41 = (__int64)&Irp->Tail.Overlay.CurrentStackLocation[-1];
  *(_BYTE *)v41 = 14;
  *(_DWORD *)(v41 + 8) = a7;
  *(_DWORD *)(v41 + 16) = Size;
  *(_DWORD *)(v41 + 24) = v38;
  v30 = 0LL;
  if ( a7 )
    v30 = a6;
  v28->UserBuffer = (PVOID)v30;
  v24[6] = v30;
  if ( (_DWORD)Size || a7 )
  {
    v28->AssociatedIrp.MasterIrp = (struct _IRP *)(v24 + 8);
    if ( (_DWORD)Size )
      memmove(v24 + 8, a4, (unsigned int)Size);
  }
  *(_QWORD *)(v41 + 48) = v15;
  CurrentStackLocation = v28->Tail.Overlay.CurrentStackLocation;
  CurrentStackLocation[-1].CompletionRoutine = (PIO_COMPLETION_ROUTINE)DpiMiracastIoCompleteRoutine;
  CurrentStackLocation[-1].Context = v24;
  CurrentStackLocation[-1].Control = -32;
  if ( a11 )
    *a11 = v28;
  v19 = IofCallDriver(DeviceObjecta, v28);
  if ( DeviceObject )
    LOBYTE(DeviceObject->Type) = 1;
LABEL_34:
  if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x200000) != 0 )
  {
    LODWORD(v37) = v19;
    LODWORD(v36) = a7;
    LODWORD(v35) = Size;
    LODWORD(v34) = 0;
    Template_pdqqq(v17, &EventLeaveMiracastSendUserModeRequest, v18, a1[12], v34, v35, v36, v37);
  }
  return v19;
}
