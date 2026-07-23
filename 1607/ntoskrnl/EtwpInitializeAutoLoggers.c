/*
 * XREFs of EtwpInitializeAutoLoggers @ 0x140563968
 * Callers:
 *     EtwInitializeSiloState @ 0x140563728 (EtwInitializeSiloState.c)
 * Callees:
 *     RtlStringCbPrintfW @ 0x14000BD54 (RtlStringCbPrintfW.c)
 *     RtlInitUnicodeString @ 0x14002D7E0 (RtlInitUnicodeString.c)
 *     PsGetCurrentServerSiloGlobals @ 0x14008BD70 (PsGetCurrentServerSiloGlobals.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     ZwClose @ 0x14015A3D0 (ZwClose.c)
 *     ZwOpenKey @ 0x14015A430 (ZwOpenKey.c)
 *     ZwEnumerateKey @ 0x14015A830 (ZwEnumerateKey.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 *     RtlNtStatusToDosError @ 0x1404A6B50 (RtlNtStatusToDosError.c)
 *     EtwStartAutoLogger @ 0x1404C3638 (EtwStartAutoLogger.c)
 *     RtlWriteRegistryValue @ 0x1404C3EE8 (RtlWriteRegistryValue.c)
 *     EtwpEnableKeyProviders @ 0x140563BAC (EtwpEnableKeyProviders.c)
 */

void EtwpInitializeAutoLoggers()
{
  wchar_t *PoolWithTag; // rdi
  ULONG v1; // esi
  NTSTATUS v2; // eax
  int v3; // ebx
  _QWORD *CurrentServerSiloGlobals; // rax
  __int64 v5; // rdx
  NTSTATUS v6; // ecx
  int ValueData; // [rsp+38h] [rbp-D0h] BYREF
  ULONG ValueData_4; // [rsp+3Ch] [rbp-CCh] BYREF
  HANDLE KeyHandle; // [rsp+40h] [rbp-C8h] BYREF
  ULONG ResultLength; // [rsp+48h] [rbp-C0h] BYREF
  UNICODE_STRING DestinationString; // [rsp+50h] [rbp-B8h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+60h] [rbp-A8h] BYREF
  _BYTE KeyInformation[12]; // [rsp+98h] [rbp-70h] BYREF
  unsigned int v14; // [rsp+A4h] [rbp-64h]
  wchar_t v15[136]; // [rsp+A8h] [rbp-60h] BYREF
  WCHAR SourceString[16]; // [rsp+1B8h] [rbp+B0h] BYREF

  ValueData_4 = 0;
  wcscpy(SourceString, L"GlobalLogger");
  EtwStartAutoLogger(SourceString, L"WMI\\GlobalLogger", &ValueData);
  PoolWithTag = (wchar_t *)ExAllocatePoolWithTag(PagedPool, 0x120uLL, 0x50777445u);
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
      v1 = 0;
      do
      {
        v2 = ZwEnumerateKey(KeyHandle, v1, KeyBasicInformation, KeyInformation, 0x11Eu, &ResultLength);
        v3 = v2;
        if ( v2 < 0 )
        {
          v6 = v2;
          if ( v2 == -2147483622 )
            v6 = 0;
          ValueData_4 = RtlNtStatusToDosError(v6);
          RtlWriteRegistryValue(2u, L"WMI\\AutoLogger", L"Status", 4u, &ValueData_4, 4u);
          if ( v3 == -2147483643 || v3 == -1073741789 )
            v3 = 0;
        }
        else if ( v14 < 0x102 )
        {
          v15[(unsigned __int64)v14 >> 1] = 0;
          if ( !RtlStringCbPrintfW(PoolWithTag, 0x120uLL, L"%ws\\%ws", L"WMI\\AutoLogger", v15)
            && (int)EtwStartAutoLogger(v15, PoolWithTag, &ValueData) >= 0 )
          {
            if ( ValueData )
            {
              CurrentServerSiloGlobals = PsGetCurrentServerSiloGlobals();
              EtwpEnableKeyProviders(CurrentServerSiloGlobals[106], v5, PoolWithTag, KeyInformation);
            }
          }
        }
        ++v1;
      }
      while ( v3 >= 0 );
      ZwClose(KeyHandle);
    }
    ExFreePoolWithTag(PoolWithTag, 0);
  }
}
