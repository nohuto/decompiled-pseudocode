/*
 * XREFs of PiSwIrpInterfaceRegister @ 0x140487098
 * Callers:
 *     PiSwDispatch @ 0x140489090 (PiSwDispatch.c)
 * Callees:
 *     IofCompleteRequest @ 0x1400530E0 (IofCompleteRequest.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x140055B20 (KiLeaveCriticalRegionUnsafe.c)
 *     ExReleaseResourceLite @ 0x1400684C0 (ExReleaseResourceLite.c)
 *     RtlStringCbCopyW @ 0x1400C265C (RtlStringCbCopyW.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     PiSwLock @ 0x1403F0938 (PiSwLock.c)
 *     PiSwDeviceFindInterfaceEntry @ 0x140486EC4 (PiSwDeviceFindInterfaceEntry.c)
 *     PiSwDeviceInterfaceSetState @ 0x140486F20 (PiSwDeviceInterfaceSetState.c)
 *     PiSwInterfaceCreate @ 0x140486FEC (PiSwInterfaceCreate.c)
 *     IopRegisterDeviceInterface @ 0x14050FDE8 (IopRegisterDeviceInterface.c)
 *     PiSwPropertySet @ 0x140510214 (PiSwPropertySet.c)
 *     PiSwValidatePropertyArray @ 0x140511A1C (PiSwValidatePropertyArray.c)
 *     PiSwUpdateArrayProperties @ 0x140543E10 (PiSwUpdateArrayProperties.c)
 *     PiSwInterfaceFree @ 0x1406457FC (PiSwInterfaceFree.c)
 */

__int64 __fastcall PiSwIrpInterfaceRegister(PIRP Irp)
{
  struct _IO_STACK_LOCATION *CurrentStackLocation; // r15
  __int64 FsContext2; // rsi
  char v4; // r12
  struct _IRP *MasterIrp; // rcx
  NTSTATUS updated; // edi
  __int64 v7; // r8
  int v8; // r9d
  __int64 v9; // rcx
  __int64 v10; // rcx
  __int64 *InterfaceEntry; // rax
  __int64 **v12; // rdx
  __int64 *v13; // rax
  __int64 v14; // rdx
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v17; // r8
  __int64 v18; // rdx
  __int64 v19; // r8
  __int64 v20; // r9
  NTSTRSAFE_PCWSTR v21; // rsi
  __int64 v22; // rax
  __int64 *v24; // rsi
  __int64 v25; // rcx
  __int64 **v26; // rax
  __int64 v27; // rdx
  __int64 v28; // r8
  __int64 v29; // r9
  __int64 *v30; // [rsp+30h] [rbp-68h] BYREF
  NTSTRSAFE_PCWSTR pszSrc; // [rsp+38h] [rbp-60h] BYREF
  _QWORD v32[11]; // [rsp+40h] [rbp-58h] BYREF
  int v33; // [rsp+B0h] [rbp+18h] BYREF
  PVOID P; // [rsp+B8h] [rbp+20h] BYREF

  CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
  v32[1] = CurrentStackLocation;
  FsContext2 = (__int64)CurrentStackLocation->FileObject->FsContext2;
  v32[2] = FsContext2;
  v32[0] = 0LL;
  P = 0LL;
  v30 = 0LL;
  pszSrc = 0LL;
  v33 = 0;
  v4 = 0;
  MasterIrp = Irp->AssociatedIrp.MasterIrp;
  if ( !MasterIrp )
  {
    updated = -1073741811;
    goto LABEL_46;
  }
  updated = MesDecodeBufferHandleCreate(MasterIrp, CurrentStackLocation->Parameters.Create.Options, v32);
  if ( updated < 0 )
    goto LABEL_29;
  NdrMesTypeDecode3(v32[0], "TP 3\a", &off_1406E9BE0, &off_1402F32B0, 2, &P);
  if ( !P || !*(_QWORD *)P || (v7 = *((_QWORD *)P + 3)) == 0 && *((_DWORD *)P + 4) || !*((_DWORD *)P + 4) && v7 )
  {
    updated = -1073741811;
    goto LABEL_29;
  }
  updated = PiSwValidatePropertyArray(*((_QWORD *)P + 3));
  if ( updated < 0 )
    goto LABEL_29;
  PiSwLock();
  if ( !FsContext2
    || (v9 = *(_QWORD *)(FsContext2 + 80)) == 0
    || *(_QWORD *)(FsContext2 + 88)
    || (*(_DWORD *)(FsContext2 + 64) & 8) != 0 )
  {
    updated = -1073741637;
  }
  else
  {
    LOBYTE(v8) = 1;
    updated = IopRegisterDeviceInterface(v9, *(_QWORD *)P, *((_QWORD *)P + 1), v8, (__int64)&pszSrc, (__int64)&v33);
    if ( updated >= 0 )
    {
      v10 = *(_QWORD *)(FsContext2 + 120);
      if ( v10 )
        *(_DWORD *)(v10 + 48) |= v33;
      InterfaceEntry = PiSwDeviceFindInterfaceEntry(FsContext2, pszSrc);
      v30 = InterfaceEntry;
      if ( InterfaceEntry )
      {
        updated = PiSwUpdateArrayProperties(
                    InterfaceEntry[3],
                    *((unsigned int *)InterfaceEntry + 8),
                    *((_QWORD *)P + 3),
                    *((unsigned int *)P + 4));
LABEL_19:
        ExReleaseResourceLite(&PiSwLockObj);
        KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread(), v14, v15, v16);
        if ( updated < 0 )
          goto LABEL_46;
        v17 = *((_QWORD *)P + 3);
        if ( v17 )
          updated = PiSwPropertySet(v30[2], 3LL, v17, *((unsigned int *)P + 4));
        if ( updated < 0 )
          goto LABEL_46;
        PiSwLock();
        updated = PiSwDeviceInterfaceSetState(FsContext2, (__int64)v30, *((_BYTE *)P + 32));
        goto LABEL_24;
      }
      updated = PiSwInterfaceCreate(pszSrc, *((_QWORD *)P + 3), *((_DWORD *)P + 4), &v30);
      if ( updated >= 0 )
      {
        v4 = 1;
        v12 = *(__int64 ***)(FsContext2 + 192);
        if ( *v12 != (__int64 *)(FsContext2 + 184) )
          __fastfail(3u);
        v13 = v30;
        *v30 = FsContext2 + 184;
        v13[1] = (__int64)v12;
        *v12 = v13;
        *(_QWORD *)(FsContext2 + 192) = v13;
        goto LABEL_19;
      }
    }
  }
