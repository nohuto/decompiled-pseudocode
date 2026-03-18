/*
 * XREFs of PiSwIrpInterfaceRegister @ 0x1404C648C
 * Callers:
 *     PiSwDispatch @ 0x140489CB0 (PiSwDispatch.c)
 * Callees:
 *     IofCompleteRequest @ 0x140053560 (IofCompleteRequest.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x140055FA0 (KiLeaveCriticalRegionUnsafe.c)
 *     ExReleaseResourceLite @ 0x140068940 (ExReleaseResourceLite.c)
 *     RtlStringCbCopyW @ 0x1400C47BC (RtlStringCbCopyW.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     PiSwLock @ 0x1403F1A74 (PiSwLock.c)
 *     IopRegisterDeviceInterface @ 0x14048756C (IopRegisterDeviceInterface.c)
 *     PiSwPropertySet @ 0x140487AA0 (PiSwPropertySet.c)
 *     PiSwValidatePropertyArray @ 0x1404892A8 (PiSwValidatePropertyArray.c)
 *     PiSwDeviceInterfaceSetState @ 0x1404C67BC (PiSwDeviceInterfaceSetState.c)
 *     PiSwInterfaceCreate @ 0x1404C6888 (PiSwInterfaceCreate.c)
 *     PiSwDeviceFindInterfaceEntry @ 0x1404C7740 (PiSwDeviceFindInterfaceEntry.c)
 *     PiSwUpdateArrayProperties @ 0x1405438D0 (PiSwUpdateArrayProperties.c)
 *     PiSwInterfaceFree @ 0x140645718 (PiSwInterfaceFree.c)
 */

__int64 __fastcall PiSwIrpInterfaceRegister(PIRP Irp)
{
  struct _IO_STACK_LOCATION *CurrentStackLocation; // r15
  char *FsContext2; // rsi
  char v4; // r12
  struct _IRP *MasterIrp; // rcx
  NTSTATUS updated; // edi
  __int64 v7; // r8
  unsigned int v8; // edx
  const wchar_t *v9; // rcx
  __int64 v10; // rcx
  __int64 InterfaceEntry; // rax
  PVOID *v12; // rdx
  __int64 v13; // rdx
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 v16; // r8
  __int64 v17; // r8
  __int64 v18; // rdx
  __int64 v19; // r8
  __int64 v20; // r9
  NTSTRSAFE_PCWSTR v21; // rsi
  __int64 v22; // rax
  __int64 v24; // rcx
  _QWORD *v25; // rax
  __int64 v26; // rdx
  __int64 v27; // r8
  __int64 v28; // r9
  _QWORD *v29; // [rsp+30h] [rbp-68h]
  NTSTRSAFE_PCWSTR pszSrc; // [rsp+38h] [rbp-60h] BYREF
  _QWORD v31[11]; // [rsp+40h] [rbp-58h] BYREF
  int v32; // [rsp+B0h] [rbp+18h] BYREF
  PVOID P; // [rsp+B8h] [rbp+20h] BYREF

  CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
  v31[1] = CurrentStackLocation;
  FsContext2 = (char *)CurrentStackLocation->FileObject->FsContext2;
  v31[2] = FsContext2;
  v31[0] = 0LL;
  P = 0LL;
  v29 = 0LL;
  pszSrc = 0LL;
  v32 = 0;
  v4 = 0;
  MasterIrp = Irp->AssociatedIrp.MasterIrp;
  if ( !MasterIrp )
  {
    updated = -1073741811;
    goto LABEL_46;
  }
  updated = MesDecodeBufferHandleCreate(MasterIrp, CurrentStackLocation->Parameters.Create.Options, v31);
  if ( updated < 0 )
    goto LABEL_29;
  NdrMesTypeDecode3(v31[0], "TP 3\a", &off_1406E9AB0, &off_1402F32B0, 2, &P);
  if ( !P
    || !*(_QWORD *)P
    || (v7 = *((_QWORD *)P + 3)) == 0 && *((_DWORD *)P + 4)
    || (v8 = *((_DWORD *)P + 4)) == 0 && v7 )
  {
    updated = -1073741811;
    goto LABEL_29;
  }
  updated = PiSwValidatePropertyArray(*((_QWORD *)P + 3), v8);
  if ( updated < 0 )
    goto LABEL_29;
  PiSwLock();
  if ( !FsContext2
    || (v9 = (const wchar_t *)*((_QWORD *)FsContext2 + 10)) == 0LL
    || *((_QWORD *)FsContext2 + 11)
    || (*((_DWORD *)FsContext2 + 16) & 8) != 0 )
  {
    updated = -1073741637;
  }
  else
  {
    updated = IopRegisterDeviceInterface(v9, *(_QWORD *)P, *((const wchar_t **)P + 1), 1, (PVOID *)&pszSrc, &v32);
    if ( updated >= 0 )
    {
      v10 = *((_QWORD *)FsContext2 + 15);
      if ( v10 )
        *(_DWORD *)(v10 + 48) |= v32;
      InterfaceEntry = PiSwDeviceFindInterfaceEntry(FsContext2, pszSrc);
      v29 = (_QWORD *)InterfaceEntry;
      if ( InterfaceEntry )
      {
        updated = PiSwUpdateArrayProperties(
                    *(_QWORD *)(InterfaceEntry + 24),
                    *(unsigned int *)(InterfaceEntry + 32),
                    *((_QWORD *)P + 3),
                    *((unsigned int *)P + 4));
LABEL_19:
        ExReleaseResourceLite(&PiSwLockObj);
        KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread(), v13, v14, v15);
        if ( updated < 0 )
          goto LABEL_46;
        v16 = *((_QWORD *)P + 3);
        if ( v16 )
          updated = PiSwPropertySet(v29[2], 3u, v16, *((_DWORD *)P + 4));
        if ( updated < 0 )
          goto LABEL_46;
        PiSwLock();
        LOBYTE(v17) = *((_BYTE *)P + 32);
        updated = PiSwDeviceInterfaceSetState(FsContext2, v29, v17);
        goto LABEL_24;
      }
      updated = PiSwInterfaceCreate(pszSrc);
      if ( updated >= 0 )
      {
        v4 = 1;
        v12 = (PVOID *)*((_QWORD *)FsContext2 + 24);
        if ( *v12 != FsContext2 + 184 )
          __fastfail(3u);
        MEMORY[0] = FsContext2 + 184;
        MEMORY[8] = v12;
        *v12 = 0LL;
        *((_QWORD *)FsContext2 + 24) = 0LL;
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
  if ( v29 && v4 )
  {
    PiSwLock();
    v24 = *v29;
    v25 = (_QWORD *)v29[1];
    if ( *(_QWORD **)(*v29 + 8LL) != v29 || (_QWORD *)*v25 != v29 )
      __fastfail(3u);
    *v25 = v24;
    *(_QWORD *)(v24 + 8) = v25;
    ExReleaseResourceLite(&PiSwLockObj);
    KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread(), v26, v27, v28);
    PiSwInterfaceFree(v29);
  }
LABEL_30:
  if ( P )
    ExFreePoolWithTag(P, 0x6370726Bu);
  if ( pszSrc )
    ExFreePoolWithTag((PVOID)pszSrc, 0);
  if ( v31[0] )
    MesHandleFree();
  Irp->IoStatus.Status = updated;
  IofCompleteRequest(Irp, 0);
  return (unsigned int)updated;
}
