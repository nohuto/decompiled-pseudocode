/*
 * XREFs of PiSwIrpInterfacePropertySet @ 0x1405C2F68
 * Callers:
 *     PiSwDispatch @ 0x14045A7DC (PiSwDispatch.c)
 * Callees:
 *     IofCompleteRequest @ 0x140048F70 (IofCompleteRequest.c)
 *     ExAcquireResourceExclusiveLite @ 0x1400C8A30 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x1400C92D0 (ExReleaseResourceLite.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     PiSwDeviceFindInterfaceEntry @ 0x14045A154 (PiSwDeviceFindInterfaceEntry.c)
 *     PiSwPropertySet @ 0x1404D7440 (PiSwPropertySet.c)
 *     PiSwValidatePropertyArray @ 0x1404D8F80 (PiSwValidatePropertyArray.c)
 *     PiSwUpdateArrayProperties @ 0x14056A96C (PiSwUpdateArrayProperties.c)
 */

__int64 __fastcall PiSwIrpInterfacePropertySet(PIRP Irp)
{
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rcx
  __int64 FsContext2; // rsi
  NTSTATUS updated; // edi
  unsigned int v5; // edx
  struct _KTHREAD *CurrentThread; // rax
  __int64 *InterfaceEntry; // rax
  struct _KTHREAD *v8; // rcx
  __int16 v9; // ax
  PVOID P; // [rsp+68h] [rbp+10h] BYREF
  __int64 v12; // [rsp+70h] [rbp+18h] BYREF
  __int64 v13; // [rsp+78h] [rbp+20h]

  CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
  FsContext2 = (__int64)CurrentStackLocation->FileObject->FsContext2;
  v13 = FsContext2;
  v12 = 0LL;
  P = 0LL;
  if ( !Irp->AssociatedIrp.MasterIrp )
    goto LABEL_26;
  updated = MesDecodeBufferHandleCreate(
              Irp->AssociatedIrp.MasterIrp,
              CurrentStackLocation->Parameters.Create.Options,
              &v12);
  if ( updated < 0 )
    goto LABEL_17;
  NdrMesTypeDecode3(v12, "TP 3\a", &off_140721CA8, &off_14031E910, 4, &P);
  if ( P && *(_QWORD *)P && *((_QWORD *)P + 2) && (v5 = *((_DWORD *)P + 2)) != 0 )
  {
    updated = PiSwValidatePropertyArray(*((_QWORD *)P + 2), v5);
    if ( updated >= 0 )
    {
      CurrentThread = KeGetCurrentThread();
      --CurrentThread->KernelApcDisable;
      ExAcquireResourceExclusiveLite(&PiSwLockObj, 1u);
      if ( FsContext2 && *(_QWORD *)(FsContext2 + 80) && !*(_QWORD *)(FsContext2 + 88) )
      {
        InterfaceEntry = PiSwDeviceFindInterfaceEntry(FsContext2, *(const wchar_t **)P);
        if ( InterfaceEntry )
          updated = PiSwUpdateArrayProperties(
                      InterfaceEntry[3],
                      *((_DWORD *)InterfaceEntry + 8),
                      *((_QWORD *)P + 2),
                      *((_DWORD *)P + 2));
        else
          updated = -1073741275;
      }
      else
      {
        updated = -1073741637;
      }
      ExReleaseResourceLite(&PiSwLockObj);
      v8 = KeGetCurrentThread();
      v9 = v8->KernelApcDisable + 1;
      v8->KernelApcDisable = v9;
      if ( !v9
        && ($CD287064E7C9F7953DE243E927CFCB99 *)v8->ApcState.ApcListHead[0].Flink != &v8->152
        && !v8->SpecialApcDisable )
      {
        KiCheckForKernelApcDelivery();
      }
      if ( updated >= 0 )
        updated = PiSwPropertySet(*(_QWORD *)P, 3u, *((_QWORD *)P + 2), *((_DWORD *)P + 2));
    }
  }
  else
  {
LABEL_26:
    updated = -1073741811;
  }
LABEL_17:
  if ( P )
    ExFreePoolWithTag(P, 0x6370726Bu);
  if ( v12 )
    MesHandleFree();
  Irp->IoStatus.Status = updated;
  IofCompleteRequest(Irp, 0);
  return (unsigned int)updated;
}
