/*
 * XREFs of PiSwIrpInterfaceSetState @ 0x1405C44E0
 * Callers:
 *     PiSwDispatch @ 0x14045A7DC (PiSwDispatch.c)
 * Callees:
 *     IofCompleteRequest @ 0x140048F70 (IofCompleteRequest.c)
 *     ExAcquireResourceExclusiveLite @ 0x1400C8A30 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x1400C92D0 (ExReleaseResourceLite.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     PiSwDeviceFindInterfaceEntry @ 0x14045A154 (PiSwDeviceFindInterfaceEntry.c)
 *     PiSwDeviceInterfaceSetState @ 0x14045A1AC (PiSwDeviceInterfaceSetState.c)
 */

__int64 __fastcall PiSwIrpInterfaceSetState(PIRP Irp)
{
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rcx
  __int64 FsContext2; // rsi
  NTSTATUS v4; // edi
  struct _KTHREAD *CurrentThread; // rax
  __int64 *InterfaceEntry; // rdx
  struct _KTHREAD *v7; // rcx
  __int16 v8; // ax
  PVOID P; // [rsp+68h] [rbp+10h] BYREF
  __int64 v11; // [rsp+70h] [rbp+18h] BYREF
  __int64 v12; // [rsp+78h] [rbp+20h]

  CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
  FsContext2 = (__int64)CurrentStackLocation->FileObject->FsContext2;
  v12 = FsContext2;
  v11 = 0LL;
  P = 0LL;
  if ( !Irp->AssociatedIrp.MasterIrp )
    goto LABEL_21;
  v4 = MesDecodeBufferHandleCreate(Irp->AssociatedIrp.MasterIrp, CurrentStackLocation->Parameters.Create.Options, &v11);
  if ( v4 < 0 )
    goto LABEL_12;
  NdrMesTypeDecode3(v11, "TP 3\a", &off_140721CA8, &off_14031E910, 3, &P);
  if ( P && *(_QWORD *)P )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    ExAcquireResourceExclusiveLite(&PiSwLockObj, 1u);
    if ( FsContext2 && *(_QWORD *)(FsContext2 + 80) && !*(_QWORD *)(FsContext2 + 88) )
    {
      InterfaceEntry = PiSwDeviceFindInterfaceEntry(FsContext2, *(const wchar_t **)P);
      if ( InterfaceEntry )
        v4 = PiSwDeviceInterfaceSetState(FsContext2, (__int64)InterfaceEntry, *((_BYTE *)P + 8));
      else
        v4 = -1073741275;
    }
    else
    {
      v4 = -1073741637;
    }
    ExReleaseResourceLite(&PiSwLockObj);
    v7 = KeGetCurrentThread();
    v8 = v7->KernelApcDisable + 1;
    v7->KernelApcDisable = v8;
    if ( !v8
      && ($CD287064E7C9F7953DE243E927CFCB99 *)v7->ApcState.ApcListHead[0].Flink != &v7->152
      && !v7->SpecialApcDisable )
    {
      KiCheckForKernelApcDelivery();
    }
  }
  else
  {
LABEL_21:
    v4 = -1073741811;
  }
LABEL_12:
  if ( P )
    ExFreePoolWithTag(P, 0x6370726Bu);
  if ( v11 )
    MesHandleFree();
  Irp->IoStatus.Status = v4;
  IofCompleteRequest(Irp, 0);
  return (unsigned int)v4;
}
