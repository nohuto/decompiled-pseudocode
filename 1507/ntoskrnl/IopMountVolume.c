/*
 * XREFs of IopMountVolume @ 0x14040ADB8
 * Callers:
 *     IopCheckVpbMounted @ 0x140006570 (IopCheckVpbMounted.c)
 *     IoVerifyVolume @ 0x140674678 (IoVerifyVolume.c)
 * Callees:
 *     IoGetActivityIdThread @ 0x1400064C0 (IoGetActivityIdThread.c)
 *     IopMountInitializeVpb @ 0x1400064D4 (IopMountInitializeVpb.c)
 *     IopAllocateIrpWithExtension @ 0x140006730 (IopAllocateIrpWithExtension.c)
 *     IopQueryVpbFlagsSafe @ 0x140006788 (IopQueryVpbFlagsSafe.c)
 *     MmIsThisAnNtAsSystem @ 0x140006D08 (MmIsThisAnNtAsSystem.c)
 *     EtwWrite @ 0x140014D30 (EtwWrite.c)
 *     IopIncrementDeviceObjectRefCount @ 0x1400458A0 (IopIncrementDeviceObjectRefCount.c)
 *     KeInitializeEvent @ 0x1400459F0 (KeInitializeEvent.c)
 *     IopDecrementDeviceObjectRef @ 0x140045A10 (IopDecrementDeviceObjectRef.c)
 *     KeResetEvent @ 0x1400484D0 (KeResetEvent.c)
 *     IofCallDriver @ 0x140048540 (IofCallDriver.c)
 *     KeSetEvent @ 0x14004C230 (KeSetEvent.c)
 *     ObfReferenceObject @ 0x14004E630 (ObfReferenceObject.c)
 *     ObfDereferenceObject @ 0x14004ED50 (ObfDereferenceObject.c)
 *     KeWaitForSingleObject @ 0x14004F100 (KeWaitForSingleObject.c)
 *     FsRtlIsTotalDeviceFailure @ 0x140082458 (FsRtlIsTotalDeviceFailure.c)
 *     ExAcquireResourceSharedLite @ 0x1400C8DB0 (ExAcquireResourceSharedLite.c)
 *     ExReleaseResourceLite @ 0x1400C92D0 (ExReleaseResourceLite.c)
 *     EtwEventEnabled @ 0x1400EA070 (EtwEventEnabled.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x140182750 (KeBugCheckEx.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     IoVolumeDeviceToDosName @ 0x14040D36C (IoVolumeDeviceToDosName.c)
 *     IoVolumeDeviceToGuid @ 0x1405624CC (IoVolumeDeviceToGuid.c)
 *     IopLoadFileSystemDriver @ 0x140672054 (IopLoadFileSystemDriver.c)
 */

