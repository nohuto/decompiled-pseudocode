/*
 * XREFs of ?OpenSettingsKey@FxDevice@@QEAAJPEAPEAXK@Z @ 0x1C000E714
 * Callers:
 *     ?ReadRegistryS0Idle@FxPkgPnp@@AEAAXPEBU_UNICODE_STRING@@PEAE@Z @ 0x1C0018FBC (-ReadRegistryS0Idle@FxPkgPnp@@AEAAXPEBU_UNICODE_STRING@@PEAE@Z.c)
 *     ?SaveState@FxPkgPnp@@IEAAXE@Z @ 0x1C0019FDC (-SaveState@FxPkgPnp@@IEAAXE@Z.c)
 *     ?PnpCheckAndIncrementRestartCount@FxPkgPnp@@AEAAEXZ @ 0x1C00A2ED8 (-PnpCheckAndIncrementRestartCount@FxPkgPnp@@AEAAEXZ.c)
 * Callees:
 *     ??1FxAutoRegKey@@QEAA@XZ @ 0x1C002B078 (--1FxAutoRegKey@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1C0030D80 (__security_check_cookie.c)
 */

__int64 __fastcall FxDevice::OpenSettingsKey(FxDevice *this, void **Key, ACCESS_MASK DesiredAccess)
{
  _DEVICE_OBJECT *m_DeviceObject; // rcx
  NTSTATUS v6; // ebx
  FxAutoRegKey parent; // [rsp+40h] [rbp-19h] BYREF
  _UNICODE_STRING wdf; // [rsp+48h] [rbp-11h] BYREF
  _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+58h] [rbp-1h] BYREF
  wchar_t wdf_buffer[4]; // [rsp+88h] [rbp+2Fh] BYREF

  parent.m_Key = 0LL;
  if ( this->m_PdoKnown && (m_DeviceObject = this->m_PhysicalDevice.FxDeviceBase::m_DeviceObject) != 0LL )
  {
    v6 = IoOpenDeviceRegistryKey(m_DeviceObject, 1u, DesiredAccess, &parent.m_Key);
    if ( v6 >= 0 )
    {
      wcscpy(wdf_buffer, L"WDF");
      *(_DWORD *)&wdf.Length = 524294;
      wdf.Buffer = wdf_buffer;
      ObjectAttributes.RootDirectory = parent.m_Key;
      ObjectAttributes.ObjectName = &wdf;
      ObjectAttributes.Length = 48;
      ObjectAttributes.Attributes = 576;
      *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
      v6 = ZwCreateKey(Key, DesiredAccess, &ObjectAttributes, 0, 0LL, 0, 0LL);
    }
  }
  else
  {
    v6 = -1073741436;
  }
  FxAutoRegKey::~FxAutoRegKey(&parent);
  return (unsigned int)v6;
}
