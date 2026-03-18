/*
 * XREFs of EtwpInitializeAutoLoggers @ 0x140593DC4
 * Callers:
 *     EtwpServerSiloCreateNotify @ 0x140593ABC (EtwpServerSiloCreateNotify.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140047FE0 (RtlInitUnicodeString.c)
 *     PsGetMonitorContextServerSilo @ 0x1400CEAC0 (PsGetMonitorContextServerSilo.c)
 *     RtlStringCbPrintfW @ 0x1400CEF64 (RtlStringCbPrintfW.c)
 *     PsDereferenceMonitorContextServerSilo @ 0x1400F0720 (PsDereferenceMonitorContextServerSilo.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     ZwClose @ 0x14017F1D0 (ZwClose.c)
 *     ZwOpenKey @ 0x14017F230 (ZwOpenKey.c)
 *     ZwEnumerateKey @ 0x14017F630 (ZwEnumerateKey.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140288E60 (ExAllocatePoolWithTag.c)
 *     EtwpStartAutoLogger @ 0x1404A887C (EtwpStartAutoLogger.c)
 *     RtlWriteRegistryValue @ 0x1404AA384 (RtlWriteRegistryValue.c)
 *     RtlNtStatusToDosError @ 0x140529030 (RtlNtStatusToDosError.c)
 *     EtwpEnableKeyProviders @ 0x140594050 (EtwpEnableKeyProviders.c)
 */

void __fastcall EtwpInitializeAutoLoggers(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rbx
  __int64 v5; // rax
  SIZE_T v6; // r15
  wchar_t *PoolWithTag; // rdi
  ULONG v8; // esi
  NTSTATUS v9; // eax
  int v10; // ebx
  NTSTATUS v11; // ecx
  ULONG ValueData; // [rsp+38h] [rbp-D0h] BYREF
  unsigned int ValueData_4; // [rsp+3Ch] [rbp-CCh] BYREF
  __int64 v14; // [rsp+40h] [rbp-C8h] BYREF
  HANDLE KeyHandle; // [rsp+48h] [rbp-C0h] BYREF
  ULONG ResultLength; // [rsp+50h] [rbp-B8h] BYREF
  UNICODE_STRING DestinationString; // [rsp+58h] [rbp-B0h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+68h] [rbp-A0h] BYREF
  _BYTE KeyInformation[12]; // [rsp+98h] [rbp-70h] BYREF
  unsigned int v20; // [rsp+A4h] [rbp-64h]
  wchar_t v21[136]; // [rsp+A8h] [rbp-60h] BYREF
  WCHAR SourceString[16]; // [rsp+1B8h] [rbp+B0h] BYREF

  v4 = -1LL;
  ValueData = 0;
  wcscpy(SourceString, L"GlobalLogger");
  PsGetMonitorContextServerSilo(EtwSiloMonitor, (_QWORD *)0xFFFFFFFFFFFFFFFFLL, &v14, a4);
  EtwpStartAutoLogger(SourceString, L"WMI\\GlobalLogger", &ValueData_4, v14);
  v5 = -1LL;
  do
    ++v5;
  while ( asc_1405C78F0[v5] );
  do
    ++v4;
  while ( aWmiAutologger[v4] );
  v6 = (unsigned int)(2 * (v4 + v5) + 258);
  PoolWithTag = (wchar_t *)ExAllocatePoolWithTag(PagedPool, v6, 0x50777445u);
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
      v8 = 0;
      do
      {
        v9 = ZwEnumerateKey(KeyHandle, v8, KeyBasicInformation, KeyInformation, 0x11Eu, &ResultLength);
        v10 = v9;
        if ( v9 < 0 )
        {
          v11 = v9;
          if ( v9 == -2147483622 )
            v11 = 0;
          ValueData = RtlNtStatusToDosError(v11);
          RtlWriteRegistryValue(2u, L"WMI\\AutoLogger", L"Status", 4u, &ValueData, 4u);
          if ( v10 == -2147483643 || v10 == -1073741789 )
            v10 = 0;
        }
        else if ( v20 < 0x102 )
        {
          v21[(unsigned __int64)v20 >> 1] = 0;
          if ( !RtlStringCbPrintfW(PoolWithTag, v6, L"%ws\\%ws", L"WMI\\AutoLogger", v21)
            && (int)EtwpStartAutoLogger(v21, PoolWithTag, &ValueData_4, v14) >= 0
            && ValueData_4 )
          {
            EtwpEnableKeyProviders(ValueData_4, PoolWithTag, KeyInformation);
          }
        }
        ++v8;
      }
      while ( v10 >= 0 );
      ZwClose(KeyHandle);
    }
    ExFreePoolWithTag(PoolWithTag, 0);
  }
  PsDereferenceMonitorContextServerSilo(v14);
}
