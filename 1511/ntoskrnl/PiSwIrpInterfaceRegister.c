/*
 * XREFs of PiSwIrpInterfaceRegister @ 0x1404E3ABC
 * Callers:
 *     PiSwDispatch @ 0x140494568 (PiSwDispatch.c)
 * Callees:
 *     ExReleaseResourceLite @ 0x14003FBB0 (ExReleaseResourceLite.c)
 *     IofCompleteRequest @ 0x140084CE0 (IofCompleteRequest.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x140088F60 (KiLeaveCriticalRegionUnsafe.c)
 *     RtlStringCbCopyW @ 0x140090A98 (RtlStringCbCopyW.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 *     PiSwLock @ 0x140494B8C (PiSwLock.c)
 *     PiSwDeviceInterfaceSetState @ 0x1404E3DF0 (PiSwDeviceInterfaceSetState.c)
 *     PiSwInterfaceCreate @ 0x1404E3EBC (PiSwInterfaceCreate.c)
 *     IopRegisterDeviceInterface @ 0x1404E4A9C (IopRegisterDeviceInterface.c)
 *     PiSwValidatePropertyArray @ 0x1404E59E8 (PiSwValidatePropertyArray.c)
 *     PiSwPropertySet @ 0x1404E5C20 (PiSwPropertySet.c)
 *     PiSwDeviceFindInterfaceEntry @ 0x1404E619C (PiSwDeviceFindInterfaceEntry.c)
 *     PiSwInterfaceFree @ 0x14061130C (PiSwInterfaceFree.c)
 */

__int64 __fastcall PiSwIrpInterfaceRegister(PIRP Irp)
{
  struct _IO_STACK_LOCATION *CurrentStackLocation; // r15
  _QWORD *FsContext2; // rsi
  struct _IRP *MasterIrp; // rcx
  int v5; // edi
  __int64 v6; // r8
  int v7; // r9d
  __int64 v8; // rcx
  __int64 v9; // rcx
  PVOID *v10; // rdx
  _QWORD *v11; // rax
  __int64 v12; // r8
  __int64 v13; // r8
  NTSTRSAFE_PCWSTR v14; // rsi
  __int64 v15; // rax
  _QWORD *v17; // rsi
  __int64 v18; // rcx
  _QWORD *v19; // rax
  NTSTRSAFE_PCWSTR pszSrc; // [rsp+30h] [rbp-48h] BYREF
  _QWORD v21[8]; // [rsp+38h] [rbp-40h] BYREF
  int v22; // [rsp+88h] [rbp+10h] BYREF
  PVOID P; // [rsp+90h] [rbp+18h] BYREF
  _QWORD *InterfaceEntry; // [rsp+98h] [rbp+20h]

  CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
  v21[1] = CurrentStackLocation;
  FsContext2 = CurrentStackLocation->FileObject->FsContext2;
  v21[2] = FsContext2;
  v21[0] = 0LL;
  P = 0LL;
  InterfaceEntry = 0LL;
  pszSrc = 0LL;
  v22 = 0;
  MasterIrp = Irp->AssociatedIrp.MasterIrp;
  if ( !MasterIrp )
  {
    v5 = -1073741811;
    goto LABEL_46;
  }
  v5 = MesDecodeBufferHandleCreate(MasterIrp, CurrentStackLocation->Parameters.Create.Options, v21);
  if ( v5 < 0 )
    goto LABEL_29;
  NdrMesTypeDecode3(v21[0], "TP 3\a", &off_1406A1A68, &off_1402CF8B0, 2, &P);
  if ( !P || !*(_QWORD *)P || (v6 = *((_QWORD *)P + 3)) == 0 && *((_DWORD *)P + 4) || !*((_DWORD *)P + 4) && v6 )
  {
    v5 = -1073741811;
    goto LABEL_29;
  }
  v5 = PiSwValidatePropertyArray(*((_QWORD *)P + 3));
  if ( v5 < 0 )
    goto LABEL_29;
  PiSwLock();
  if ( !FsContext2 || (v8 = FsContext2[10]) == 0 || FsContext2[11] || (FsContext2[8] & 8) != 0 )
  {
    v5 = -1073741637;
  }
  else
  {
    LOBYTE(v7) = 1;
    v5 = IopRegisterDeviceInterface(v8, *(_QWORD *)P, *((_QWORD *)P + 1), v7, (__int64)&pszSrc, (__int64)&v22);
    if ( v5 >= 0 )
    {
      v9 = FsContext2[15];
      if ( v9 )
        *(_DWORD *)(v9 + 48) |= v22;
      InterfaceEntry = (_QWORD *)PiSwDeviceFindInterfaceEntry(FsContext2, pszSrc);
      if ( InterfaceEntry )
      {
        InterfaceEntry = 0LL;
        v5 = -1073741635;
LABEL_19:
        ExReleaseResourceLite(&PiSwLockObj);
        KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
        if ( v5 < 0 )
          goto LABEL_46;
        v12 = *((_QWORD *)P + 3);
        if ( v12 )
          v5 = PiSwPropertySet(InterfaceEntry[2], 3LL, v12, *((unsigned int *)P + 4));
        if ( v5 < 0 )
          goto LABEL_46;
        PiSwLock();
        LOBYTE(v13) = *((_BYTE *)P + 32);
        v5 = PiSwDeviceInterfaceSetState(FsContext2, InterfaceEntry, v13);
        goto LABEL_24;
      }
      v5 = PiSwInterfaceCreate(pszSrc);
      if ( v5 >= 0 )
      {
        v10 = (PVOID *)FsContext2[24];
        v11 = InterfaceEntry;
        *InterfaceEntry = FsContext2 + 23;
        v11[1] = v10;
        if ( *v10 != FsContext2 + 23 )
          __fastfail(3u);
        *v10 = v11;
        FsContext2[24] = v11;
        goto LABEL_19;
      }
    }
  }
LABEL_24:
  ExReleaseResourceLite(&PiSwLockObj);
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
  if ( v5 >= 0 )
  {
    v14 = pszSrc;
    v5 = RtlStringCbCopyW(
           (NTSTRSAFE_PWSTR)Irp->AssociatedIrp.MasterIrp,
           CurrentStackLocation->Parameters.Read.Length,
           pszSrc);
    if ( v5 >= 0 )
    {
      v15 = -1LL;
      do
        ++v15;
      while ( v14[v15] );
      Irp->IoStatus.Information = 2 * v15 + 2;
    }
LABEL_29:
    if ( v5 >= 0 )
      goto LABEL_30;
  }
LABEL_46:
  v17 = InterfaceEntry;
  if ( InterfaceEntry )
  {
    PiSwLock();
    v18 = *v17;
    v19 = (_QWORD *)v17[1];
    if ( *(_QWORD **)(*v17 + 8LL) != v17 || (_QWORD *)*v19 != v17 )
      __fastfail(3u);
    *v19 = v18;
    *(_QWORD *)(v18 + 8) = v19;
    ExReleaseResourceLite(&PiSwLockObj);
    KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
    PiSwInterfaceFree(InterfaceEntry);
  }
LABEL_30:
  if ( P )
    ExFreePoolWithTag(P, 0x6370726Bu);
  if ( pszSrc )
    ExFreePoolWithTag((PVOID)pszSrc, 0);
  if ( v21[0] )
    MesHandleFree();
  Irp->IoStatus.Status = v5;
  IofCompleteRequest(Irp, 0);
  return (unsigned int)v5;
}
