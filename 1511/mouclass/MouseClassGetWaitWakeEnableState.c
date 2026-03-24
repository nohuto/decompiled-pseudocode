/*
 * XREFs of MouseClassGetWaitWakeEnableState @ 0x1C000BD40
 * Callers:
 *     MouseStart @ 0x1C00025B0 (MouseStart.c)
 * Callees:
 *     __security_check_cookie @ 0x1C00029E0 (__security_check_cookie.c)
 *     memset @ 0x1C0002E40 (memset.c)
 *     MouseQueryDeviceKey @ 0x1C000BEC0 (MouseQueryDeviceKey.c)
 */

char __fastcall MouseClassGetWaitWakeEnableState(__int64 a1)
{
  char v2; // di
  NTSTATUS v3; // eax
  ULONGLONG v4; // rax
  int v5; // edi
  void *DeviceRegKey; // [rsp+38h] [rbp-C8h] BYREF
  _QWORD OutputBuffer[9]; // [rsp+40h] [rbp-C0h] BYREF
  int v9; // [rsp+88h] [rbp-78h]
  _OSVERSIONINFOEXW VersionInfo; // [rsp+90h] [rbp-70h] BYREF

  DeviceRegKey = 0LL;
  v2 = 0;
  v3 = IoOpenDeviceRegistryKey(*(PDEVICE_OBJECT *)(a1 + 24), 1u, 0x1F0000u, &DeviceRegKey);
  if ( v3 < 0 )
    goto LABEL_18;
  if ( (int)MouseQueryDeviceKey(DeviceRegKey) >= 0 )
  {
    v2 = 1;
    *(_BYTE *)(a1 + 345) = 0;
  }
  LOBYTE(v3) = ZwClose(DeviceRegKey);
  DeviceRegKey = 0LL;
  if ( !v2 )
  {
LABEL_18:
    if ( !*(_BYTE *)(a1 + 345) )
    {
      memset(&VersionInfo, 0, sizeof(VersionInfo));
      VersionInfo.dwOSVersionInfoSize = 284;
      VersionInfo.wProductType = 1;
      v4 = VerSetConditionMask(0LL, 0x80u, 1u);
      v3 = RtlVerifyVersionInfo(&VersionInfo, 0x80u, v4);
      if ( v3 >= 0 )
      {
        v5 = 4;
        memset(OutputBuffer, 0, sizeof(OutputBuffer));
        v9 = 0;
        v3 = ZwPowerInformation(SystemPowerCapabilities, 0LL, 0, OutputBuffer, 0x4Cu);
        if ( v3 >= 0 )
        {
          if ( !BYTE5(OutputBuffer[0]) )
          {
            if ( BYTE4(OutputBuffer[0]) )
            {
              v5 = 3;
            }
            else
            {
              LOBYTE(v3) = -BYTE3(OutputBuffer[0]);
              v5 = BYTE3(OutputBuffer[0]) != 0 ? 2 : 0;
            }
          }
          if ( *(_DWORD *)(a1 + 272) >= v5 )
            *(_BYTE *)(a1 + 345) = 1;
        }
      }
    }
  }
  return v3;
}
