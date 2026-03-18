/*
 * XREFs of RawReadWriteDeviceControl @ 0x1403E9AF8
 * Callers:
 *     RawDispatch @ 0x1403E98F8 (RawDispatch.c)
 * Callees:
 *     RawBeginOperation @ 0x140006B5C (RawBeginOperation.c)
 *     RawEndOperation @ 0x140007250 (RawEndOperation.c)
 *     RawInitiateDeleteVolume @ 0x1400072F8 (RawInitiateDeleteVolume.c)
 *     KeReleaseGuardedMutex @ 0x14000CA40 (KeReleaseGuardedMutex.c)
 *     ExAcquireFastMutex @ 0x14002D0A0 (ExAcquireFastMutex.c)
 *     IofCallDriver @ 0x14002E060 (IofCallDriver.c)
 *     IofCompleteRequest @ 0x140053560 (IofCompleteRequest.c)
 */

NTSTATUS __fastcall RawReadWriteDeviceControl(PFSRTL_ADVANCED_FCB_HEADER AdvancedHeader, PIRP Irp, __int64 a3)
{
  NTSTATUS v6; // ebx
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rax
  struct _IO_STACK_LOCATION *v8; // rax

  v6 = 0;
  if ( RawBeginOperation((__int64)AdvancedHeader, *(_QWORD *)(a3 + 48)) )
  {
    if ( (unsigned __int8)(*(_BYTE *)a3 - 3) > 1u || *(_DWORD *)(a3 + 8) )
    {
      CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
      *(_OWORD *)&CurrentStackLocation[-1].MajorFunction = *(_OWORD *)a3;
      *(_OWORD *)&CurrentStackLocation[-1].Parameters.NotifyDirectoryEx.CompletionFilter = *(_OWORD *)(a3 + 16);
      *(_OWORD *)(&CurrentStackLocation[-1].Parameters.SetQuota + 6) = *(_OWORD *)(a3 + 32);
      *(_OWORD *)&CurrentStackLocation[-1].FileObject = *(_OWORD *)(a3 + 48);
      CurrentStackLocation[-1].Context = *(PVOID *)(a3 + 64);
      CurrentStackLocation[-1].Flags |= 2u;
      v8 = Irp->Tail.Overlay.CurrentStackLocation;
      v8[-1].CompletionRoutine = (PIO_COMPLETION_ROUTINE)RawCompletionRoutine;
      v8[-1].Context = AdvancedHeader;
      v8[-1].Control = -32;
      return IofCallDriver((PDEVICE_OBJECT)AdvancedHeader[1].PushLock.Value, Irp);
    }
    RawEndOperation((__int64)AdvancedHeader, *(_QWORD *)(a3 + 48));
  }
  else
  {
    if ( *(_BYTE *)a3 == 27 )
    {
      ExAcquireFastMutex((PFAST_MUTEX)&AdvancedHeader[2].PagingIoResource);
      --LODWORD(AdvancedHeader[1].Resource);
      if ( *(_DWORD *)&AdvancedHeader[1].Flags || !RawInitiateDeleteVolume(AdvancedHeader, 0, 0) )
        KeReleaseGuardedMutex((PKGUARDED_MUTEX)&AdvancedHeader[2].PagingIoResource);
    }
    v6 = -1073741202;
  }
  Irp->IoStatus.Status = v6;
  IofCompleteRequest(Irp, 1);
  return v6;
}
