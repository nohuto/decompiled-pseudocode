/*
 * XREFs of ?CreateDevice@FxDevice@@QEAAJPEAUWDFDEVICE_INIT@@@Z @ 0x1C000E460
 * Callers:
 *     ?ControlDeviceInitialize@FxDevice@@QEAAJPEAUWDFDEVICE_INIT@@@Z @ 0x1C000E96C (-ControlDeviceInitialize@FxDevice@@QEAAJPEAUWDFDEVICE_INIT@@@Z.c)
 *     ?PdoInitialize@FxDevice@@QEAAJPEAUWDFDEVICE_INIT@@@Z @ 0x1C000E9B8 (-PdoInitialize@FxDevice@@QEAAJPEAUWDFDEVICE_INIT@@@Z.c)
 *     ?FdoInitialize@FxDevice@@QEAAJPEAUWDFDEVICE_INIT@@@Z @ 0x1C000EBA4 (-FdoInitialize@FxDevice@@QEAAJPEAUWDFDEVICE_INIT@@@Z.c)
 * Callees:
 *     ?ShouldCreateSecure@WDFDEVICE_INIT@@QEAAEXZ @ 0x1C000F3D0 (-ShouldCreateSecure@WDFDEVICE_INIT@@QEAAEXZ.c)
 *     ?Initialize@FxPkgGeneral@@QEAAJPEAUWDFDEVICE_INIT@@@Z @ 0x1C000F6BC (-Initialize@FxPkgGeneral@@QEAAJPEAUWDFDEVICE_INIT@@@Z.c)
 *     WdmlibIoCreateDeviceSecure @ 0x1C00D3D44 (WdmlibIoCreateDeviceSecure.c)
 */

NTSTATUS __fastcall FxDevice::CreateDevice(FxDevice *this, WDFDEVICE_INIT *DeviceInit)
{
  NTSTATUS result; // eax
  __int64 DeviceType; // rbx
  unsigned int DeviceCharacteristics; // edi
  NTSTATUS v7; // eax
  NTSTATUS v8; // r14d
  _DEVICE_OBJECT *v9; // rbx
  _DEVICE_OBJECT *v10; // rdi
  unsigned __int16 m_ObjectSize; // ax
  char *v12; // rax
  _DEVICE_OBJECT *v13; // rax
  _WDF_DEVICE_IO_TYPE ReadWriteIoType; // ecx
  FxString *DeviceName; // rax
  _UNICODE_STRING *p_m_UnicodeString; // r10
  _GUID *p_DeviceClass; // r8
  FxString *Sddl; // rax
  const _UNICODE_STRING *v19; // rdx
  _DEVICE_OBJECT *pNewDeviceObject; // [rsp+70h] [rbp+8h] BYREF

  result = FxPkgGeneral::Initialize(this->m_PkgGeneral, DeviceInit);
  if ( result >= 0 )
  {
    DeviceType = DeviceInit->DeviceType;
    if ( (unsigned int)DeviceType < 0x3C )
      this->m_DefaultPriorityBoost = FxDevice::m_PriorityBoosts[DeviceType];
    DeviceCharacteristics = DeviceInit->Characteristics;
    if ( WDFDEVICE_INIT::ShouldCreateSecure(DeviceInit) )
    {
      DeviceName = DeviceInit->DeviceName;
      p_m_UnicodeString = &DeviceName->m_UnicodeString;
      if ( !DeviceName )
        p_m_UnicodeString = 0LL;
      p_DeviceClass = &DeviceInit->Security.DeviceClass;
      if ( !DeviceInit->Security.DeviceClassSet )
        p_DeviceClass = 0LL;
      Sddl = DeviceInit->Security.Sddl;
      v19 = &Sddl->m_UnicodeString;
      if ( !Sddl )
        v19 = &SDDL_DEVOBJ_SYS_ALL_ADM_ALL;
      v7 = WdmlibIoCreateDeviceSecure(
             this->m_Driver->m_DriverObject.m_DriverObject,
             (unsigned int)v19,
             p_m_UnicodeString,
             DeviceType,
             DeviceCharacteristics,
             this->m_Exclusive,
             v19,
             p_DeviceClass,
             &pNewDeviceObject);
    }
    else
    {
      v7 = IoCreateDevice(
             this->m_Driver->m_DriverObject.m_DriverObject,
             0x28u,
             0LL,
             DeviceType,
             DeviceCharacteristics,
             this->m_Exclusive,
             &pNewDeviceObject);
    }
    v8 = v7;
    if ( v7 >= 0 )
    {
      v9 = pNewDeviceObject;
      v10 = pNewDeviceObject + 1;
      IoInitializeRemoveLockEx((PIO_REMOVE_LOCK)&pNewDeviceObject[1], this->m_Globals->Tag, 0, 0, 0x20u);
      LODWORD(v10->CurrentIrp) = DeviceInit->RemoveLockOptionFlags | this->m_Globals->RemoveLockOptionFlags;
      m_ObjectSize = this->m_ObjectSize;
      v12 = m_ObjectSize ? (char *)this + m_ObjectSize : 0LL;
      v9->DeviceExtension = v12 + 48;
      v13 = pNewDeviceObject;
      this->m_DeviceObject.m_DeviceObject = pNewDeviceObject;
      if ( !this->m_Filter )
      {
        ReadWriteIoType = DeviceInit->ReadWriteIoType;
        if ( ReadWriteIoType == WdfDeviceIoBuffered )
        {
          v13->Flags |= 4u;
        }
        else if ( ReadWriteIoType == WdfDeviceIoDirect )
        {
          v13->Flags |= 0x10u;
        }
        this->m_ReadWriteIoType = DeviceInit->ReadWriteIoType;
        this->m_PowerPageableCapable = DeviceInit->PowerPageable;
      }
    }
    return v8;
  }
  return result;
}
