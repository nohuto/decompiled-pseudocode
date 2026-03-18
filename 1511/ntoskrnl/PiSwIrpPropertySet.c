/*
 * XREFs of PiSwIrpPropertySet @ 0x1404F9230
 * Callers:
 *     PiSwDispatch @ 0x140494568 (PiSwDispatch.c)
 * Callees:
 *     ExReleaseResourceLite @ 0x14003FBB0 (ExReleaseResourceLite.c)
 *     IofCompleteRequest @ 0x140084CE0 (IofCompleteRequest.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x140088F60 (KiLeaveCriticalRegionUnsafe.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 *     PnpAllocatePWSTR @ 0x14043FAE0 (PnpAllocatePWSTR.c)
 *     PiSwLock @ 0x140494B8C (PiSwLock.c)
 *     PiSwValidatePropertyArray @ 0x1404E59E8 (PiSwValidatePropertyArray.c)
 *     PiSwPropertySet @ 0x1404E5C20 (PiSwPropertySet.c)
 *     PiSwUpdateArrayProperties @ 0x1404F93FC (PiSwUpdateArrayProperties.c)
 */

__int64 __fastcall PiSwIrpPropertySet(PIRP Irp)
{
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rcx
  unsigned int *FsContext2; // rdi
  NTSTATUS updated; // ebx
  const wchar_t *v5; // rcx
  PVOID v7; // [rsp+68h] [rbp+10h] BYREF
  PVOID P; // [rsp+70h] [rbp+18h] BYREF
  __int64 v9; // [rsp+78h] [rbp+20h] BYREF

  CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
  FsContext2 = (unsigned int *)CurrentStackLocation->FileObject->FsContext2;
  v9 = 0LL;
  v7 = 0LL;
  P = 0LL;
  if ( !Irp->AssociatedIrp.MasterIrp )
    goto LABEL_22;
  updated = MesDecodeBufferHandleCreate(
              Irp->AssociatedIrp.MasterIrp,
              CurrentStackLocation->Parameters.Create.Options,
              &v9);
  if ( updated < 0 )
    goto LABEL_14;
  NdrMesTypeDecode3(v9, "TP 3\a", &off_1406A1A68, &off_1402CF8B0, 1, &v7);
  if ( v7 && *((_QWORD *)v7 + 1) && *(_DWORD *)v7 )
  {
    updated = PiSwValidatePropertyArray(*((_QWORD *)v7 + 1), *(_DWORD *)v7);
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
                      *((_QWORD *)v7 + 1),
                      *(unsigned int *)v7);
      }
      else
      {
        updated = -1073741637;
      }
      ExReleaseResourceLite(&PiSwLockObj);
      KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
      if ( updated >= 0 )
        updated = PiSwPropertySet((__int64)P, 1u, *((_QWORD *)v7 + 1), *(_DWORD *)v7);
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
  if ( v7 )
    ExFreePoolWithTag(v7, 0x6370726Bu);
  if ( v9 )
    MesHandleFree();
  Irp->IoStatus.Status = updated;
  IofCompleteRequest(Irp, 0);
  return (unsigned int)updated;
}
