/*
 * XREFs of ?CreateDevice@FxDevice@@QEAAJPEAUWDFDEVICE_INIT@@@Z @ 0x1C001FB1C
 * Callers:
 *     ?ControlDeviceInitialize@FxDevice@@QEAAJPEAUWDFDEVICE_INIT@@@Z @ 0x1C00200D0 (-ControlDeviceInitialize@FxDevice@@QEAAJPEAUWDFDEVICE_INIT@@@Z.c)
 *     ?PdoInitialize@FxDevice@@QEAAJPEAUWDFDEVICE_INIT@@@Z @ 0x1C0020120 (-PdoInitialize@FxDevice@@QEAAJPEAUWDFDEVICE_INIT@@@Z.c)
 *     ?FdoInitialize@FxDevice@@QEAAJPEAUWDFDEVICE_INIT@@@Z @ 0x1C0020320 (-FdoInitialize@FxDevice@@QEAAJPEAUWDFDEVICE_INIT@@@Z.c)
 * Callees:
 *     ?Initialize@FxPkgGeneral@@QEAAJPEAUWDFDEVICE_INIT@@@Z @ 0x1C00209E4 (-Initialize@FxPkgGeneral@@QEAAJPEAUWDFDEVICE_INIT@@@Z.c)
 *     WPP_IFR_SF_q @ 0x1C0022210 (WPP_IFR_SF_q.c)
 *     WdmlibIoCreateDeviceSecure @ 0x1C00D63F4 (WdmlibIoCreateDeviceSecure.c)
 */

NTSTATUS __fastcall FxDevice::CreateDevice(FxDevice *this, WDFDEVICE_INIT *DeviceInit)
{
  NTSTATUS result; // eax
  __int64 DeviceType; // rbx
  unsigned __int8 DeviceClassSet; // cl
  unsigned int DeviceCharacteristics; // edi
  NTSTATUS v8; // eax
  NTSTATUS v9; // r14d
  _DEVICE_OBJECT *v10; // rbx
  _DEVICE_OBJECT *v11; // rdi
  unsigned __int16 m_ObjectSize; // ax
  char *v13; // rax
  _DEVICE_OBJECT *v14; // rax
  _WDF_DEVICE_IO_TYPE ReadWriteIoType; // ecx
  FxString *DeviceName; // rax
  _UNICODE_STRING *p_m_UnicodeString; // r10
  FxString *Sddl; // rax
  const _UNICODE_STRING *v19; // r8
  _DEVICE_OBJECT *pNewDeviceObject; // [rsp+70h] [rbp+8h] BYREF

  result = FxPkgGeneral::Initialize(this->m_PkgGeneral, DeviceInit);
  if ( result < 0 )
    return result;
  DeviceType = DeviceInit->DeviceType;
  if ( (unsigned int)DeviceType < 0x3C )
    this->m_DefaultPriorityBoost = FxDevice::m_PriorityBoosts[DeviceType];
  DeviceClassSet = DeviceInit->Security.DeviceClassSet;
  DeviceCharacteristics = DeviceInit->Characteristics;
  if ( DeviceClassSet || DeviceInit->Security.Sddl )
    goto LABEL_18;
  if ( !DeviceInit->DeviceName && (DeviceCharacteristics & 0x80u) == 0 )
    goto LABEL_8;
  if ( DeviceInit->InitType != FxDeviceInitTypePdo )
  {
LABEL_18:
    DeviceName = DeviceInit->DeviceName;
    p_m_UnicodeString = &DeviceName->m_UnicodeString;
    if ( !DeviceName )
      p_m_UnicodeString = 0LL;
    Sddl = DeviceInit->Security.Sddl;
    v19 = &Sddl->m_UnicodeString;
    if ( !Sddl )
      v19 = &SDDL_DEVOBJ_SYS_ALL_ADM_ALL;
    v8 = WdmlibIoCreateDeviceSecure(
           this->m_Driver->m_DriverObject.m_DriverObject,
           DeviceClassSet != 0 ? (_DWORD)DeviceInit + 184 : 0,
           p_m_UnicodeString,
           DeviceType,
           DeviceCharacteristics,
           this->m_Exclusive,
           v19,
           (const _GUID *)((unsigned __int64)&DeviceInit->Security.DeviceClass & -(__int64)(DeviceClassSet != 0)),
           &pNewDeviceObject);
    goto LABEL_9;
  }
  WPP_IFR_SF_q(DeviceInit->DriverGlobals, 3u, 0x12u, 0xDu, WPP_FxDeviceInit_cpp_Traceguids, DeviceInit->Driver);
LABEL_8:
  v8 = IoCreateDevice(
         this->m_Driver->m_DriverObject.m_DriverObject,
         0x28u,
         0LL,
         DeviceType,
         DeviceCharacteristics,
         this->m_Exclusive,
         &pNewDeviceObject);
LABEL_9:
  v9 = v8;
  if ( v8 >= 0 )
  {
    v10 = pNewDeviceObject;
    v11 = pNewDeviceObject + 1;
    IoInitializeRemoveLockEx((PIO_REMOVE_LOCK)&pNewDeviceObject[1], this->m_Globals->Tag, 0, 0, 0x20u);
    LODWORD(v11->CurrentIrp) = DeviceInit->RemoveLockOptionFlags | this->m_Globals->RemoveLockOptionFlags;
    m_ObjectSize = this->m_ObjectSize;
    v13 = m_ObjectSize ? (char *)this + m_ObjectSize : 0LL;
    v10->DeviceExtension = v13 + 48;
    v14 = pNewDeviceObject;
    this->m_DeviceObject.m_DeviceObject = pNewDeviceObject;
    if ( !this->m_Filter )
    {
      ReadWriteIoType = DeviceInit->ReadWriteIoType;
      if ( ReadWriteIoType == WdfDeviceIoBuffered )
      {
        v14->Flags |= 4u;
      }
      else if ( ReadWriteIoType == WdfDeviceIoDirect )
      {
        v14->Flags |= 0x10u;
      }
      this->m_ReadWriteIoType = DeviceInit->ReadWriteIoType;
      this->m_PowerPageableCapable = DeviceInit->PowerPageable;
    }
  }
  return v9;
}
