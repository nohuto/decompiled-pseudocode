/*
 * XREFs of IopCompleteUnloadOrDelete @ 0x14007F1AC
 * Callers:
 *     IopDecrementDeviceObjectRef @ 0x14002ECF0 (IopDecrementDeviceObjectRef.c)
 *     IoDeleteDevice @ 0x14007F30C (IoDeleteDevice.c)
 *     IoDetachDevice @ 0x14007F490 (IoDetachDevice.c)
 * Callees:
 *     IopIncrementDeviceObjectRefCount @ 0x14002EDD0 (IopIncrementDeviceObjectRefCount.c)
 *     KeWaitForSingleObject @ 0x14005C880 (KeWaitForSingleObject.c)
 *     ExQueueWorkItem @ 0x14005FE5C (ExQueueWorkItem.c)
 *     ObfDereferenceObjectWithTag @ 0x14006ACD0 (ObfDereferenceObjectWithTag.c)
 *     IopInsertRemoveDevice @ 0x14007F118 (IopInsertRemoveDevice.c)
 *     IopDecrementDeviceObjectRefCount @ 0x14007F460 (IopDecrementDeviceObjectRefCount.c)
 *     PnpIsAnyDeviceInUse @ 0x14009E8C4 (PnpIsAnyDeviceInUse.c)
 *     KeAcquireQueuedSpinLock @ 0x1400E8D30 (KeAcquireQueuedSpinLock.c)
 *     KeReleaseQueuedSpinLock @ 0x1400E8DA0 (KeReleaseQueuedSpinLock.c)
 *     IopGetDeviceAttachmentBase @ 0x1400FB710 (IopGetDeviceAttachmentBase.c)
 *     ObDereferenceSecurityDescriptor @ 0x1404200D0 (ObDereferenceSecurityDescriptor.c)
 *     PnpChainDereferenceComplete @ 0x1404C3C20 (PnpChainDereferenceComplete.c)
 *     IopLoadUnloadDriver @ 0x1404E663C (IopLoadUnloadDriver.c)
 *     ObMakeTemporaryObject @ 0x1404EB310 (ObMakeTemporaryObject.c)
 *     VfFastIoCheckState @ 0x1407058C8 (VfFastIoCheckState.c)
 *     VfFastIoSnapState @ 0x140705978 (VfFastIoSnapState.c)
 */

