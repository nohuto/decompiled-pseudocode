/*
 * XREFs of EtwpEnableKeyProviders @ 0x140594050
 * Callers:
 *     EtwpInitializeAutoLoggers @ 0x140593DC4 (EtwpInitializeAutoLoggers.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140047FE0 (RtlInitUnicodeString.c)
 *     RtlStringCbCopyW @ 0x1400CF240 (RtlStringCbCopyW.c)
 *     RtlStringCbCatW @ 0x1400CF2BC (RtlStringCbCatW.c)
 *     ZwClose @ 0x14017F1D0 (ZwClose.c)
 *     ZwOpenKey @ 0x14017F230 (ZwOpenKey.c)
 *     ZwEnumerateKey @ 0x14017F630 (ZwEnumerateKey.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140288E60 (ExAllocatePoolWithTag.c)
 *     RtlWriteRegistryValue @ 0x1404AA384 (RtlWriteRegistryValue.c)
 *     RtlNtStatusToDosError @ 0x140529030 (RtlNtStatusToDosError.c)
 *     EtwpEnableAutoLoggerProviders @ 0x1405941CC (EtwpEnableAutoLoggerProviders.c)
 */

void __fastcall EtwpEnableKeyProviders(unsigned int a1, const wchar_t *a2, unsigned int *a3)
{
  __int64 v4; // r9
  __int64 v5; // rax
  SIZE_T v8; // rbx
  wchar_t *PoolWithTag; // rax
  wchar_t *v10; // r14
  ULONG v11; // edi
  int v12; // ebx
  unsigned __int64 v13; // rax
  ULONG ResultLength; // [rsp+30h] [rbp-50h] BYREF
  HANDLE KeyHandle; // [rsp+38h] [rbp-48h] BYREF
  UNICODE_STRING DestinationString; // [rsp+40h] [rbp-40h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+50h] [rbp-30h] BYREF
  ULONG ValueData; // [rsp+C8h] [rbp+48h] BYREF

  v4 = -1LL;
  ValueData = 0;
  v5 = -1LL;
  do
    ++v5;
  while ( a2[v5] );
  do
    ++v4;
  while ( aRegistryMachin_190[v4] );
  v8 = (unsigned int)(2 * (v4 + v5) + 2);
  PoolWithTag = (wchar_t *)ExAllocatePoolWithTag(PagedPool, v8, 0x50777445u);
  v10 = PoolWithTag;
  if ( PoolWithTag )
  {
    RtlStringCbCopyW(PoolWithTag, (unsigned int)v8, L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\");
    RtlStringCbCatW(v10, (unsigned int)v8, a2);
    RtlInitUnicodeString(&DestinationString, v10);
    ObjectAttributes.Length = 48;
    ObjectAttributes.ObjectName = &DestinationString;
    ObjectAttributes.RootDirectory = 0LL;
    ObjectAttributes.Attributes = 576;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    if ( ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes) >= 0 )
    {
      v11 = 0;
      do
      {
        v12 = ZwEnumerateKey(KeyHandle, v11, KeyBasicInformation, a3, 0x11Eu, &ResultLength);
        v13 = a3[3];
        if ( v13 >= 0x108 )
          v12 = -2147483643;
        if ( v12 < 0 )
        {
          if ( v12 != -2147483622 )
          {
            ValueData = RtlNtStatusToDosError(v12);
            RtlWriteRegistryValue(2u, a2, L"EnableStatus", 4u, &ValueData, 4u);
          }
        }
        else
        {
          *((_WORD *)a3 + (v13 >> 1) + 8) = 0;
          EtwpEnableAutoLoggerProviders(a1, a3 + 4, a2);
        }
        ++v11;
      }
      while ( v12 >= 0 );
      ZwClose(KeyHandle);
    }
    ExFreePoolWithTag(v10, 0);
  }
}
