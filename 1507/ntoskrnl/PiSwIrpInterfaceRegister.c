/*
 * XREFs of PiSwIrpInterfaceRegister @ 0x14045A410
 * Callers:
 *     PiSwDispatch @ 0x14045A7DC (PiSwDispatch.c)
 * Callees:
 *     IofCompleteRequest @ 0x140048F70 (IofCompleteRequest.c)
 *     ExAcquireResourceExclusiveLite @ 0x1400C8A30 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x1400C92D0 (ExReleaseResourceLite.c)
 *     RtlStringCbCopyW @ 0x1400CF240 (RtlStringCbCopyW.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     PiSwDeviceFindInterfaceEntry @ 0x14045A154 (PiSwDeviceFindInterfaceEntry.c)
 *     PiSwDeviceInterfaceSetState @ 0x14045A1AC (PiSwDeviceInterfaceSetState.c)
 *     PiSwInterfaceCreate @ 0x14045A278 (PiSwInterfaceCreate.c)
 *     PiSwPropertySet @ 0x1404D7440 (PiSwPropertySet.c)
 *     PiSwValidatePropertyArray @ 0x1404D8F80 (PiSwValidatePropertyArray.c)
 *     IopRegisterDeviceInterface @ 0x1404DED78 (IopRegisterDeviceInterface.c)
 *     PiSwInterfaceFree @ 0x140691080 (PiSwInterfaceFree.c)
 */

