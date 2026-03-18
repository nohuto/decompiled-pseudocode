/*
 * XREFs of DrvInitConsole @ 0x1C007E24C
 * Callers:
 *     InitVideo @ 0x1C007D7D8 (InitVideo.c)
 * Callees:
 *     DrvUpdateGraphicsDeviceList @ 0x1C0020D10 (DrvUpdateGraphicsDeviceList.c)
 *     Win32FreePool @ 0x1C0033BB0 (Win32FreePool.c)
 *     PALLOCMEM2 @ 0x1C004C24C (PALLOCMEM2.c)
 *     _guard_dispatch_icall_nop @ 0x1C0085AE0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DrvInitConsole(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v3; // ebx
  int v4; // esi
  _DWORD *v5; // rdi
  unsigned int v6; // eax
  unsigned __int64 i; // rdx
  __int64 v8; // rcx
  __int64 v9; // rax
  unsigned __int8 *v10; // rax
  struct _UNICODE_STRING DestinationString; // [rsp+30h] [rbp-40h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+40h] [rbp-30h] BYREF
  ULONG ResultLength; // [rsp+90h] [rbp+20h] BYREF
  void *KeyHandle; // [rsp+98h] [rbp+28h] BYREF

  v3 = 0;
  v4 = 0;
  KeyHandle = 0LL;
  if ( !gProtocolType )
  {
    RtlInitUnicodeString(&DestinationString, L"\\Registry\\Machine\\System\\CurrentControlSet\\Control");
    ObjectAttributes.Length = 48;
    ObjectAttributes.ObjectName = &DestinationString;
    ObjectAttributes.RootDirectory = 0LL;
    ObjectAttributes.Attributes = 576;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    if ( ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes) >= 0 )
    {
      RtlInitUnicodeString(&DestinationString, L"SystemStartOptions");
      if ( ZwQueryValueKey(KeyHandle, &DestinationString, KeyValuePartialInformation, 0LL, 0, &ResultLength) == -1073741789
        && ResultLength > 0x10 )
      {
        v5 = PALLOCMEM2(ResultLength, 1886221383LL, 0);
        if ( v5 )
        {
          if ( ZwQueryValueKey(
                 KeyHandle,
                 &DestinationString,
                 KeyValuePartialInformation,
                 v5,
                 ResultLength,
                 &ResultLength) >= 0 )
          {
            v6 = v5[2];
            if ( v6 >= 0x12 )
            {
              for ( i = (unsigned __int64)(v5 + 3); i <= (unsigned __int64)v5 + v6 - 6; i += 2LL )
              {
                v8 = *(_QWORD *)i - 0x45005300410042LL;
                if ( *(_QWORD *)i == 0x45005300410042LL )
                {
                  v8 = *(_QWORD *)(i + 8) - 0x45004400490056LL;
                  if ( *(_QWORD *)(i + 8) == 0x45004400490056LL )
                    v8 = *(unsigned __int16 *)(i + 16) - 79LL;
                }
                if ( !v8 )
                {
                  v4 = 1;
                  break;
                }
              }
            }
          }
          Win32FreePool();
        }
      }
      ZwClose(KeyHandle);
    }
  }
  v9 = WdLogNewEntry5_WdTrace(a1, a2, a3);
  WdLogEvent5_WdTrace(v9);
  gbBaseVideo = v4;
  LODWORD(gcMaximumAdapterCount) = ((__int64 (*)(void))qword_1C01010D0)();
  gpAdapterLuids = (struct _LUID *)PALLOCMEM2((unsigned int)(8 * gcMaximumAdapterCount), 1634492743LL, 1);
  v10 = (unsigned __int8 *)PALLOCMEM2((unsigned int)gcMaximumAdapterCount, 1634492743LL, 1);
  gpDevicesPerLuid = v10;
  if ( !gpAdapterLuids || !v10 )
    return 3221225495LL;
  LOBYTE(v3) = gProtocolType == 0;
  DrvUpdateGraphicsDeviceList(1LL, v3);
  return 0LL;
}
