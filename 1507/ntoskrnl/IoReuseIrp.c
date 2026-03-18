/*
 * XREFs of IoReuseIrp @ 0x14010B380
 * Callers:
 *     PopAllocateIrp @ 0x140137024 (PopAllocateIrp.c)
 *     PopPrepareIoctl @ 0x1405C41B0 (PopPrepareIoctl.c)
 *     SmKmFileInfoCleanup @ 0x1406DC94C (SmKmFileInfoCleanup.c)
 *     VerifierIoReuseIrp @ 0x140742038 (VerifierIoReuseIrp.c)
 * Callees:
 *     EtwEventEnabled @ 0x1400EA070 (EtwEventEnabled.c)
 *     EtwWriteTransfer @ 0x1400EFF50 (EtwWriteTransfer.c)
 *     EtwActivityIdControl @ 0x14011B7E4 (EtwActivityIdControl.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     memset @ 0x140195A80 (memset.c)
 *     IoSetActivityIdIrp @ 0x1401F669C (IoSetActivityIdIrp.c)
 *     IovpLogStackTrace @ 0x140735B40 (IovpLogStackTrace.c)
 *     VfIoInitializeIrp @ 0x1407414D0 (VfIoInitializeIrp.c)
 */

void __stdcall IoReuseIrp(PIRP Irp, NTSTATUS Iostatus)
{
  char v2; // r12
  CHAR StackCount; // bp
  UCHAR v6; // si
  USHORT Size; // r15
  __int64 v8; // rax
  signed __int8 AllocationFlags; // r8
  __int64 v10; // rdx
  const GUID *v11; // r13
  USHORT v12; // di
  __int64 v13; // rcx
  REGHANDLE v14; // rdi
  __int128 v15; // [rsp+30h] [rbp-58h] BYREF
  GUID ActivityId; // [rsp+40h] [rbp-48h] BYREF
  void *retaddr; // [rsp+88h] [rbp+0h]

  v15 = 0uLL;
  v2 = 0;
  if ( (MmVerifierData & 0x10) != 0 )
  {
    VfIoInitializeIrp(Irp, retaddr, 1);
    IovpLogStackTrace(Irp);
  }
  StackCount = Irp->StackCount;
  v6 = Irp->AllocationFlags & 0x2D;
  Size = Irp->Size;
  v8 = *((_QWORD *)&Irp->Tail.CompletionKey + 10);
  AllocationFlags = Irp->AllocationFlags;
  if ( AllocationFlags >= 0 && v8 && (*(_BYTE *)(v8 + 2) & 1) != 0 )
  {
    v2 = 1;
    v15 = *(_OWORD *)(*((_QWORD *)&Irp->Tail.CompletionKey + 10) + 16LL);
  }
  v10 = *((_QWORD *)&Irp->Tail.CompletionKey + 10);
  if ( AllocationFlags < 0 )
  {
    *((_QWORD *)&Irp->Tail.CompletionKey + 10) = 0LL;
    Irp->AllocationFlags = AllocationFlags & 0x7F;
  }
  else if ( v10 )
  {
    if ( (Irp->AllocationFlags & 0x80u) == 0 && (*(_BYTE *)(v10 + 2) & 0x20) != 0 )
      *(_QWORD *)(v10 + 32) = 0LL;
    *(_WORD *)(v10 + 2) = 0;
  }
  v11 = (const GUID *)*((_QWORD *)&Irp->Tail.CompletionKey + 10);
  v12 = *(&Irp->Size + 1);
  memset(Irp, 0, Size);
  Irp->Size = Size;
  Irp->Type = 6;
  Irp->CurrentLocation = StackCount + 1;
  Irp->StackCount = StackCount;
  Irp->ApcEnvironment = KeGetCurrentThread()->ApcStateIndex;
  Irp->ThreadListEntry.Blink = &Irp->ThreadListEntry;
  Irp->ThreadListEntry.Flink = &Irp->ThreadListEntry;
  *(&Irp->Size + 1) = v12;
  Irp->AllocationFlags = v6;
  Irp->IoStatus.Status = Iostatus;
  Irp->Tail.Overlay.CurrentStackLocation = (struct _IO_STACK_LOCATION *)((char *)&Irp[1] + 72 * StackCount);
  if ( v11 )
  {
    *((_QWORD *)&Irp->Tail.CompletionKey + 10) = v11;
    if ( v2 == 1 )
      IoSetActivityIdIrp(Irp, &v15);
    if ( (IopIrpExtensionStatus & 1) != 0 && (IopFunctionPointerMask & 4) != 0 )
    {
      v13 = *((_QWORD *)&Irp->Tail.CompletionKey + 10);
      if ( (Irp->AllocationFlags & 0x80u) != 0
        || !v13
        || (*(_BYTE *)(v13 + 2) & 1) == 0
        || IoTraceHandle && EtwEventEnabled(IoTraceHandle, &IoTrace_KernelIo_ReuseIrp) )
      {
        EtwActivityIdControl(3u, &ActivityId);
        v14 = IoTraceHandle;
        if ( IoTraceHandle )
        {
          if ( EtwEventEnabled(IoTraceHandle, &IoTrace_KernelIo_ReuseIrp) )
            EtwWriteTransfer(v14, &IoTrace_KernelIo_ReuseIrp, v11 + 1, &ActivityId, 0, 0LL);
        }
        IoSetActivityIdIrp(Irp, &ActivityId);
      }
    }
  }
}
