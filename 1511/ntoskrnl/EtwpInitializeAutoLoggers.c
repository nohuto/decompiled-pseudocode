/*
 * XREFs of EtwpInitializeAutoLoggers @ 0x140526F0C
 * Callers:
 *     EtwpServerSiloCreateNotify @ 0x140526A2C (EtwpServerSiloCreateNotify.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140043C70 (RtlInitUnicodeString.c)
 *     PsDereferenceMonitorContextServerSilo @ 0x1400775C0 (PsDereferenceMonitorContextServerSilo.c)
 *     EtwpGetSiloDriverState @ 0x140077640 (EtwpGetSiloDriverState.c)
 *     RtlStringCbPrintfW @ 0x14009C26C (RtlStringCbPrintfW.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     ZwClose @ 0x140150800 (ZwClose.c)
 *     ZwOpenKey @ 0x140150860 (ZwOpenKey.c)
 *     ZwEnumerateKey @ 0x140150C60 (ZwEnumerateKey.c)
 *     ExAllocatePoolWithTag @ 0x140238380 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 *     RtlNtStatusToDosError @ 0x14049D1D0 (RtlNtStatusToDosError.c)
 *     RtlWriteRegistryValue @ 0x1404C8708 (RtlWriteRegistryValue.c)
 *     EtwpStartAutoLogger @ 0x14050889C (EtwpStartAutoLogger.c)
 *     EtwpEnableKeyProviders @ 0x14052718C (EtwpEnableKeyProviders.c)
 */

void EtwpInitializeAutoLoggers()
{
  __int64 v0; // rbx
  __int64 SiloDriverState; // r14
  __int64 v2; // rcx
  SIZE_T v3; // r15
  wchar_t *PoolWithTag; // rdi
  ULONG v5; // esi
  NTSTATUS v6; // eax
  int v7; // ebx
  NTSTATUS v8; // ecx
  unsigned int ValueData; // [rsp+38h] [rbp-D0h] BYREF
  ULONG ValueData_4; // [rsp+3Ch] [rbp-CCh] BYREF
  HANDLE KeyHandle; // [rsp+40h] [rbp-C8h] BYREF
  ULONG ResultLength; // [rsp+48h] [rbp-C0h] BYREF
  UNICODE_STRING DestinationString; // [rsp+50h] [rbp-B8h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+60h] [rbp-A8h] BYREF
  _BYTE KeyInformation[12]; // [rsp+98h] [rbp-70h] BYREF
  unsigned int v16; // [rsp+A4h] [rbp-64h]
  wchar_t v17[136]; // [rsp+A8h] [rbp-60h] BYREF
  WCHAR SourceString[16]; // [rsp+1B8h] [rbp+B0h] BYREF

  v0 = -1LL;
  ValueData_4 = 0;
  wcscpy(SourceString, L"GlobalLogger");
  SiloDriverState = EtwpGetSiloDriverState((PVOID)0xFFFFFFFFFFFFFFFFLL);
  EtwpStartAutoLogger(SourceString, L"WMI\\GlobalLogger", &ValueData, SiloDriverState);
  v2 = -1LL;
  do
    ++v2;
  while ( asc_14054FAF0[v2] );
  do
    ++v0;
  while ( aWmiAutologger[v0] );
  v3 = (unsigned int)(2 * (v0 + v2) + 258);
  PoolWithTag = (wchar_t *)ExAllocatePoolWithTag(PagedPool, v3, 0x50777445u);
  if ( PoolWithTag )
  {
    RtlInitUnicodeString(
      &DestinationString,
      L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\WMI\\AutoLogger");
    ObjectAttributes.Length = 48;
    ObjectAttributes.ObjectName = &DestinationString;
    ObjectAttributes.RootDirectory = 0LL;
    ObjectAttributes.Attributes = 576;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    if ( ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes) >= 0 )
    {
      v5 = 0;
      do
      {
        v6 = ZwEnumerateKey(KeyHandle, v5, KeyBasicInformation, KeyInformation, 0x11Eu, &ResultLength);
        v7 = v6;
        if ( v6 < 0 )
        {
          v8 = v6;
          if ( v6 == -2147483622 )
            v8 = 0;
          ValueData_4 = RtlNtStatusToDosError(v8);
          RtlWriteRegistryValue(2u, L"WMI\\AutoLogger", L"Status", 4u, &ValueData_4, 4u);
          if ( v7 == -2147483643 || v7 == -1073741789 )
            v7 = 0;
        }
        else if ( v16 < 0x102 )
        {
          v17[(unsigned __int64)v16 >> 1] = 0;
          if ( !RtlStringCbPrintfW(PoolWithTag, v3, L"%ws\\%ws", L"WMI\\AutoLogger", v17)
            && (int)EtwpStartAutoLogger(v17, PoolWithTag, &ValueData, SiloDriverState) >= 0
            && ValueData )
          {
            EtwpEnableKeyProviders(ValueData, PoolWithTag, KeyInformation);
          }
        }
        ++v5;
      }
      while ( v7 >= 0 );
      ZwClose(KeyHandle);
    }
    ExFreePoolWithTag(PoolWithTag, 0);
  }
  PsDereferenceMonitorContextServerSilo(SiloDriverState);
}