LABEL_24:
  ExReleaseResourceLite(&PiSwLockObj);
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread(), v18, v19, v20);
  if ( updated >= 0 )
  {
    v21 = pszSrc;
    updated = RtlStringCbCopyW(
                (NTSTRSAFE_PWSTR)Irp->AssociatedIrp.MasterIrp,
                CurrentStackLocation->Parameters.Read.Length,
                pszSrc);
    if ( updated >= 0 )
    {
      v22 = -1LL;
      do
        ++v22;
      while ( v21[v22] );
      Irp->IoStatus.Information = 2 * v22 + 2;
    }
LABEL_29:
    if ( updated >= 0 )
      goto LABEL_30;
  }
LABEL_46:
  v24 = v30;
  if ( v30 && v4 )
  {
    PiSwLock();
    v25 = *v24;
    v26 = (__int64 **)v24[1];
    if ( *(__int64 **)(*v24 + 8) != v24 || *v26 != v24 )
      __fastfail(3u);
    *v26 = (__int64 *)v25;
    *(_QWORD *)(v25 + 8) = v26;
    ExReleaseResourceLite(&PiSwLockObj);
    KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread(), v27, v28, v29);
    PiSwInterfaceFree(v30);
  }
LABEL_30:
  if ( P )
    ExFreePoolWithTag(P, 0x6370726Bu);
  if ( pszSrc )
    ExFreePoolWithTag((PVOID)pszSrc, 0);
  if ( v32[0] )
    MesHandleFree();
  Irp->IoStatus.Status = updated;
  IofCompleteRequest(Irp, 0);
  return (unsigned int)updated;
}
