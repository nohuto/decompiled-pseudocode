/*
 * XREFs of PiSwIrpPropertySet @ 0x140543C44
 * Callers:
 *     PiSwDispatch @ 0x140489090 (PiSwDispatch.c)
 * Callees:
 *     IofCompleteRequest @ 0x1400530E0 (IofCompleteRequest.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x140055B20 (KiLeaveCriticalRegionUnsafe.c)
 *     ExReleaseResourceLite @ 0x1400684C0 (ExReleaseResourceLite.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     PiSwLock @ 0x1403F0938 (PiSwLock.c)
 *     PnpAllocatePWSTR @ 0x1404E4D00 (PnpAllocatePWSTR.c)
 *     PiSwPropertySet @ 0x140510214 (PiSwPropertySet.c)
 *     PiSwValidatePropertyArray @ 0x140511A1C (PiSwValidatePropertyArray.c)
 *     PiSwUpdateArrayProperties @ 0x140543E10 (PiSwUpdateArrayProperties.c)
 */

__int64 __fastcall PiSwIrpPropertySet(PIRP Irp)
{
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rcx
  unsigned int *FsContext2; // rdi
  NTSTATUS updated; // ebx
  const wchar_t *v5; // rcx
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // r9
  PVOID v10; // [rsp+68h] [rbp+10h] BYREF
  PVOID P; // [rsp+70h] [rbp+18h] BYREF
  __int64 v12; // [rsp+78h] [rbp+20h] BYREF

  CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
  FsContext2 = (unsigned int *)CurrentStackLocation->FileObject->FsContext2;
  v12 = 0LL;
  v10 = 0LL;
  P = 0LL;
  if ( !Irp->AssociatedIrp.MasterIrp )
    goto LABEL_22;
  updated = MesDecodeBufferHandleCreate(
              Irp->AssociatedIrp.MasterIrp,
              CurrentStackLocation->Parameters.Create.Options,
              &v12);
  if ( updated < 0 )
    goto LABEL_14;
  NdrMesTypeDecode3(v12, "TP 3\a", &off_1406E9BE0, &off_1402F32B0, 1, &v10);
  if ( v10 && *((_QWORD *)v10 + 1) && *(_DWORD *)v10 )
  {
    updated = PiSwValidatePropertyArray(*((_QWORD *)v10 + 1), *(_DWORD *)v10);
    if ( updated >= 0 )
    {
      PiSwLock();
      if ( FsContext2 && (v5 = (const wchar_t *)*((_QWORD *)FsContext2 + 10)) != 0LL && !*((_QWORD *)FsContext2 + 11) )
      {
        updated = PnpAllocatePWSTR(v5, 0xC8uLL, 0x57706E50u, &P);
        if ( updated >= 0 )
          updated = PiSwUpdateArrayProperties(
                      *((_QWORD *)FsContext2 + 21),
                      FsContext2[44],
                      *((_QWORD *)v10 + 1),
                      *(unsigned int *)v10);
      }
      else
      {
        updated = -1073741637;
      }
      ExReleaseResourceLite(&PiSwLockObj);
      KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread(), v6, v7, v8);
      if ( updated >= 0 )
        updated = PiSwPropertySet((__int64)P, 1u, *((_QWORD *)v10 + 1), *(_DWORD *)v10);
    }
  }
  else
  {
LABEL_22:
    updated = -1073741811;
  }
LABEL_14:
  if ( P )
    ExFreePoolWithTag(P, 0x57706E50u);
  if ( v10 )
    ExFreePoolWithTag(v10, 0x6370726Bu);
  if ( v12 )
    MesHandleFree();
  Irp->IoStatus.Status = updated;
  IofCompleteRequest(Irp, 0);
  return (unsigned int)updated;
}
