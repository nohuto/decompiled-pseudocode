/*
 * XREFs of UsbhFdoSystemControl @ 0x1C0024780
 * Callers:
 *     <none>
 * Callees:
 *     Log @ 0x1C00159D0 (Log.c)
 *     FdoExt @ 0x1C0015EE0 (FdoExt.c)
 *     UsbhFdoChainIrp @ 0x1C00292F8 (UsbhFdoChainIrp.c)
 *     UsbhTrapFatal_Dbg @ 0x1C0029420 (UsbhTrapFatal_Dbg.c)
 */

__int64 __fastcall UsbhFdoSystemControl(PDEVICE_OBJECT DeviceObject, PIRP Irp, __int64 a3, __int64 a4)
{
  char *DeviceExtension; // rbx
  __int64 v7; // rcx
  NTSTATUS v8; // eax
  unsigned int v9; // ebp
  NTSTATUS v10; // eax
  __int64 v11; // rcx
  void *v12; // r9
  __int64 v13; // rdx
  __int64 v14; // rdx
  __int64 v15; // r8
  __int64 v16; // r9
  PDEVICE_OBJECT *v18; // rax
  enum _SYSCTL_IRP_DISPOSITION IrpDisposition; // [rsp+70h] [rbp+18h] BYREF

  if ( !DeviceObject )
    UsbhTrapFatal_Dbg(0LL, 0LL, a3, a4);
  DeviceExtension = (char *)DeviceObject->DeviceExtension;
  if ( !DeviceExtension )
    UsbhTrapFatal_Dbg(DeviceObject, 0LL, a3, a4);
  if ( *(_DWORD *)DeviceExtension != 541218120 )
    UsbhTrapFatal_Dbg(DeviceObject, DeviceObject->DeviceExtension, a3, a4);
  if ( (UsbhLogMask & 8) != 0 )
  {
    v7 = *((_QWORD *)DeviceExtension + 111)
       + 32LL
       * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)DeviceExtension + 220) & *((_DWORD *)DeviceExtension
                                                                                                  + 221));
    *(_DWORD *)v7 = 1229805382;
    *(_QWORD *)(v7 + 8) = 0LL;
    *(_QWORD *)(v7 + 16) = 0LL;
    *(_QWORD *)(v7 + 24) = Irp;
  }
  v8 = IoAcquireRemoveLockEx((PIO_REMOVE_LOCK)(DeviceExtension + 1224), Irp, &File, 1u, 0x20u);
  v9 = v8;
  if ( (v8 & 0xC0000000) == 0xC0000000 )
  {
    Irp->IoStatus.Status = v8;
    Log((__int64)DeviceObject, 16, 561474921, v8, (__int64)Irp);
LABEL_11:
    IofCompleteRequest(Irp, 0);
    return v9;
  }
  v10 = WmiSystemControl((PWMILIB_CONTEXT)(DeviceExtension + 2872), DeviceObject, Irp, &IrpDisposition);
  v11 = IrpDisposition;
  v9 = v10;
  if ( (UsbhLogMask & 8) != 0 )
  {
    v12 = DeviceObject->DeviceExtension;
    if ( v12 )
    {
      v13 = *((_QWORD *)v12 + 111)
          + 32LL * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)v12 + 220) & *((_DWORD *)v12 + 221));
      *(_DWORD *)v13 = 1768781638;
      *(_QWORD *)(v13 + 8) = 0LL;
      *(_QWORD *)(v13 + 16) = v11;
      *(_QWORD *)(v13 + 24) = v10;
    }
  }
  IoReleaseRemoveLockEx((PIO_REMOVE_LOCK)(DeviceExtension + 1224), Irp, 0x20u);
  if ( IrpDisposition == IrpNotCompleted )
    goto LABEL_11;
  if ( IrpDisposition )
  {
    if ( (unsigned int)(IrpDisposition - 2) > 1 )
    {
      return (unsigned int)UsbhFdoChainIrp(DeviceObject, Irp);
    }
    else
    {
      v18 = (PDEVICE_OBJECT *)FdoExt((__int64)DeviceObject, v14, v15, v16);
      ++Irp->CurrentLocation;
      ++Irp->Tail.Overlay.CurrentStackLocation;
      return (unsigned int)IofCallDriver(v18[151], Irp);
    }
  }
  return v9;
}
