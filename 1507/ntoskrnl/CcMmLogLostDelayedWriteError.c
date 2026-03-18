/*
 * XREFs of CcMmLogLostDelayedWriteError @ 0x1401DD19C
 * Callers:
 *     CcWriteBehindInternal @ 0x1400414C0 (CcWriteBehindInternal.c)
 *     MiLdwPopupWorker @ 0x1406A2F40 (MiLdwPopupWorker.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     IoQueryFileDosDeviceName @ 0x140549C1C (IoQueryFileDosDeviceName.c)
 *     FsRtlLogCcFlushError @ 0x14066C660 (FsRtlLogCcFlushError.c)
 */

bool __fastcall CcMmLogLostDelayedWriteError(struct _FILE_OBJECT *a1, NTSTATUS a2)
{
  ULONG Flags; // esi
  NTSTATUS FileDosDeviceName; // eax
  UNICODE_STRING *p_FileName; // rcx
  PVPB Vpb; // rax
  struct _DEVICE_OBJECT *DeviceObject; // rdx
  NTSTATUS v9; // edi
  PVOID P; // [rsp+40h] [rbp+8h] BYREF

  P = 0LL;
  Flags = 1;
  FileDosDeviceName = IoQueryFileDosDeviceName(a1, (POBJECT_NAME_INFORMATION *)&P);
  p_FileName = (UNICODE_STRING *)P;
  if ( FileDosDeviceName )
    p_FileName = &a1->FileName;
  if ( p_FileName->Length && p_FileName->MaximumLength && p_FileName->Buffer )
    Flags = 0;
  Vpb = a1->Vpb;
  if ( Vpb )
    DeviceObject = Vpb->DeviceObject;
  else
    DeviceObject = a1->DeviceObject;
  v9 = FsRtlLogCcFlushError(p_FileName, DeviceObject, a1->SectionObjectPointer, a2, Flags);
  if ( P )
    ExFreePoolWithTag(P, 0);
  return v9 == 0;
}
