/*
 * XREFs of IopRaiseHardError @ 0x14062212C
 * Callers:
 *     IopApcHardError @ 0x140620ED0 (IopApcHardError.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14002D7E0 (RtlInitUnicodeString.c)
 *     IofCompleteRequest @ 0x1400530E0 (IofCompleteRequest.c)
 *     ExAllocatePoolWithTagPriority @ 0x14007E290 (ExAllocatePoolWithTagPriority.c)
 *     KiStackAttachProcess @ 0x1400CB090 (KiStackAttachProcess.c)
 *     KiUnstackDetachProcess @ 0x1400CC6C0 (KiUnstackDetachProcess.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 *     ObQueryNameStringMode @ 0x140433A60 (ObQueryNameStringMode.c)
 *     ExRaiseHardError @ 0x1406B61A0 (ExRaiseHardError.c)
 */

void __fastcall IopRaiseHardError(PIRP Irp, __int64 a2, char *a3)
{
  char v6; // r15
  UNICODE_STRING *PoolWithTagPriority; // rax
  UNICODE_STRING *v8; // rdi
  NTSTATUS v9; // r14d
  _KPROCESS *Process; // rcx
  NTSTATUS Status; // r10d
  unsigned int v12; // r11d
  __int64 v13; // r8
  int v14; // esi
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rax
  int v16; // [rsp+30h] [rbp-49h] BYREF
  unsigned int NumberOfBytes; // [rsp+34h] [rbp-45h] BYREF
  UNICODE_STRING NumberOfBytes_4; // [rsp+38h] [rbp-41h] BYREF
  _BYTE v19[48]; // [rsp+48h] [rbp-31h] BYREF
  UNICODE_STRING *p_NumberOfBytes_4; // [rsp+78h] [rbp-1h] BYREF
  struct _LIST_ENTRY *Blink; // [rsp+80h] [rbp+7h]
  struct _LIST_ENTRY *v22; // [rsp+88h] [rbp+Fh]

  NumberOfBytes = 0;
  v6 = 0;
  ObQueryNameStringMode(a3, 0LL, 0, &NumberOfBytes, 0);
  if ( ViVerifierDriverAddedThunkListHead )
    PoolWithTagPriority = (UNICODE_STRING *)ExAllocatePoolWithTagPriority(
                                              PagedPool,
                                              NumberOfBytes,
                                              0x20206F49u,
                                              (EX_POOL_PRIORITY)((MmVerifierData & 0x10 | 0x40u) >> 1));
  else
    PoolWithTagPriority = (UNICODE_STRING *)ExAllocatePoolWithTag(PagedPool, NumberOfBytes, 0x20206F49u);
  v8 = PoolWithTagPriority;
  if ( !PoolWithTagPriority )
  {
    v9 = -1073741670;
LABEL_38:
    Irp->IoStatus.Status = v9;
LABEL_39:
    Irp->IoStatus.Information = 0LL;
    goto LABEL_40;
  }
  v9 = ObQueryNameStringMode(a3, (__int64)PoolWithTagPriority, NumberOfBytes, &v16, 0);
  if ( v9 < 0 )
  {
    ExFreePoolWithTag(v8, 0);
    goto LABEL_38;
  }
  if ( a2 && (*(_BYTE *)(a2 + 4) & 1) != 0 )
  {
    NumberOfBytes_4.MaximumLength = 64;
    NumberOfBytes_4.Buffer = (wchar_t *)(a2 + 32);
    NumberOfBytes_4.Length = *(_WORD *)(a2 + 6);
  }
  else
  {
    RtlInitUnicodeString(&NumberOfBytes_4, 0LL);
  }
  Process = Irp->Tail.Overlay.Thread->Process;
  if ( Process != KeGetCurrentThread()->ApcState.Process )
  {
    KiStackAttachProcess(Process, 0, (__int64)v19);
    v6 = 1;
  }
  Status = Irp->IoStatus.Status;
  if ( Status != -1073741806 )
  {
    if ( Status <= -1073741806 )
    {
LABEL_20:
      v12 = 0;
      v13 = 0LL;
      goto LABEL_22;
    }
    if ( Status <= -1073741804 )
    {
LABEL_19:
      v12 = 2;
      v22 = 0LL;
      p_NumberOfBytes_4 = v8;
      v13 = 1LL;
      Blink = KeGetCurrentThread()->ApcState.Process[1].Header.WaitListHead.Blink;
      goto LABEL_22;
    }
    if ( Status != -1073741662 )
    {
      if ( Status == -1073741661 || Status == -1073741643 )
        goto LABEL_19;
      goto LABEL_20;
    }
  }
  Blink = (struct _LIST_ENTRY *)v8;
  p_NumberOfBytes_4 = &NumberOfBytes_4;
  v12 = 3;
  v13 = 3LL;
  v22 = KeGetCurrentThread()->ApcState.Process[1].Header.WaitListHead.Blink;
LABEL_22:
  if ( ExReadyForErrors )
  {
    v14 = ExRaiseHardError((unsigned int)Status, v12, v13, &p_NumberOfBytes_4, 8, &v16);
  }
  else
  {
    v16 = 0;
    v14 = -1073741823;
  }
  if ( v6 )
    KiUnstackDetachProcess((struct _KTHREAD *)v19, 0);
  ExFreePoolWithTag(v8, 0);
  if ( v14 >= 0 && v16 == 9 )
  {
    ((void (__fastcall *)(PDEVICE_OBJECT, PIRP))Irp->Tail.Overlay.CurrentStackLocation->DeviceObject->DriverObject->MajorFunction[Irp->Tail.Overlay.CurrentStackLocation->MajorFunction])(
      Irp->Tail.Overlay.CurrentStackLocation->DeviceObject,
      Irp);
    return;
  }
  if ( v16 == 3 )
  {
    CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
    if ( CurrentStackLocation->MajorFunction == 13 && CurrentStackLocation->MinorFunction == 1 )
      Irp->IoStatus.Information = 1LL;
    else
      Irp->IoStatus.Status = -1073741248;
  }
  if ( (Irp->Flags & 0x40) != 0 )
    goto LABEL_39;
LABEL_40:
  IofCompleteRequest(Irp, 1);
}