__int64 __fastcall PiSwIrpInterfaceRegister(PIRP Irp)
{
  struct _IO_STACK_LOCATION *CurrentStackLocation; // r13
  __int64 FsContext2; // rsi
  struct _IRP *MasterIrp; // rcx
  NTSTATUS v5; // edi
  __int64 v6; // r8
  struct _KTHREAD *CurrentThread; // rax
  int v8; // r9d
  __int64 v9; // rcx
  __int64 v10; // rcx
  __int64 **v11; // rdx
  __int64 *v12; // rax
  struct _KTHREAD *v13; // rcx
  __int16 v14; // ax
  __int64 v15; // r8
  struct _KTHREAD *v16; // rax
  struct _KTHREAD *v17; // rcx
  __int16 v18; // ax
  NTSTRSAFE_PCWSTR v19; // rsi
  __int64 v20; // rax
  struct _KTHREAD *v22; // rax
  __int64 v23; // rdx
  __int64 **v24; // rcx
  struct _KTHREAD *v25; // rcx
  __int16 v26; // ax
  NTSTRSAFE_PCWSTR pszSrc; // [rsp+30h] [rbp-58h] BYREF
  _QWORD v28[10]; // [rsp+38h] [rbp-50h] BYREF
  int v29; // [rsp+98h] [rbp+10h] BYREF
  __int64 *InterfaceEntry; // [rsp+A0h] [rbp+18h] BYREF
  PVOID P; // [rsp+A8h] [rbp+20h] BYREF

  CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
  v28[1] = CurrentStackLocation;
  FsContext2 = (__int64)CurrentStackLocation->FileObject->FsContext2;
  v28[2] = FsContext2;
  v28[0] = 0LL;
  P = 0LL;
  InterfaceEntry = 0LL;
  pszSrc = 0LL;
  v29 = 0;
  MasterIrp = Irp->AssociatedIrp.MasterIrp;
  if ( !MasterIrp )
  {
    v5 = -1073741811;
    goto LABEL_54;
  }
  v5 = MesDecodeBufferHandleCreate(MasterIrp, CurrentStackLocation->Parameters.Create.Options, v28);
  if ( v5 < 0 )
    goto LABEL_33;
  NdrMesTypeDecode3(v28[0], "TP 3\a", &off_140721CA8, &off_14031E910, 2, &P);
  if ( !P || !*(_QWORD *)P || (v6 = *((_QWORD *)P + 3)) == 0 && *((_DWORD *)P + 4) || !*((_DWORD *)P + 4) && v6 )
  {
    v5 = -1073741811;
    goto LABEL_33;
  }
  v5 = PiSwValidatePropertyArray(*((_QWORD *)P + 3));
  if ( v5 < 0 )
    goto LABEL_33;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquireResourceExclusiveLite(&PiSwLockObj, 1u);
  if ( !FsContext2
    || (v9 = *(_QWORD *)(FsContext2 + 80)) == 0
    || *(_QWORD *)(FsContext2 + 88)
    || (*(_DWORD *)(FsContext2 + 64) & 8) != 0 )
  {
    v5 = -1073741637;
  }
  else
  {
    LOBYTE(v8) = 1;
    v5 = IopRegisterDeviceInterface(v9, *(_QWORD *)P, *((_QWORD *)P + 1), v8, (__int64)&pszSrc, (__int64)&v29);
    if ( v5 >= 0 )
    {
      v10 = *(_QWORD *)(FsContext2 + 120);
      if ( v10 )
        *(_DWORD *)(v10 + 48) |= v29;
      InterfaceEntry = PiSwDeviceFindInterfaceEntry(FsContext2, pszSrc);
      if ( InterfaceEntry )
      {
        InterfaceEntry = 0LL;
        v5 = -1073741635;
LABEL_19:
        ExReleaseResourceLite(&PiSwLockObj);
        v13 = KeGetCurrentThread();
        v14 = v13->KernelApcDisable + 1;
        v13->KernelApcDisable = v14;
        if ( !v14
          && ($CD287064E7C9F7953DE243E927CFCB99 *)v13->ApcState.ApcListHead[0].Flink != &v13->152
          && !v13->SpecialApcDisable )
        {
          KiCheckForKernelApcDelivery();
        }
        if ( v5 < 0 )
          goto LABEL_54;
        v15 = *((_QWORD *)P + 3);
        if ( v15 )
          v5 = PiSwPropertySet(InterfaceEntry[2], 3LL, v15, *((unsigned int *)P + 4));
        if ( v5 < 0 )
          goto LABEL_54;
        v16 = KeGetCurrentThread();
        --v16->KernelApcDisable;
        ExAcquireResourceExclusiveLite(&PiSwLockObj, 1u);
        v5 = PiSwDeviceInterfaceSetState(FsContext2, (__int64)InterfaceEntry, *((_BYTE *)P + 32));
        goto LABEL_26;
      }
      v5 = PiSwInterfaceCreate(pszSrc, *((_QWORD *)P + 3), *((_DWORD *)P + 4), (__int64)&InterfaceEntry);
      if ( v5 >= 0 )
      {
        v11 = *(__int64 ***)(FsContext2 + 192);
        v12 = InterfaceEntry;
        *InterfaceEntry = FsContext2 + 184;
        v12[1] = (__int64)v11;
        if ( *v11 != (__int64 *)(FsContext2 + 184) )
          __fastfail(3u);
        *v11 = v12;
        *(_QWORD *)(FsContext2 + 192) = v12;
        goto LABEL_19;
      }
    }
  }
LABEL_26:
  ExReleaseResourceLite(&PiSwLockObj);
  v17 = KeGetCurrentThread();
  v18 = v17->KernelApcDisable + 1;
  v17->KernelApcDisable = v18;
  if ( !v18
    && ($CD287064E7C9F7953DE243E927CFCB99 *)v17->ApcState.ApcListHead[0].Flink != &v17->152
    && !v17->SpecialApcDisable )
  {
    KiCheckForKernelApcDelivery();
  }
  if ( v5 >= 0 )
  {
    v19 = pszSrc;
    v5 = RtlStringCbCopyW(
           (NTSTRSAFE_PWSTR)Irp->AssociatedIrp.MasterIrp,
           CurrentStackLocation->Parameters.Read.Length,
           pszSrc);
    if ( v5 >= 0 )
    {
      v20 = -1LL;
      do
        ++v20;
      while ( v19[v20] );
      Irp->IoStatus.Information = 2 * v20 + 2;
    }
LABEL_33:
    if ( v5 >= 0 )
      goto LABEL_34;
  }
LABEL_54:
  if ( InterfaceEntry )
  {
    v22 = KeGetCurrentThread();
    --v22->KernelApcDisable;
    ExAcquireResourceExclusiveLite(&PiSwLockObj, 1u);
    v23 = *InterfaceEntry;
    v24 = (__int64 **)InterfaceEntry[1];
    if ( *(__int64 **)(*InterfaceEntry + 8) != InterfaceEntry || *v24 != InterfaceEntry )
      __fastfail(3u);
    *v24 = (__int64 *)v23;
    *(_QWORD *)(v23 + 8) = v24;
    ExReleaseResourceLite(&PiSwLockObj);
    v25 = KeGetCurrentThread();
    v26 = v25->KernelApcDisable + 1;
    v25->KernelApcDisable = v26;
    if ( !v26
      && ($CD287064E7C9F7953DE243E927CFCB99 *)v25->ApcState.ApcListHead[0].Flink != &v25->152
      && !v25->SpecialApcDisable )
    {
      KiCheckForKernelApcDelivery();
    }
    PiSwInterfaceFree(InterfaceEntry);
  }
LABEL_34:
  if ( P )
    ExFreePoolWithTag(P, 0x6370726Bu);
  if ( pszSrc )
    ExFreePoolWithTag((PVOID)pszSrc, 0);
  if ( v28[0] )
    MesHandleFree();
  Irp->IoStatus.Status = v5;
  IofCompleteRequest(Irp, 0);
  return (unsigned int)v5;
}
