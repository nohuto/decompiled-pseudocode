/*
 * XREFs of ??1NDIS_SETUP_DEVICE_EXTENSION@@QEAA@XZ @ 0x1C00E2828
 * Callers:
 *     ?ndisSetupDeviceAdd@@YAJPEAU_DRIVER_OBJECT@@PEAU_DEVICE_OBJECT@@@Z @ 0x1C00E28CC (-ndisSetupDeviceAdd@@YAJPEAU_DRIVER_OBJECT@@PEAU_DEVICE_OBJECT@@@Z.c)
 *     ?ndisSetupDeviceRemove@@YAJPEAUNDIS_SETUP_DEVICE_EXTENSION@@PEAU_IRP@@@Z @ 0x1C00E2A90 (-ndisSetupDeviceRemove@@YAJPEAUNDIS_SETUP_DEVICE_EXTENSION@@PEAU_IRP@@@Z.c)
 * Callees:
 *     ??0KLockThisExclusive@@QEAA@AEAVKPushLockBase@@@Z @ 0x1C009B148 (--0KLockThisExclusive@@QEAA@AEAVKPushLockBase@@@Z.c)
 *     ??1KLockHolder@@QEAA@XZ @ 0x1C00A6C60 (--1KLockHolder@@QEAA@XZ.c)
 */

void __fastcall NDIS_SETUP_DEVICE_EXTENSION::~NDIS_SETUP_DEVICE_EXTENSION(NDIS_SETUP_DEVICE_EXTENSION *this)
{
  struct NDIS_SETUP_DEVICE_EXTENSION **p_Next; // rcx
  NDIS_SETUP_DEVICE_EXTENSION *v3; // rax
  _DEVICE_OBJECT *NextDeviceObject; // rcx
  _DEVICE_OBJECT *Fdo; // rcx
  KLockHolder v6; // [rsp+20h] [rbp-28h] BYREF

  KLockThisExclusive::KLockThisExclusive((KLockThisExclusive *)&v6, &ndisSetupDeviceListLock);
  p_Next = &ndisSetupDeviceList;
  if ( ndisSetupDeviceList )
  {
    while ( 1 )
    {
      v3 = *p_Next;
      if ( *p_Next == this )
        break;
      p_Next = &v3->Next;
      if ( !v3->Next )
        goto LABEL_6;
    }
    *p_Next = this->Next;
    this->Next = 0LL;
  }
LABEL_6:
  KLockHolder::~KLockHolder(&v6);
  if ( this->SymbolicName.Buffer )
  {
    RtlFreeUnicodeString(&this->SymbolicName);
    this->SymbolicName.Buffer = 0LL;
  }
  NextDeviceObject = this->NextDeviceObject;
  if ( NextDeviceObject )
  {
    IoDetachDevice(NextDeviceObject);
    this->NextDeviceObject = 0LL;
  }
  Fdo = this->Fdo;
  if ( Fdo )
  {
    IoDeleteDevice(Fdo);
    this->Fdo = 0LL;
  }
  this->Header.Size = 0;
}
