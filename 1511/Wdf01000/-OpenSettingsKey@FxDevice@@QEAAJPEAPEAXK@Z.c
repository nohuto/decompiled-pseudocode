/*
 * XREFs of ?OpenSettingsKey@FxDevice@@QEAAJPEAPEAXK@Z @ 0x1C001BE98
 * Callers:
 *     ?ReadRegistryS0Idle@FxPkgPnp@@AEAAXPEBU_UNICODE_STRING@@PEAE@Z @ 0x1C0014498 (-ReadRegistryS0Idle@FxPkgPnp@@AEAAXPEBU_UNICODE_STRING@@PEAE@Z.c)
 *     ?SaveState@FxPkgPnp@@IEAAXE@Z @ 0x1C0015568 (-SaveState@FxPkgPnp@@IEAAXE@Z.c)
 *     ?PnpCheckAndIncrementRestartCount@FxPkgPnp@@AEAAEXZ @ 0x1C008D1E8 (-PnpCheckAndIncrementRestartCount@FxPkgPnp@@AEAAEXZ.c)
 * Callees:
 *     ?GetSafePhysicalDevice@FxDevice@@QEAAPEAU_DEVICE_OBJECT@@XZ @ 0x1C001ADB4 (-GetSafePhysicalDevice@FxDevice@@QEAAPEAU_DEVICE_OBJECT@@XZ.c)
 *     ??1FxAutoRegKey@@QEAA@XZ @ 0x1C0030998 (--1FxAutoRegKey@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1C0035B00 (__security_check_cookie.c)
 */

__int64 __fastcall FxDevice::OpenSettingsKey(FxDevice *this, void **Key, ACCESS_MASK DesiredAccess)
{
  _DEVICE_OBJECT *SafePhysicalDevice; // rax
  ACCESS_MASK v6; // r8d
  NTSTATUS v7; // ebx
  FxAutoRegKey parent; // [rsp+40h] [rbp-19h] BYREF
  _UNICODE_STRING wdf; // [rsp+48h] [rbp-11h] BYREF
  _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+58h] [rbp-1h] BYREF
  wchar_t wdf_buffer[4]; // [rsp+88h] [rbp+2Fh] BYREF

  parent.m_Key = 0LL;
  SafePhysicalDevice = FxDevice::GetSafePhysicalDevice(this);
  if ( SafePhysicalDevice )
  {
    v7 = IoOpenDeviceRegistryKey(SafePhysicalDevice, 1u, v6, &parent.m_Key);
    if ( v7 >= 0 )
    {
      wcscpy(wdf_buffer, L"WDF");
      *(_DWORD *)&wdf.Length = 524294;
      wdf.Buffer = wdf_buffer;
      ObjectAttributes.RootDirectory = parent.m_Key;
      ObjectAttributes.ObjectName = &wdf;
      ObjectAttributes.Length = 48;
      ObjectAttributes.Attributes = 576;
      *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
      v7 = ZwCreateKey(Key, DesiredAccess, &ObjectAttributes, 0, 0LL, 0, 0LL);
    }
  }
  else
  {
    v7 = -1073741436;
  }
  FxAutoRegKey::~FxAutoRegKey(&parent);
  return (unsigned int)v7;
}
