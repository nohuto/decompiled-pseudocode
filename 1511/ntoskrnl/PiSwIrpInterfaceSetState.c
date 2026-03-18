/*
 * XREFs of PiSwIrpInterfaceSetState @ 0x14054E7AC
 * Callers:
 *     PiSwDispatch @ 0x140494568 (PiSwDispatch.c)
 * Callees:
 *     ExReleaseResourceLite @ 0x14003FBB0 (ExReleaseResourceLite.c)
 *     IofCompleteRequest @ 0x140084CE0 (IofCompleteRequest.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x140088F60 (KiLeaveCriticalRegionUnsafe.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 *     PiSwLock @ 0x140494B8C (PiSwLock.c)
 *     PiSwDeviceInterfaceSetState @ 0x1404E3DF0 (PiSwDeviceInterfaceSetState.c)
 *     PiSwDeviceFindInterfaceEntry @ 0x1404E619C (PiSwDeviceFindInterfaceEntry.c)
 */

__int64 __fastcall PiSwIrpInterfaceSetState(PIRP Irp)
{
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rcx
  __int64 FsContext2; // rsi
  NTSTATUS v4; // edi
  __int64 *InterfaceEntry; // rdx
  PVOID P; // [rsp+58h] [rbp+10h] BYREF
  __int64 v8; // [rsp+60h] [rbp+18h] BYREF
  __int64 v9; // [rsp+68h] [rbp+20h]

  CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
  FsContext2 = (__int64)CurrentStackLocation->FileObject->FsContext2;
  v9 = FsContext2;
  v8 = 0LL;
  P = 0LL;
  if ( !Irp->AssociatedIrp.MasterIrp )
    goto LABEL_18;
  v4 = MesDecodeBufferHandleCreate(Irp->AssociatedIrp.MasterIrp, CurrentStackLocation->Parameters.Create.Options, &v8);
  if ( v4 < 0 )
    goto LABEL_11;
  NdrMesTypeDecode3(v8, "TP 3\a", &off_1406A1A68, &off_1402CF8B0, 3, &P);
  if ( P && *(_QWORD *)P )
  {
    PiSwLock();
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
    KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
  }
  else
  {
LABEL_18:
    v4 = -1073741811;
  }
LABEL_11:
  if ( P )
    ExFreePoolWithTag(P, 0x6370726Bu);
  if ( v8 )
    MesHandleFree();
  Irp->IoStatus.Status = v4;
  IofCompleteRequest(Irp, 0);
  return (unsigned int)v4;
}
