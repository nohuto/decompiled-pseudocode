/*
 * XREFs of PiSwIrpInterfacePropertySet @ 0x140576830
 * Callers:
 *     PiSwDispatch @ 0x140489CB0 (PiSwDispatch.c)
 * Callees:
 *     IofCompleteRequest @ 0x140053560 (IofCompleteRequest.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x140055FA0 (KiLeaveCriticalRegionUnsafe.c)
 *     ExReleaseResourceLite @ 0x140068940 (ExReleaseResourceLite.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     PiSwLock @ 0x1403F1A74 (PiSwLock.c)
 *     PiSwPropertySet @ 0x140487AA0 (PiSwPropertySet.c)
 *     PiSwValidatePropertyArray @ 0x1404892A8 (PiSwValidatePropertyArray.c)
 *     PiSwDeviceFindInterfaceEntry @ 0x1404C7740 (PiSwDeviceFindInterfaceEntry.c)
 *     PiSwUpdateArrayProperties @ 0x1405438D0 (PiSwUpdateArrayProperties.c)
 */

__int64 __fastcall PiSwIrpInterfacePropertySet(PIRP Irp)
{
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rcx
  __int64 FsContext2; // rsi
  NTSTATUS v4; // edi
  unsigned int v5; // edx
  __int64 *InterfaceEntry; // rax
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // r9
  PVOID P; // [rsp+58h] [rbp+10h] BYREF
  __int64 v12; // [rsp+60h] [rbp+18h] BYREF
  __int64 v13; // [rsp+68h] [rbp+20h]

  CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
  FsContext2 = (__int64)CurrentStackLocation->FileObject->FsContext2;
  v13 = FsContext2;
  v12 = 0LL;
  P = 0LL;
  if ( !Irp->AssociatedIrp.MasterIrp )
    goto LABEL_22;
  v4 = MesDecodeBufferHandleCreate(Irp->AssociatedIrp.MasterIrp, CurrentStackLocation->Parameters.Create.Options, &v12);
  if ( v4 < 0 )
    goto LABEL_15;
  NdrMesTypeDecode3(v12, "TP 3\a", &off_1406E9AB0, &off_1402F32B0, 4, &P);
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
      KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread(), v7, v8, v9);
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
  if ( v12 )
    MesHandleFree();
  Irp->IoStatus.Status = v4;
  IofCompleteRequest(Irp, 0);
  return (unsigned int)v4;
}
