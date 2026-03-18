/*
 * XREFs of EtwpEnableKeyProviders @ 0x14056366C
 * Callers:
 *     EtwpInitializeAutoLoggers @ 0x140563428 (EtwpInitializeAutoLoggers.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14002DC60 (RtlInitUnicodeString.c)
 *     RtlStringCbCopyW @ 0x1400C47BC (RtlStringCbCopyW.c)
 *     RtlStringCbCatW @ 0x1400C49B8 (RtlStringCbCatW.c)
 *     ZwClose @ 0x140159E60 (ZwClose.c)
 *     ZwOpenKey @ 0x140159EC0 (ZwOpenKey.c)
 *     ZwEnumerateKey @ 0x14015A2C0 (ZwEnumerateKey.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 *     RtlNtStatusToDosError @ 0x1404BAE20 (RtlNtStatusToDosError.c)
 *     RtlWriteRegistryValue @ 0x1404E08E4 (RtlWriteRegistryValue.c)
 *     EtwpEnableAutoLoggerProviders @ 0x1405637E0 (EtwpEnableAutoLoggerProviders.c)
 */

void __fastcall EtwpEnableKeyProviders(
        __int64 a1,
        unsigned int a2,
        const wchar_t *a3,
        unsigned int *a4,
        ULONG ValueData)
{
  ULONG v5; // edi
  __int64 v7; // rax
  SIZE_T v11; // rbx
  wchar_t *PoolWithTag; // rax
  wchar_t *v13; // rsi
  int v14; // ebx
  unsigned __int64 v15; // rax
  ULONG ResultLength; // [rsp+38h] [rbp-31h] BYREF
  HANDLE KeyHandle; // [rsp+40h] [rbp-29h] BYREF
  wchar_t *v18; // [rsp+48h] [rbp-21h]
  UNICODE_STRING DestinationString; // [rsp+50h] [rbp-19h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+60h] [rbp-9h] BYREF

  v5 = 0;
  ValueData = 0;
  v7 = -1LL;
  do
    ++v7;
  while ( a3[v7] );
  v11 = (unsigned int)(2 * v7 + 104);
  PoolWithTag = (wchar_t *)ExAllocatePoolWithTag(PagedPool, v11, 0x50777445u);
  v18 = PoolWithTag;
  v13 = PoolWithTag;
  if ( PoolWithTag )
  {
    RtlStringCbCopyW(PoolWithTag, (unsigned int)v11, L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\");
    RtlStringCbCatW(v13, (unsigned int)v11, a3);
    RtlInitUnicodeString(&DestinationString, v13);
    ObjectAttributes.Length = 48;
    ObjectAttributes.ObjectName = &DestinationString;
    ObjectAttributes.RootDirectory = 0LL;
    ObjectAttributes.Attributes = 576;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    if ( ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes) >= 0 )
    {
      do
      {
        v14 = ZwEnumerateKey(KeyHandle, v5, KeyBasicInformation, a4, 0x11Eu, &ResultLength);
        v15 = a4[3];
        if ( v15 >= 0x108 )
          v14 = -2147483643;
        if ( v14 < 0 )
        {
          if ( v14 != -2147483622 )
          {
            ValueData = RtlNtStatusToDosError(v14);
            RtlWriteRegistryValue(2u, a3, L"EnableStatus", 4u, &ValueData, 4u);
          }
        }
        else
        {
          *((_WORD *)a4 + (v15 >> 1) + 8) = 0;
          EtwpEnableAutoLoggerProviders(a1, a2, a4 + 4, a3);
        }
        ++v5;
      }
      while ( v14 >= 0 );
      ZwClose(KeyHandle);
      v13 = v18;
    }
    ExFreePoolWithTag(v13, 0);
  }
}
