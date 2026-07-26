/*
 * XREFs of ?ndisSetupDeviceRemove@@YAJPEAUNDIS_SETUP_DEVICE_EXTENSION@@PEAU_IRP@@@Z @ 0x1C00E2A90
 * Callers:
 *     ?ndisSetupDevicePnp@@YAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@@Z @ 0x1C00E29E0 (-ndisSetupDevicePnp@@YAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@@Z.c)
 * Callees:
 *     ??1NDIS_SETUP_DEVICE_EXTENSION@@QEAA@XZ @ 0x1C00E2828 (--1NDIS_SETUP_DEVICE_EXTENSION@@QEAA@XZ.c)
 */

__int64 __fastcall ndisSetupDeviceRemove(NDIS_SETUP_DEVICE_EXTENSION *this, PIRP Irp)
{
  struct _IO_REMOVE_LOCK *p_RemoveLock; // rbx
  unsigned int v5; // ebx

  p_RemoveLock = &this->RemoveLock;
  IoAcquireRemoveLockEx(&this->RemoveLock, Irp, &byte_1C00B4D10, 1u, 0x20u);
  IoReleaseRemoveLockAndWaitEx(p_RemoveLock, Irp, 0x20u);
  KeCancelTimer(&this->IdleTimer);
  KeFlushQueuedDpcs();
  if ( this->IsDeviceInterfaceActive )
  {
    IoSetDeviceInterfaceState(&this->SymbolicName, 0);
    this->IsDeviceInterfaceActive = 0;
  }
  ++Irp->CurrentLocation;
  ++Irp->Tail.Overlay.CurrentStackLocation;
  v5 = IofCallDriver(this->NextDeviceObject, Irp);
  NDIS_SETUP_DEVICE_EXTENSION::~NDIS_SETUP_DEVICE_EXTENSION(this);
  return v5;
}
