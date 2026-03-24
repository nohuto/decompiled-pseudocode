/*
 * XREFs of KeyboardClassGetWaitWakeEnableState @ 0x1C000D030
 * Callers:
 *     KeyboardStart @ 0x1C0002440 (KeyboardStart.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0002DC0 (__security_check_cookie.c)
 *     memmove @ 0x1C0002EC0 (memmove.c)
 *     memset @ 0x1C0003200 (memset.c)
 */

char __fastcall KeyboardClassGetWaitWakeEnableState(__int64 a1)
{
  struct _DEVICE_OBJECT *v2; // rcx
  char v3; // r14
  int v4; // r15d
  NTSTATUS v5; // eax
  void *v6; // rsi
  unsigned int *PoolWithTag; // rdi
  NTSTATUS v8; // esi
  ULONGLONG v9; // rax
  int v10; // edi
  unsigned int v11; // eax
  ULONG Length; // [rsp+30h] [rbp-D0h] BYREF
  int v14; // [rsp+34h] [rbp-CCh] BYREF
  void *DeviceRegKey; // [rsp+38h] [rbp-C8h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+40h] [rbp-C0h] BYREF
  _QWORD OutputBuffer[9]; // [rsp+50h] [rbp-B0h] BYREF
  int v18; // [rsp+98h] [rbp-68h]
  _OSVERSIONINFOEXW VersionInfo; // [rsp+A0h] [rbp-60h] BYREF

  DeviceRegKey = 0LL;
  v2 = *(struct _DEVICE_OBJECT **)(a1 + 24);
  v3 = 0;
  v14 = 0;
  v4 = 0;
  v5 = IoOpenDeviceRegistryKey(v2, 1u, 0x1F0000u, &DeviceRegKey);
  if ( v5 < 0 )
    goto LABEL_26;
  v6 = DeviceRegKey;
  RtlInitUnicodeString(&DestinationString, L"WaitWakeEnabled");
  if ( (unsigned int)DestinationString.MaximumLength + 28 >= (unsigned int)DestinationString.MaximumLength + 24 )
  {
    Length = DestinationString.MaximumLength + 28;
    PoolWithTag = (unsigned int *)ExAllocatePoolWithTag(PagedPool, Length, 0x4364624Bu);
    if ( PoolWithTag )
    {
      v8 = ZwQueryValueKey(v6, &DestinationString, KeyValueFullInformation, PoolWithTag, Length, &Length);
      if ( v8 >= 0 )
      {
        v11 = PoolWithTag[3];
        if ( v11 > 4 )
        {
          v8 = -1073741789;
        }
        else
        {
          memmove(&v14, (char *)PoolWithTag + PoolWithTag[2], v11);
          v4 = v14;
        }
      }
      ExFreePoolWithTag(PoolWithTag, 0);
    }
    else
    {
      v8 = -1073741801;
    }
    if ( v8 >= 0 )
    {
      v3 = 1;
      *(_BYTE *)(a1 + 362) = v4 != 0;
    }
  }
  LOBYTE(v5) = ZwClose(DeviceRegKey);
  DeviceRegKey = 0LL;
  if ( !v3 )
  {
LABEL_26:
    if ( !*(_BYTE *)(a1 + 362) )
    {
      memset(&VersionInfo, 0, sizeof(VersionInfo));
      VersionInfo.dwOSVersionInfoSize = 284;
      VersionInfo.wProductType = 1;
      v9 = VerSetConditionMask(0LL, 0x80u, 1u);
      v5 = RtlVerifyVersionInfo(&VersionInfo, 0x80u, v9);
      if ( v5 >= 0 )
      {
        v10 = 4;
        memset(OutputBuffer, 0, sizeof(OutputBuffer));
        v18 = 0;
        v5 = ZwPowerInformation(SystemPowerCapabilities, 0LL, 0, OutputBuffer, 0x4Cu);
        if ( v5 >= 0 )
        {
          if ( !BYTE5(OutputBuffer[0]) )
          {
            if ( BYTE4(OutputBuffer[0]) )
            {
              v10 = 3;
            }
            else
            {
              LOBYTE(v5) = -BYTE3(OutputBuffer[0]);
              v10 = BYTE3(OutputBuffer[0]) != 0 ? 2 : 0;
            }
          }
          if ( *(_DWORD *)(a1 + 288) >= v10 )
            *(_BYTE *)(a1 + 362) = 1;
        }
      }
    }
  }
  return v5;
}