__int64 __fastcall IopMountVolume(ULONG_PTR BugCheckParameter1, char a2, char a3, char a4, ULONG_PTR *a5)
{
  char v7; // r15
  BOOLEAN IsThisAnNtAsSystem; // al
  BOOLEAN v10; // bl
  struct _KTHREAD *CurrentThread; // rsi
  struct _KTHREAD *v12; // rcx
  KPROCESSOR_MODE PreviousMode; // r14
  BOOLEAN v14; // cl
  KPROCESSOR_MODE v15; // al
  NTSTATUS v16; // eax
  unsigned int v17; // ebx
  int VpbFlagsSafe; // eax
  int v19; // ecx
  __int64 *v20; // rax
  __int64 *v21; // rbx
  ULONG_PTR v22; // r15
  int v23; // r14d
  struct _DEVICE_OBJECT *v24; // rax
  __int64 v25; // rdx
  IRP *IrpWithExtension; // rax
  __int64 v27; // rcx
  NTSTATUS v28; // eax
  ULONG_PTR v29; // rax
  unsigned __int16 Length; // bx
  REGHANDLE v31; // r14
  __int16 v32; // ax
  KPROCESSOR_MODE v33; // al
  BOOLEAN v34; // r8
  KPROCESSOR_MODE v35; // dl
  NTSTATUS v36; // eax
  struct _KTHREAD *v37; // rcx
  __int16 v38; // ax
  int v39; // eax
  struct _KTHREAD *v40; // rcx
  __int16 v41; // ax
  __int16 v42; // ax
  unsigned __int16 v44; // bx
  REGHANDLE v45; // rsi
  struct _EVENT_DATA_DESCRIPTOR *v46; // rax
  ULONG v47; // r9d
  const EVENT_DESCRIPTOR *v48; // rdx
  struct _KTHREAD *v49; // rcx
  __int16 v50; // ax
  char v51; // [rsp+58h] [rbp-248h]
  signed int Status; // [rsp+5Ch] [rbp-244h]
  char v54; // [rsp+60h] [rbp-240h]
  char v55; // [rsp+61h] [rbp-23Fh]
  BOOLEAN v56; // [rsp+62h] [rbp-23Eh]
  char v57; // [rsp+63h] [rbp-23Dh]
  KPROCESSOR_MODE j; // [rsp+65h] [rbp-23Bh]
  _QWORD *Object; // [rsp+68h] [rbp-238h]
  UNICODE_STRING DosName; // [rsp+70h] [rbp-230h] BYREF
  __int16 v62; // [rsp+80h] [rbp-220h] BYREF
  __int16 v63; // [rsp+8Ch] [rbp-214h] BYREF
  __int64 *v64; // [rsp+90h] [rbp-210h]
  __int16 v65; // [rsp+98h] [rbp-208h] BYREF
  LPCGUID ActivityId; // [rsp+A0h] [rbp-200h]
  __int64 *v67; // [rsp+A8h] [rbp-1F8h]
  int v68; // [rsp+B0h] [rbp-1F0h]
  int v69; // [rsp+B4h] [rbp-1ECh]
  int i; // [rsp+C0h] [rbp-1E0h]
  PDEVICE_OBJECT DeviceObject; // [rsp+C8h] [rbp-1D8h]
  signed int v72; // [rsp+D0h] [rbp-1D0h] BYREF
  int v73; // [rsp+D8h] [rbp-1C8h]
  struct _KTHREAD *v74; // [rsp+E0h] [rbp-1C0h]
  ULONG_PTR v75; // [rsp+E8h] [rbp-1B8h]
  int v76; // [rsp+F0h] [rbp-1B0h] BYREF
  __int64 v77; // [rsp+F8h] [rbp-1A8h]
  _QWORD v78[2]; // [rsp+100h] [rbp-1A0h] BYREF
  PIRP Irp; // [rsp+110h] [rbp-190h]
  ULONG_PTR *v80; // [rsp+118h] [rbp-188h]
  struct _KEVENT Event; // [rsp+120h] [rbp-180h] BYREF
  __int64 v82; // [rsp+138h] [rbp-168h]
  struct _KTHREAD *v83; // [rsp+140h] [rbp-160h]
  int v84; // [rsp+148h] [rbp-158h] BYREF
  __int64 v85; // [rsp+14Ch] [rbp-154h]
  int v86; // [rsp+154h] [rbp-14Ch]
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+158h] [rbp-148h] BYREF
  __int16 *v88; // [rsp+168h] [rbp-138h]
  __int64 v89; // [rsp+170h] [rbp-130h]
  wchar_t *Buffer; // [rsp+178h] [rbp-128h]
  int v91; // [rsp+180h] [rbp-120h]
  int v92; // [rsp+184h] [rbp-11Ch]
  struct _EVENT_DATA_DESCRIPTOR v93; // [rsp+1B8h] [rbp-E8h] BYREF
  __int16 *v94; // [rsp+1C8h] [rbp-D8h]
  __int64 v95; // [rsp+1D0h] [rbp-D0h]
  wchar_t *v96; // [rsp+1D8h] [rbp-C8h]
  int v97; // [rsp+1E0h] [rbp-C0h]
  int v98; // [rsp+1E4h] [rbp-BCh]
  _QWORD v99[5]; // [rsp+1E8h] [rbp-B8h] BYREF
  int v100; // [rsp+210h] [rbp-90h]
  int v101; // [rsp+214h] [rbp-8Ch]
  signed int *v102; // [rsp+218h] [rbp-88h]
  __int64 v103; // [rsp+220h] [rbp-80h]

  v7 = a2;
  v75 = BugCheckParameter1;
  v80 = a5;
  ActivityId = 0LL;
  v84 = 0;
  v85 = 0LL;
  v86 = 0;
  DosName.Length = 0;
  *(_QWORD *)&DosName.MaximumLength = 0LL;
  *(_DWORD *)((char *)&DosName.Buffer + 2) = 0;
  HIWORD(DosName.Buffer) = 0;
  v55 = 0;
  v54 = 0;
  IsThisAnNtAsSystem = MmIsThisAnNtAsSystem();
  v10 = IsThisAnNtAsSystem;
  v56 = IsThisAnNtAsSystem;
  CurrentThread = KeGetCurrentThread();
  v74 = CurrentThread;
  if ( IopShutdownFileSystems == 1 )
    return 3221225865LL;
  if ( IsThisAnNtAsSystem )
  {
    ActivityId = (LPCGUID)IoGetActivityIdThread();
    IoVolumeDeviceToGuid(BugCheckParameter1, &v84);
    IoVolumeDeviceToDosName((PVOID)BugCheckParameter1, &DosName);
  }
  if ( a3 )
    goto LABEL_16;
  v12 = KeGetCurrentThread();
  --v12->KernelApcDisable;
  PreviousMode = CurrentThread->PreviousMode;
  do
  {
    if ( a4 || (v14 = 0, PreviousMode == 1) )
      v14 = 1;
    v15 = PreviousMode;
    if ( !a4 )
      v15 = 0;
    v16 = KeWaitForSingleObject((PVOID)(BugCheckParameter1 + 280), Executive, v15, v14, 0LL);
    v17 = v16;
  }
  while ( (v16 == 257 || v16 == 192) && !a4 && (*((_DWORD *)&KeGetCurrentThread()[1].SwapListEntry + 3) & 1) == 0 );
  CurrentThread = v74;
  if ( v16 != 257 && v16 != 192 )
  {
    v54 = 1;
    v10 = v56;
    v7 = a2;
LABEL_16:
    --CurrentThread->KernelApcDisable;
    ExAcquireResourceSharedLite(&IopDatabaseResource, 1u);
    v51 = 1;
    VpbFlagsSafe = (unsigned __int16)IopQueryVpbFlagsSafe(BugCheckParameter1);
    v69 = VpbFlagsSafe;
    if ( (VpbFlagsSafe & 9) != 0 )
    {
      Status = (VpbFlagsSafe & 8) != 0 ? 0xC00000C0 : 0;
      goto LABEL_103;
    }
    if ( v10 )
    {
      Length = DosName.Length;
      v65 = DosName.Length >> 1;
      v31 = IoMgrTraceHandle;
      if ( EtwEventEnabled(IoMgrTraceHandle, &IoMgr_MountBegin) )
      {
        UserData.Ptr = (ULONGLONG)&v84;
        *(_QWORD *)&UserData.Size = 16LL;
        v88 = &v65;
        v89 = 2LL;
        Buffer = DosName.Buffer;
        v91 = Length;
        v92 = 0;
        EtwWrite(v31, &IoMgr_MountBegin, ActivityId, 3u, &UserData);
      }
      v55 = 1;
    }
    KeInitializeEvent(&Event, NotificationEvent, 0);
    Status = -1073741823;
    *(_DWORD *)(BugCheckParameter1 + 48) &= ~2u;
    for ( Object = (_QWORD *)BugCheckParameter1; Object[3]; Object = (_QWORD *)Object[3] )
      ;
    ObfReferenceObject(Object);
    v19 = *(_DWORD *)(BugCheckParameter1 + 72);
    if ( v19 == 7 || v19 == 36 )
    {
      v20 = &IopDiskFileSystemQueueHead;
    }
    else
    {
      v20 = &IopCdRomFileSystemQueueHead;
      if ( v19 != 2 )
        v20 = &IopTapeFileSystemQueueHead;
    }
    v67 = v20;
    v68 = *(_WORD *)(*(_QWORD *)(BugCheckParameter1 + 56) + 4LL) & 0x10;
    while ( 1 )
    {
      v64 = (__int64 *)*v20;
      if ( v64 == v67 )
        goto LABEL_48;
      if ( Status >= 0 )
        goto LABEL_103;
      v57 = *v64 == (_QWORD)v67;
      if ( !v7 && (__int64 *)*v64 == v67 && v64 != (__int64 *)*v67 )
      {
LABEL_48:
        if ( Status >= 0 )
          goto LABEL_103;
        goto LABEL_52;
      }
      if ( !v68 || (__int64 *)*v64 == v67 )
      {
        v21 = v64 - 10;
        DeviceObject = (PDEVICE_OBJECT)(v64 - 10);
        v22 = (ULONG_PTR)(v64 - 10);
        v23 = 1;
        for ( i = 1; ; i = v23 )
        {
          v24 = (struct _DEVICE_OBJECT *)v21[3];
          if ( !v24 )
            break;
          v21 = (__int64 *)v21[3];
          DeviceObject = v24;
          ++v23;
        }
        KeResetEvent(&Event);
        LOBYTE(v25) = v23 + *((_BYTE *)Object + 76);
        IrpWithExtension = (IRP *)IopAllocateIrpWithExtension(0LL, v25);
        Irp = IrpWithExtension;
        if ( !IrpWithExtension )
        {
          Status = -1073741670;
LABEL_52:
          ObfDereferenceObject(Object);
          goto LABEL_103;
        }
        IrpWithExtension->Flags = 66;
        IrpWithExtension->RequestorMode = 0;
        IrpWithExtension->UserEvent = &Event;
        IrpWithExtension->UserIosb = (PIO_STATUS_BLOCK)&v76;
        IrpWithExtension->Tail.Overlay.Thread = CurrentThread;
        v27 = (__int64)&IrpWithExtension->Tail.Overlay.CurrentStackLocation[-1];
        v82 = v27;
        *(_WORD *)v27 = 269;
        *(_BYTE *)(v27 + 2) = a2;
        *(_QWORD *)(v27 + 8) = *(_QWORD *)(BugCheckParameter1 + 56);
        *(_QWORD *)(v27 + 16) = Object;
        v73 = IopFsRegistrationOps;
        ObfReferenceObject(v21);
        IopIncrementDeviceObjectRefCount(v22, 1);
        _InterlockedIncrement(&IopMountsInProgress);
        ExReleaseResourceLite(&IopDatabaseResource);
        v28 = IofCallDriver(DeviceObject, Irp);
        if ( v28 == 259 )
        {
          KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
        }
        else
        {
          v76 = v28;
          v77 = 0LL;
        }
        ExAcquireResourceSharedLite(&IopDatabaseResource, 1u);
        v51 = 1;
        _InterlockedDecrement(&IopMountsInProgress);
        if ( IopMountCompletionWaiters )
          KeSetEvent(&IopMountCompletionEvent, 0, 0);
        ObfDereferenceObject(DeviceObject);
        IopDecrementDeviceObjectRef(v22, 0, 0);
        Status = v76;
        if ( v76 >= 0 )
        {
          v29 = IopMountInitializeVpb(BugCheckParameter1, (__int64)Object, v68, v57);
          *v80 = v29;
LABEL_43:
          v7 = a2;
          goto LABEL_26;
        }
        if ( ((unsigned int)(v76 + 1073741662) <= 1
           || (unsigned int)(v76 + 1073741806) <= 2
           || v76 == -2147483626
           || v76 == -1073741643)
          && v77 == 1 )
        {
          goto LABEL_48;
        }
        if ( v73 != IopFsRegistrationOps )
        {
          v78[0] = *v67;
          v64 = v78;
          Status = -1073741489;
        }
        if ( Status == -1073741412 )
        {
          IopIncrementDeviceObjectRefCount(v22, 1);
          ExReleaseResourceLite(&IopDatabaseResource);
          v51 = 0;
          if ( !a3 )
          {
            KeSetEvent((PRKEVENT)(BugCheckParameter1 + 280), 0, 0);
            v54 = 0;
          }
          v32 = CurrentThread->KernelApcDisable + 1;
          CurrentThread->KernelApcDisable = v32;
          if ( !v32
            && ($CD287064E7C9F7953DE243E927CFCB99 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152
            && !CurrentThread->SpecialApcDisable )
          {
            KiCheckForKernelApcDelivery();
          }
          IopLoadFileSystemDriver(v22);
          if ( !a3 )
          {
            v33 = CurrentThread->PreviousMode;
            for ( j = v33; ; v33 = j )
            {
              if ( a4 || (v34 = 0, v33 == 1) )
                v34 = 1;
              v35 = v33;
              if ( !a4 )
                v35 = 0;
              v36 = KeWaitForSingleObject((PVOID)(BugCheckParameter1 + 280), Executive, v35, v34, 0LL);
              if ( v36 != 257 && v36 != 192 )
                break;
              if ( a4 )
                break;
              v83 = KeGetCurrentThread();
              if ( (*((_DWORD *)&v83[1].SwapListEntry + 3) & 1) != 0 )
                break;
            }
            Status = v36;
            if ( v36 == 257 || v36 == 192 )
            {
              ObfDereferenceObject(Object);
              v37 = KeGetCurrentThread();
              v38 = v37->KernelApcDisable + 1;
              v37->KernelApcDisable = v38;
              if ( !v38
                && ($CD287064E7C9F7953DE243E927CFCB99 *)v37->ApcState.ApcListHead[0].Flink != &v37->152
                && !v37->SpecialApcDisable )
              {
                KiCheckForKernelApcDelivery();
              }
LABEL_103:
              if ( v51 )
                ExReleaseResourceLite(&IopDatabaseResource);
              if ( v54 )
              {
                KeSetEvent((PRKEVENT)(BugCheckParameter1 + 280), 0, 0);
                v40 = KeGetCurrentThread();
                v41 = v40->KernelApcDisable + 1;
                v40->KernelApcDisable = v41;
                if ( !v41
                  && ($CD287064E7C9F7953DE243E927CFCB99 *)v40->ApcState.ApcListHead[0].Flink != &v40->152
                  && !v40->SpecialApcDisable )
                {
                  KiCheckForKernelApcDelivery();
                }
              }
              v42 = CurrentThread->KernelApcDisable + 1;
              CurrentThread->KernelApcDisable = v42;
              if ( !v42
                && ($CD287064E7C9F7953DE243E927CFCB99 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152
                && !CurrentThread->SpecialApcDisable )
              {
                KiCheckForKernelApcDelivery();
              }
              if ( !v56 )
              {
LABEL_110:
                if ( Status < 0
                  && (*(_DWORD *)(BugCheckParameter1 + 48) & 0x100) != 0
                  && (unsigned int)InitializationPhase < 2 )
                {
                  KeBugCheckEx(0xEDu, BugCheckParameter1, Status, 0LL, 0LL);
                }
                return (unsigned int)Status;
              }
              if ( v55 )
              {
                v44 = DosName.Length;
                v45 = IoMgrTraceHandle;
                if ( Status < 0 )
                {
                  v72 = Status;
                  v62 = DosName.Length >> 1;
                  if ( EtwEventEnabled(IoMgrTraceHandle, &IoMgr_MountFailed) )
                  {
                    v99[0] = &v84;
                    v99[1] = 16LL;
                    v99[2] = &v62;
                    v99[3] = 2LL;
                    v99[4] = DosName.Buffer;
                    v100 = v44;
                    v101 = 0;
                    v102 = &v72;
                    v47 = 4;
                    v103 = 4LL;
                    v46 = (struct _EVENT_DATA_DESCRIPTOR *)v99;
                    v48 = &IoMgr_MountFailed;
LABEL_116:
                    EtwWrite(v45, v48, ActivityId, v47, v46);
                  }
                }
                else
                {
                  v63 = DosName.Length >> 1;
                  if ( EtwEventEnabled(IoMgrTraceHandle, &IoMgr_MountSucceeded) )
                  {
                    v93.Ptr = (ULONGLONG)&v84;
                    *(_QWORD *)&v93.Size = 16LL;
                    v94 = &v63;
                    v95 = 2LL;
                    v96 = DosName.Buffer;
                    v97 = v44;
                    v98 = 0;
                    v46 = &v93;
                    v47 = 3;
                    v48 = &IoMgr_MountSucceeded;
                    goto LABEL_116;
                  }
                }
              }
              if ( DosName.Buffer )
                ExFreePoolWithTag(DosName.Buffer, 0);
              goto LABEL_110;
            }
            v54 = 1;
          }
          --CurrentThread->KernelApcDisable;
          ExAcquireResourceSharedLite(&IopDatabaseResource, 1u);
          v51 = 1;
          v39 = (unsigned __int16)IopQueryVpbFlagsSafe(BugCheckParameter1);
          v69 = v39;
          if ( (v39 & 8) != 0 )
          {
            Status = -1073741632;
            goto LABEL_52;
          }
          if ( (v39 & 1) != 0 )
          {
            ObfDereferenceObject(Object);
            Status = 0;
            goto LABEL_103;
          }
          v78[0] = *v67;
          v64 = v78;
          Status = -1073741489;
        }
        if ( Status == -1073741489 || !FsRtlIsTotalDeviceFailure(Status) )
          goto LABEL_43;
        v7 = a2;
        if ( !a2 || v57 )
          goto LABEL_48;
        v64 = *(__int64 **)(v67[1] + 8);
      }
LABEL_26:
      v20 = v64;
    }
  }
  v49 = KeGetCurrentThread();
  v50 = v49->KernelApcDisable + 1;
  v49->KernelApcDisable = v50;
  if ( !v50
    && ($CD287064E7C9F7953DE243E927CFCB99 *)v49->ApcState.ApcListHead[0].Flink != &v49->152
    && !v49->SpecialApcDisable )
  {
    KiCheckForKernelApcDelivery();
  }
  return v17;
}
