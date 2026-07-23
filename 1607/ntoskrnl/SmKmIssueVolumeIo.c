/*
 * XREFs of SmKmIssueVolumeIo @ 0x140220978
 * Callers:
 *     SmKmIssueIo @ 0x140220894 (SmKmIssueIo.c)
 * Callees:
 *     IofCallDriver @ 0x14002DBE0 (IofCallDriver.c)
 *     MmMdlPageContentsState @ 0x1400A43BC (MmMdlPageContentsState.c)
 *     IoAllocateIrp @ 0x1400C3FBC (IoAllocateIrp.c)
 *     MmBuildMdlForNonPagedPool @ 0x1400FA930 (MmBuildMdlForNonPagedPool.c)
 */

__int64 __fastcall SmKmIssueVolumeIo(__int64 a1, __int64 a2, LARGE_INTEGER *a3, IO_COMPLETION_ROUTINE *a4, void *a5)
{
  struct _DEVICE_OBJECT *v5; // rbp
  IRP *Irp; // rbx
  struct _MDL *v12; // rsi
  __int64 v13; // rdx
  __int64 v14; // r8
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rcx
  struct _IO_STACK_LOCATION *v16; // r8

  v5 = *(struct _DEVICE_OBJECT **)(a1 + 24);
  if ( (*(_QWORD *)a2 & 1) != 0 )
  {
    v12 = *(struct _MDL **)(a2 + 8);
    Irp = (IRP *)(*(_QWORD *)a2 & 0xFFFFFFFFFFFFFFFEuLL);
  }
  else
  {
    Irp = IoAllocateIrp(v5->StackSize, 0);
    if ( !Irp )
      return 3221225626LL;
    v12 = *(struct _MDL **)a2;
    v13 = *(_QWORD *)(a2 + 8);
    v14 = *(unsigned int *)(a2 + 16);
    v12->Next = 0LL;
    v12->MdlFlags = 0;
    v12->ByteCount = v14;
    v12->StartVa = (PVOID)(v13 & 0xFFFFFFFFFFFFF000uLL);
    v12->Size = 8 * ((((unsigned __int64)(v13 & 0xFFF) + v14 + 4095) >> 12) + 6);
    v12->ByteOffset = v13 & 0xFFF;
    MmBuildMdlForNonPagedPool(v12);
    MmMdlPageContentsState((__int64)v12, 1u);
  }
  Irp->MdlAddress = v12;
  CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
  Irp->Tail.Overlay.Thread = KeGetCurrentThread();
  Irp->UserIosb = &Irp->IoStatus;
  Irp->RequestorMode = 0;
  Irp->Tail.Overlay.OriginalFileObject = *(PFILE_OBJECT *)(a1 + 8);
  if ( (*(_DWORD *)(a2 + 32) & 1) != 0 )
    CurrentStackLocation[-1].MajorFunction = 3;
  else
    CurrentStackLocation[-1].MajorFunction = 4;
  CurrentStackLocation[-1].Parameters.Read.ByteOffset = *a3;
  CurrentStackLocation[-1].Parameters.Read.Length = *(_DWORD *)(a2 + 16);
  CurrentStackLocation[-1].Parameters.Create.Options = 1397572723;
  v16 = Irp->Tail.Overlay.CurrentStackLocation;
  v16[-1].CompletionRoutine = a4;
  v16[-1].Context = a5;
  v16[-1].Control = -32;
  IofCallDriver(v5, Irp);
  return 259LL;
}