char __fastcall IopCompleteUnloadOrDelete(ULONG_PTR BugCheckParameter2, unsigned __int8 a2, KIRQL a3)
{
  char v3; // bl
  __int64 v4; // rsi
  char v7; // r13
  char v8; // r15
  int v9; // ecx
  __int64 v10; // rax
  __int64 v11; // rcx
  __int64 v13; // r13
  void (__fastcall *v14)(__int64, ULONG_PTR); // r13
  void *v15; // r14
  __int64 v16; // rdi
  __int64 v17; // rdx
  int v18; // r8d
  int IsAnyDeviceInUse; // ebx
  __int64 v20; // r8
  __int64 v21; // rdx
  int v22; // eax
  struct _WORK_QUEUE_ITEM WorkItem; // [rsp+30h] [rbp-50h] BYREF
  __int16 Object; // [rsp+50h] [rbp-30h] BYREF
  char v25; // [rsp+52h] [rbp-2Eh]
  int v26; // [rsp+54h] [rbp-2Ch]
  _QWORD v27[5]; // [rsp+58h] [rbp-28h] BYREF
  __int64 DeviceAttachmentBase; // [rsp+C0h] [rbp+40h] BYREF
  unsigned __int8 v29; // [rsp+C8h] [rbp+48h]

  v29 = a2;
  v3 = 0;
  v4 = *(_QWORD *)(BugCheckParameter2 + 8);
  v7 = 0;
  v8 = 1;
  v9 = *(_DWORD *)(*(_QWORD *)(BugCheckParameter2 + 312) + 32LL);
  if ( (v9 & 4) != 0 )
  {
    DeviceAttachmentBase = IopGetDeviceAttachmentBase(BugCheckParameter2);
    v16 = DeviceAttachmentBase;
    IsAnyDeviceInUse = PnpIsAnyDeviceInUse(&DeviceAttachmentBase, v17, 0LL);
    KeReleaseQueuedSpinLock((unsigned int)(v18 + 10), a3);
    if ( IsAnyDeviceInUse != 1 )
      PnpChainDereferenceComplete(v16, v29);
    return 0;
  }
  else
  {
    if ( (v9 & 2) != 0 )
    {
      if ( (v9 & 1) == 0 || (*(_DWORD *)(v4 + 16) & 1) != 0 )
        v8 = 0;
      v10 = *(_QWORD *)(BugCheckParameter2 + 24);
      DeviceAttachmentBase = v10;
      if ( v10 )
      {
        v13 = *(_QWORD *)(*(_QWORD *)(v10 + 8) + 80LL);
        IopIncrementDeviceObjectRefCount(BugCheckParameter2, 0);
        KeReleaseQueuedSpinLock(0xAuLL, a3);
        if ( v13 )
        {
          if ( *(_DWORD *)v13 > 0x68u )
          {
            v14 = *(void (__fastcall **)(__int64, ULONG_PTR))(v13 + 104);
            if ( v14 )
            {
              v15 = (MmVerifierData & 0x10) != 0 ? (void *)VfFastIoSnapState() : 0LL;
              v14(DeviceAttachmentBase, BugCheckParameter2);
              if ( v15 )
                VfFastIoCheckState(v15, (int)v14);
            }
          }
        }
        a3 = KeAcquireQueuedSpinLock(0xAuLL);
        IopDecrementDeviceObjectRefCount(BugCheckParameter2);
        if ( *(_QWORD *)(BugCheckParameter2 + 24) || *(_DWORD *)(BugCheckParameter2 + 4) )
          goto LABEL_18;
      }
      KeReleaseQueuedSpinLock(0xAuLL, a3);
      v11 = *(_QWORD *)(BugCheckParameter2 + 272);
      if ( v11 )
        ObDereferenceSecurityDescriptor(v11, 1LL);
      IopInsertRemoveDevice(*(_QWORD *)(BugCheckParameter2 + 8), BugCheckParameter2, 0);
      ObfDereferenceObjectWithTag((PVOID)BugCheckParameter2, 0x746C6644u);
      v7 = 1;
      if ( !v8 )
        return 1;
      a3 = KeAcquireQueuedSpinLock(0xAuLL);
      if ( (*(_DWORD *)(v4 + 16) & 1) != 0 )
      {
        v3 = 1;
LABEL_18:
        KeReleaseQueuedSpinLock(0xAuLL, a3);
        return v3;
      }
    }
    v20 = *(_QWORD *)(v4 + 8);
    v21 = v20;
    if ( v20 )
    {
      while ( !*(_DWORD *)(v21 + 4) && !*(_QWORD *)(v21 + 24) && (*(_DWORD *)(*(_QWORD *)(v21 + 312) + 32LL) & 6) == 0 )
      {
        v21 = *(_QWORD *)(v21 + 16);
        if ( !v21 )
          goto LABEL_36;
      }
      v8 = 0;
    }
LABEL_36:
    v22 = *(_DWORD *)(v4 + 16);
    if ( (v22 & 0x80u) != 0 && v20 )
      v8 = 0;
    if ( v8 )
      *(_DWORD *)(v4 + 16) = v22 | 1;
    KeReleaseQueuedSpinLock(0xAuLL, a3);
    if ( v8 )
    {
      Object = 0;
      v27[1] = v27;
      v25 = 6;
      v27[0] = v27;
      v26 = 0;
      v27[2] = v4;
      if ( v29 )
      {
        IopLoadUnloadDriver(&WorkItem);
      }
      else
      {
        WorkItem.List.Flink = 0LL;
        WorkItem.WorkerRoutine = (void (__fastcall *)(void *))IopLoadUnloadDriver;
        WorkItem.Parameter = &WorkItem;
        ExQueueWorkItem(&WorkItem, DelayedWorkQueue);
        KeWaitForSingleObject(&Object, Executive, 0, 0, 0LL);
      }
      ObMakeTemporaryObject((PVOID)v4);
      ObfDereferenceObjectWithTag((PVOID)v4, 0x746C6644u);
    }
    return v7;
  }
}
