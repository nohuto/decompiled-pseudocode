/*
 * XREFs of ?DpiIndirectSendAsyncUserModeRequest@@YAJPEAU_FILE_OBJECT@@PEAU_DEVICE_OBJECT@@KPEAXK2KP6AX2PEAU_IO_STATUS_BLOCK@@@Z2PEA_NPEAPEAU_IRP@@@Z @ 0x1C019ACD4
 * Callers:
 *     DpiIndirectCbSendMessage @ 0x1C019B1A0 (DpiIndirectCbSendMessage.c)
 * Callees:
 *     memmove @ 0x1C0012480 (memmove.c)
 *     ?Free@?$AUTO_FREE_POOL@PEAUIDD_COMPLETION_CONTEXT@@@@QEAAXXZ @ 0x1C002F5F0 (-Free@-$AUTO_FREE_POOL@PEAUIDD_COMPLETION_CONTEXT@@@@QEAAXXZ.c)
 */

__int64 __fastcall DpiIndirectSendAsyncUserModeRequest(
        struct _FILE_OBJECT *Object,
        PDEVICE_OBJECT DeviceObject,
        __int64 a3,
        void *a4,
        size_t Size,
        void *a6,
        unsigned int a7,
        void (*a8)(void *, struct _IO_STATUS_BLOCK *),
        void *a9,
        bool *a10)
{
  __int64 v13; // rax
  NTSTATUS v14; // ebx
  size_t v15; // rdi
  unsigned int v16; // esi
  unsigned int v17; // eax
  unsigned int v18; // eax
  _QWORD *PoolWithTag; // r14
  __int64 v20; // rcx
  __int64 v21; // rax
  void (*v22)(void *, struct _IO_STATUS_BLOCK *); // rax
  __int64 v23; // rcx
  __int64 v24; // rax
  PIRP Irp; // rax
  __int64 v26; // rcx
  IRP *v27; // rbx
  __int64 v28; // rax
  struct _IO_STACK_LOCATION *CurrentStackLocation; // r15
  void *v30; // rax
  struct _IO_STACK_LOCATION *v31; // rax
  void *v33; // [rsp+50h] [rbp+8h] BYREF

  v33 = 0LL;
  if ( !Object )
  {
    v13 = WdLogNewEntry5_WdWarning(0LL, DeviceObject, a3, a4);
    *(_QWORD *)(v13 + 24) = DeviceObject;
    WdLogEvent5_WdWarning(v13);
    v14 = -1073741130;
    goto LABEL_21;
  }
  v15 = (unsigned int)Size;
  v16 = a7;
  v17 = a7;
  if ( (unsigned int)Size > a7 )
    v17 = Size;
  v18 = v17 + 56;
  if ( v18 < 0x38 )
  {
    v24 = WdLogNewEntry5_WdError(Object);
    v14 = -1073741675;
    *(_QWORD *)(v24 + 24) = -1073741675LL;
    goto LABEL_20;
  }
  PoolWithTag = ExAllocatePoolWithTag((POOL_TYPE)512, v18, 0x74727044u);
  AUTO_FREE_POOL<IDD_COMPLETION_CONTEXT *>::Free(&v33);
  a10 = 0LL;
  v33 = PoolWithTag;
  AUTO_FREE_POOL<IDD_COMPLETION_CONTEXT *>::Free((void **)&a10);
  if ( !PoolWithTag )
  {
    v21 = WdLogNewEntry5_WdLowResource(v20);
    v14 = -1073741801;
    *(_QWORD *)(v21 + 24) = -1073741801LL;
    WdLogEvent5_WdLowResource(v21);
    goto LABEL_21;
  }
  v22 = a8;
  *PoolWithTag = Object;
  PoolWithTag[3] = v22;
  PoolWithTag[4] = a9;
  *((_DWORD *)PoolWithTag + 12) = 1;
  v14 = ObReferenceObjectByPointer(Object, 0x10000000u, (POBJECT_TYPE)IoFileObjectType, 0);
  if ( v14 < 0 )
  {
    v24 = WdLogNewEntry5_WdError(v23);
LABEL_20:
    WdLogEvent5_WdError(v24);
    goto LABEL_21;
  }
  Irp = IoAllocateIrp(DeviceObject->StackSize, 0);
  v27 = Irp;
  if ( Irp )
  {
    CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
    v30 = 0LL;
    if ( v16 )
      v30 = a6;
    CurrentStackLocation[-1].MajorFunction = 14;
    CurrentStackLocation[-1].Parameters.Read.Length = v16;
    CurrentStackLocation[-1].Parameters.Create.Options = v15;
    CurrentStackLocation[-1].Parameters.Read.ByteOffset.LowPart = 2295820;
    v27->UserBuffer = v30;
    PoolWithTag[5] = v30;
    if ( (_DWORD)v15 || v16 )
    {
      v27->AssociatedIrp.MasterIrp = (struct _IRP *)(PoolWithTag + 7);
      if ( (_DWORD)v15 )
        memmove(PoolWithTag + 7, a4, v15);
    }
    v33 = 0LL;
    CurrentStackLocation[-1].FileObject = Object;
    v31 = v27->Tail.Overlay.CurrentStackLocation;
    v31[-1].CompletionRoutine = (PIO_COMPLETION_ROUTINE)DpiIndirectIoCompleteRoutine;
    v31[-1].Context = PoolWithTag;
    v31[-1].Control = -32;
    v14 = IofCallDriver(DeviceObject, v27);
  }
  else
  {
    v28 = WdLogNewEntry5_WdLowResource(v26);
    v14 = -1073741801;
    *(_QWORD *)(v28 + 24) = -1073741801LL;
    WdLogEvent5_WdLowResource(v28);
    ObfDereferenceObject(Object);
  }
LABEL_21:
  AUTO_FREE_POOL<IDD_COMPLETION_CONTEXT *>::Free(&v33);
  return (unsigned int)v14;
}
