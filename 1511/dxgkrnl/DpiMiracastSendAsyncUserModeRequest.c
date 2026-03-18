/*
 * XREFs of DpiMiracastSendAsyncUserModeRequest @ 0x1C016E5A0
 * Callers:
 *     DpiMiracastStopMiracastSessionSync @ 0x1C0024CF0 (DpiMiracastStopMiracastSessionSync.c)
 *     DxgkMiracastStartMiracastSession @ 0x1C0026540 (DxgkMiracastStartMiracastSession.c)
 *     DpiMiracastCbSendUserModeMessage @ 0x1C016D4C0 (DpiMiracastCbSendUserModeMessage.c)
 * Callees:
 *     memmove @ 0x1C00120C0 (memmove.c)
 *     Template_pdqqq @ 0x1C0028DF0 (Template_pdqqq.c)
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
  char v11; // di
  void *v15; // rsi
  __int64 v16; // rax
  __int64 v17; // rcx
  __int64 v18; // r8
  unsigned int v19; // edi
  unsigned int v20; // eax
  unsigned int v21; // eax
  _QWORD *PoolWithTag; // rax
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v26; // r9
  _QWORD *v27; // r14
  _QWORD *v28; // rax
  PIRP Irp; // rax
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // r8
  __int64 v33; // r9
  IRP *v34; // rdi
  _QWORD *v35; // rax
  __int64 v36; // rax
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rax
  _QWORD *v38; // rax
  __int64 v40; // [rsp+20h] [rbp-58h]
  __int64 v41; // [rsp+28h] [rbp-50h]
  __int64 v42; // [rsp+30h] [rbp-48h]
  __int64 v43; // [rsp+38h] [rbp-40h]
  int v44; // [rsp+90h] [rbp+18h]
  PDEVICE_OBJECT DeviceObjecta; // [rsp+C8h] [rbp+50h]
  __int64 v47; // [rsp+D0h] [rbp+58h]

  v44 = a3;
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
    *(_QWORD *)(v16 + 24) = DpiMiracastSendAsyncUserModeRequest;
    *(_QWORD *)(v16 + 32) = a1;
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
    v38 = (_QWORD *)WdLogNewEntry5_WdError(a1);
    v38[3] = DpiMiracastSendAsyncUserModeRequest;
    v38[4] = RtlULongAdd;
    v38[5] = -1073741675LL;
    WdLogEvent5_WdError(v38);
    goto LABEL_33;
  }
  PoolWithTag = ExAllocatePoolWithTag((POOL_TYPE)512, v21, 0x74727044u);
  v27 = PoolWithTag;
  if ( !PoolWithTag )
  {
    v19 = -1073741801;
    v28 = (_QWORD *)WdLogNewEntry5_WdLowResource(v24, v23, v25, v26);
    v28[3] = DpiMiracastSendAsyncUserModeRequest;
    v28[4] = ExAllocatePoolWithTag;
    v28[5] = -1073741801LL;
    WdLogEvent5_WdLowResource(v28);
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
  v34 = Irp;
  if ( !Irp )
  {
    v19 = -1073741801;
    v35 = (_QWORD *)WdLogNewEntry5_WdLowResource(v31, v30, v32, v33);
    v35[3] = DpiMiracastSendAsyncUserModeRequest;
    v35[4] = IoAllocateIrp;
    v35[5] = -1073741801LL;
    WdLogEvent5_WdLowResource(v35);
    ExFreePoolWithTag(v27, 0);
    goto LABEL_33;
  }
  v47 = (__int64)&Irp->Tail.Overlay.CurrentStackLocation[-1];
  *(_BYTE *)v47 = 14;
  *(_DWORD *)(v47 + 8) = a7;
  *(_DWORD *)(v47 + 16) = Size;
  *(_DWORD *)(v47 + 24) = v44;
  v36 = 0LL;
  if ( a7 )
    v36 = a6;
  v34->UserBuffer = (PVOID)v36;
  v27[6] = v36;
  if ( (_DWORD)Size || a7 )
  {
    v34->AssociatedIrp.MasterIrp = (struct _IRP *)(v27 + 8);
    if ( (_DWORD)Size )
      memmove(v27 + 8, a4, (unsigned int)Size);
  }
  *(_QWORD *)(v47 + 48) = v15;
  CurrentStackLocation = v34->Tail.Overlay.CurrentStackLocation;
  CurrentStackLocation[-1].CompletionRoutine = (PIO_COMPLETION_ROUTINE)DpiMiracastIoCompleteRoutine;
  CurrentStackLocation[-1].Context = v27;
  CurrentStackLocation[-1].Control = -32;
  if ( a11 )
    *a11 = v34;
  v19 = IofCallDriver(DeviceObjecta, v34);
  if ( DeviceObject )
    LOBYTE(DeviceObject->Type) = 1;
LABEL_34:
  if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x200000) != 0 )
  {
    LODWORD(v43) = v19;
    LODWORD(v42) = a7;
    LODWORD(v41) = Size;
    LODWORD(v40) = 0;
    Template_pdqqq(v17, &EventLeaveMiracastSendUserModeRequest, v18, a1[12], v40, v41, v42, v43);
  }
  return v19;
}
