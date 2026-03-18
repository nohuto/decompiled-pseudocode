/*
 * XREFs of WmipSendWmiIrpToTraceDeviceList @ 0x140509C08
 * Callers:
 *     WmiTraceRundownNotify @ 0x140509B18 (WmiTraceRundownNotify.c)
 *     WmiSetNetworkNotify @ 0x14065EBC4 (WmiSetNetworkNotify.c)
 * Callees:
 *     IoAllocateIrp @ 0x14001AF44 (IoAllocateIrp.c)
 *     KeWaitForSingleObject @ 0x140081870 (KeWaitForSingleObject.c)
 *     IoFreeIrp @ 0x140087080 (IoFreeIrp.c)
 *     KeReleaseMutex @ 0x140087240 (KeReleaseMutex.c)
 *     IoInitializeIrp @ 0x1400DE470 (IoInitializeIrp.c)
 *     WmipForwardWmiIrp @ 0x1403D34E8 (WmipForwardWmiIrp.c)
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
