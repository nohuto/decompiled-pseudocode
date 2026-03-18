/*
 * XREFs of WmipSendWmiIrpToTraceDeviceList @ 0x1405333A4
 * Callers:
 *     WmiTraceRundownNotify @ 0x1405332B4 (WmiTraceRundownNotify.c)
 *     WmiSetNetworkNotify @ 0x1406E146C (WmiSetNetworkNotify.c)
 * Callees:
 *     IoFreeIrp @ 0x14004BC70 (IoFreeIrp.c)
 *     KeReleaseMutex @ 0x14004BE50 (KeReleaseMutex.c)
 *     KeWaitForSingleObject @ 0x14004F100 (KeWaitForSingleObject.c)
 *     IoAllocateIrp @ 0x1400CF78C (IoAllocateIrp.c)
 *     IoInitializeIrp @ 0x14011A644 (IoInitializeIrp.c)
 *     WmipForwardWmiIrp @ 0x1404D215C (WmipForwardWmiIrp.c)
 */

__int64 __fastcall WmipSendWmiIrpToTraceDeviceList(__int64 a1, unsigned int a2, UCHAR a3, unsigned int a4, __int64 a5)
{
  __int64 v6; // rbp
  unsigned int v8; // ebx
  CCHAR v9; // si
  PIRP Irp; // rdi

  v6 = a2;
  v8 = 0;
  KeWaitForSingleObject(&WmipSMMutex, Executive, 0, 0, 0LL);
  v9 = WmipServiceDeviceObject->StackSize + 1;
  KeReleaseMutex(&WmipSMMutex, 0);
  Irp = IoAllocateIrp(v9, 0);
  if ( Irp )
  {
    if ( (_DWORD)v6 )
    {
      do
      {
        IoInitializeIrp(Irp, 72 * v9 + 208, v9);
        --Irp->Tail.Overlay.CurrentStackLocation;
        --Irp->CurrentLocation;
        Irp->Tail.Overlay.CurrentStackLocation->DeviceObject = WmipServiceDeviceObject;
        Irp->Tail.Overlay.Thread = KeGetCurrentThread();
        WmipForwardWmiIrp(Irp, a3, *(_DWORD *)(*(_QWORD *)a1 + 56LL), 0LL, a4, a5);
        a1 += 16LL;
        --v6;
      }
      while ( v6 );
      v8 = 0;
    }
    IoFreeIrp(Irp);
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return v8;
}
