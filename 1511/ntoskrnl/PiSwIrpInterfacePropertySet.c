/*
 * XREFs of PiSwIrpInterfacePropertySet @ 0x14054D0A0
 * Callers:
 *     PiSwDispatch @ 0x140494568 (PiSwDispatch.c)
 * Callees:
 *     ExReleaseResourceLite @ 0x14003FBB0 (ExReleaseResourceLite.c)
 *     IofCompleteRequest @ 0x140084CE0 (IofCompleteRequest.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x140088F60 (KiLeaveCriticalRegionUnsafe.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 *     PiSwLock @ 0x140494B8C (PiSwLock.c)
 *     PiSwValidatePropertyArray @ 0x1404E59E8 (PiSwValidatePropertyArray.c)
 *     PiSwPropertySet @ 0x1404E5C20 (PiSwPropertySet.c)
 *     PiSwDeviceFindInterfaceEntry @ 0x1404E619C (PiSwDeviceFindInterfaceEntry.c)
 *     PiSwUpdateArrayProperties @ 0x1404F93FC (PiSwUpdateArrayProperties.c)
 */

__int64 __fastcall PiSwIrpInterfacePropertySet(PIRP Irp)
{
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rcx
  __int64 FsContext2; // rsi
  NTSTATUS v4; // edi
  unsigned int v5; // edx
  __int64 *InterfaceEntry; // rax
  PVOID P; // [rsp+58h] [rbp+10h] BYREF
  __int64 v9; // [rsp+60h] [rbp+18h] BYREF
  __int64 v10; // [rsp+68h] [rbp+20h]

  CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
  FsContext2 = (__int64)CurrentStackLocation->FileObject->FsContext2;
  v10 = FsContext2;
  v9 = 0LL;
  P = 0LL;
  if ( !Irp->AssociatedIrp.MasterIrp )
    goto LABEL_22;
  v4 = MesDecodeBufferHandleCreate(Irp->AssociatedIrp.MasterIrp, CurrentStackLocation->Parameters.Create.Options, &v9);
  if ( v4 < 0 )
    goto LABEL_15;
  NdrMesTypeDecode3(v9, "TP 3\a", &off_1406A1A68, &off_1402CF8B0, 4, &P);
  if ( P && *(_QWORD *)P && *((_QWORD *)P + 2) && (v5 = *((_DWORD *)P + 2)) != 0 )
  {
    v4 = PiSwValidatePropertyArray(*((_QWORD *)P + 2), v5);
    if ( v4 >= 0 )
    {
      PiSwLock();
      if ( FsContext2 && *(_QWORD *)(FsContext2 + 80) && !*(_QWORD *)(FsContext2 + 88) )
      {
        InterfaceEntry = PiSwDeviceFindInterfaceEntry(FsContext2, *(const wchar_t **)P);
        v4 = InterfaceEntry
           ? PiSwUpdateArrayProperties(
               InterfaceEntry[3],
               *((_DWORD *)InterfaceEntry + 8),
               *((_QWORD *)P + 2),
               *((_DWORD *)P + 2))
           : -1073741275;
      }
      else
      {
        v4 = -1073741637;
      }
      ExReleaseResourceLite(&PiSwLockObj);
      KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
      if ( v4 >= 0 )
        v4 = PiSwPropertySet(*(_QWORD *)P, 3u, *((_QWORD *)P + 2), *((_DWORD *)P + 2));
    }
  }
  else
  {
LABEL_22:
    v4 = -1073741811;
  }
LABEL_15:
  if ( P )
    ExFreePoolWithTag(P, 0x6370726Bu);
  if ( v9 )
    MesHandleFree();
  Irp->IoStatus.Status = v4;
  IofCompleteRequest(Irp, 0);
  return (unsigned int)v4;
}
