/*
 * XREFs of PiSwIrpPropertySet @ 0x14056A754
 * Callers:
 *     PiSwDispatch @ 0x14045A7DC (PiSwDispatch.c)
 * Callees:
 *     IofCompleteRequest @ 0x140048F70 (IofCompleteRequest.c)
 *     ExAcquireResourceExclusiveLite @ 0x1400C8A30 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x1400C92D0 (ExReleaseResourceLite.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     PnpAllocatePWSTR @ 0x14043B32C (PnpAllocatePWSTR.c)
 *     PiSwPropertySet @ 0x1404D7440 (PiSwPropertySet.c)
 *     PiSwValidatePropertyArray @ 0x1404D8F80 (PiSwValidatePropertyArray.c)
 *     PiSwUpdateArrayProperties @ 0x14056A96C (PiSwUpdateArrayProperties.c)
 */

__int64 __fastcall PiSwIrpPropertySet(PIRP Irp)
{
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rcx
  unsigned int *FsContext2; // rsi
  NTSTATUS updated; // edi
  struct _KTHREAD *CurrentThread; // rax
  const wchar_t *v6; // rcx
  struct _KTHREAD *v7; // rcx
  __int16 v8; // ax
  PVOID v10; // [rsp+78h] [rbp+10h] BYREF
  PVOID P; // [rsp+80h] [rbp+18h] BYREF
  __int64 v12; // [rsp+88h] [rbp+20h] BYREF

  CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
  FsContext2 = (unsigned int *)CurrentStackLocation->FileObject->FsContext2;
  v12 = 0LL;
  v10 = 0LL;
  P = 0LL;
  if ( !Irp->AssociatedIrp.MasterIrp )
    goto LABEL_26;
  updated = MesDecodeBufferHandleCreate(
              Irp->AssociatedIrp.MasterIrp,
              CurrentStackLocation->Parameters.Create.Options,
              &v12);
  if ( updated < 0 )
    goto LABEL_16;
  NdrMesTypeDecode3(v12, "TP 3\a", &off_140721CA8, &off_14031E910, 1, &v10);
  if ( v10 && *((_QWORD *)v10 + 1) && *(_DWORD *)v10 )
  {
    updated = PiSwValidatePropertyArray(*((_QWORD *)v10 + 1), *(_DWORD *)v10);
    if ( updated >= 0 )
    {
      CurrentThread = KeGetCurrentThread();
      --CurrentThread->KernelApcDisable;
      ExAcquireResourceExclusiveLite(&PiSwLockObj, 1u);
      if ( FsContext2 && (v6 = (const wchar_t *)*((_QWORD *)FsContext2 + 10)) != 0LL && !*((_QWORD *)FsContext2 + 11) )
      {
        updated = PnpAllocatePWSTR(v6, 0xC8uLL, 0x57706E50u, &P);
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
      v7 = KeGetCurrentThread();
      v8 = v7->KernelApcDisable + 1;
      v7->KernelApcDisable = v8;
      if ( !v8
        && ($CD287064E7C9F7953DE243E927CFCB99 *)v7->ApcState.ApcListHead[0].Flink != &v7->152
        && !v7->SpecialApcDisable )
      {
        KiCheckForKernelApcDelivery();
      }
      if ( updated >= 0 )
        updated = PiSwPropertySet((__int64)P, 1u, *((_QWORD *)v10 + 1), *(_DWORD *)v10);
    }
  }
  else
  {
LABEL_26:
    updated = -1073741811;
  }
LABEL_16:
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
