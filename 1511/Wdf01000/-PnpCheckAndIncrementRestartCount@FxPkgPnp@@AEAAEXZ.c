/*
 * XREFs of ?PnpCheckAndIncrementRestartCount@FxPkgPnp@@AEAAEXZ @ 0x1C008D1E8
 * Callers:
 *     ?PnpEventFailedPowerPolicyRemoved@FxPkgPnp@@KA?AW4_WDF_DEVICE_PNP_STATE@@PEAV1@@Z @ 0x1C0084C00 (-PnpEventFailedPowerPolicyRemoved@FxPkgPnp@@KA-AW4_WDF_DEVICE_PNP_STATE@@PEAV1@@Z.c)
 * Callees:
 *     ?OpenSettingsKey@FxDevice@@QEAAJPEAPEAXK@Z @ 0x1C001BE98 (-OpenSettingsKey@FxDevice@@QEAAJPEAPEAXK@Z.c)
 *     ??1FxAutoRegKey@@QEAA@XZ @ 0x1C0030998 (--1FxAutoRegKey@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1C0035B00 (__security_check_cookie.c)
 *     ?PnpIncrementRestartCountLogic@FxPkgPnp@@AEAAEPEAXE@Z @ 0x1C0085A10 (-PnpIncrementRestartCountLogic@FxPkgPnp@@AEAAEPEAXE@Z.c)
 */

char __fastcall FxPkgPnp::PnpCheckAndIncrementRestartCount(FxPkgPnp *this)
{
  char restarted; // bl
  FxDevice *m_Device; // rcx
  unsigned int disposition; // [rsp+40h] [rbp-19h] BYREF
  FxAutoRegKey settings; // [rsp+48h] [rbp-11h] BYREF
  FxAutoRegKey restart; // [rsp+50h] [rbp-9h] BYREF
  _UNICODE_STRING keyNameRestart; // [rsp+58h] [rbp-1h] BYREF
  _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+68h] [rbp+Fh] BYREF
  wchar_t keyNameRestart_buffer[8]; // [rsp+98h] [rbp+3Fh] BYREF

  restarted = 0;
  *(_DWORD *)&keyNameRestart.Length = 1048590;
  settings.m_Key = 0LL;
  m_Device = this->m_Device;
  restart.m_Key = 0LL;
  disposition = 0;
  wcscpy(keyNameRestart_buffer, L"Restart");
  keyNameRestart.Buffer = keyNameRestart_buffer;
  if ( (int)FxDevice::OpenSettingsKey(m_Device, &settings.m_Key, 0x1F0000u) >= 0 )
  {
    ObjectAttributes.RootDirectory = settings.m_Key;
    ObjectAttributes.Length = 48;
    ObjectAttributes.ObjectName = &keyNameRestart;
    ObjectAttributes.Attributes = 576;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    if ( ZwCreateKey(&restart.m_Key, 0xF003Fu, &ObjectAttributes, 0, 0LL, 1u, &disposition) >= 0 )
      restarted = FxPkgPnp::PnpIncrementRestartCountLogic(this, restart.m_Key, disposition == 1);
  }
  FxAutoRegKey::~FxAutoRegKey(&restart);
  FxAutoRegKey::~FxAutoRegKey(&settings);
  return restarted;
}
