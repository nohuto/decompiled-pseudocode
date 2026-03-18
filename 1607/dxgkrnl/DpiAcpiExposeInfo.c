/*
 * XREFs of DpiAcpiExposeInfo @ 0x1C00F7A9C
 * Callers:
 *     DpiFdoEnumChildDevices @ 0x1C00F6D44 (DpiFdoEnumChildDevices.c)
 * Callees:
 *     __security_check_cookie @ 0x1C00117E0 (__security_check_cookie.c)
 *     memset @ 0x1C00127C0 (memset.c)
 *     DpiAcpiPrepareAcpiChildNameList @ 0x1C00F732C (DpiAcpiPrepareAcpiChildNameList.c)
 */

__int64 __fastcall DpiAcpiExposeInfo(__int64 a1)
{
  struct _UNICODE_STRING *v1; // rsi
  __int64 result; // rax
  NTSTATUS v3; // ebx
  wchar_t *Buffer; // rax
  CHAR *PoolWithTag; // rax
  __int64 v6; // rcx
  wchar_t *v7; // rax
  unsigned int v8; // r14d
  wchar_t *v9; // rdi
  __int64 v10; // rax
  struct _STRING Destination; // [rsp+40h] [rbp-79h] BYREF
  void *KeyHandle; // [rsp+50h] [rbp-69h] BYREF
  HANDLE Handle; // [rsp+58h] [rbp-61h] BYREF
  struct _STRING DestinationString; // [rsp+60h] [rbp-59h] BYREF
  STRING Source; // [rsp+70h] [rbp-49h] BYREF
  int v16; // [rsp+80h] [rbp-39h] BYREF
  _OWORD *v17; // [rsp+88h] [rbp-31h]
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+90h] [rbp-29h] BYREF
  _OWORD v19[2]; // [rsp+C0h] [rbp+7h] BYREF
  int v20; // [rsp+E0h] [rbp+27h]
  wchar_t v21; // [rsp+E4h] [rbp+2Bh]

  v1 = *(struct _UNICODE_STRING **)(a1 + 64);
  *(_DWORD *)&Source.Length = 65537;
  Source.Buffer = (PCHAR)&byte_1C00FF410;
  *(_DWORD *)&Destination.Length = 0;
  Destination.Buffer = 0LL;
  result = DpiAcpiPrepareAcpiChildNameList((__int64)v1);
  v3 = result;
  if ( (int)result >= 0 )
  {
    Buffer = v1[193].Buffer;
    if ( *(_DWORD *)Buffer == 1198089537 && *((_DWORD *)Buffer + 1) )
    {
      Destination.MaximumLength = 4096;
      PoolWithTag = (CHAR *)ExAllocatePoolWithTag(PagedPool, 0x1000uLL, 0x74727044u);
      Destination.Buffer = PoolWithTag;
      if ( PoolWithTag )
      {
        memset(PoolWithTag, 0, Destination.MaximumLength);
        v7 = v1[193].Buffer;
        v8 = 1;
        v9 = v7 + 4;
        if ( *((_DWORD *)v7 + 1) > 1u )
        {
          do
          {
            v9 = (wchar_t *)((char *)v9 + *((unsigned int *)v9 + 1) + 8);
            if ( (*(_BYTE *)v9 & 1) == 0 )
            {
              RtlInitAnsiString(&DestinationString, (PCSZ)v9 + 8);
              RtlAppendStringToString(&Destination, &DestinationString);
              RtlAppendStringToString(&Destination, &Source);
            }
            ++v8;
          }
          while ( v8 < *((_DWORD *)v1[193].Buffer + 1) );
        }
        if ( !Destination.Buffer )
          return (unsigned int)v3;
        if ( Destination.Length )
        {
          v20 = *(_DWORD *)L"FO";
          v21 = aDisplayAcpiInf[18];
          v16 = 2490404;
          v17 = v19;
          v19[0] = *(_OWORD *)L"_DISPLAY_ACPI_INFO";
          *(_DWORD *)&DestinationString.Length = 0;
          DestinationString.Buffer = 0LL;
          KeyHandle = 0LL;
          v19[1] = *(_OWORD *)L"_ACPI_INFO";
          Handle = 0LL;
          ObjectAttributes.Length = 48;
          ObjectAttributes.RootDirectory = 0LL;
          ObjectAttributes.Attributes = 576;
          ObjectAttributes.ObjectName = v1 + 32;
          *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
          v3 = ZwOpenKey(&KeyHandle, 0x20006u, &ObjectAttributes);
          if ( v3 >= 0 )
          {
            ObjectAttributes.RootDirectory = KeyHandle;
            ObjectAttributes.ObjectName = (PUNICODE_STRING)&v16;
            ObjectAttributes.Length = 48;
            ObjectAttributes.Attributes = 576;
            *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
            v3 = ZwCreateKey(&Handle, 0x20006u, &ObjectAttributes, 0, 0LL, 1u, 0LL);
            ZwClose(KeyHandle);
            if ( v3 >= 0 )
            {
              v3 = ZwSetValueKey(
                     Handle,
                     (PUNICODE_STRING)&DestinationString,
                     0,
                     3u,
                     Destination.Buffer,
                     Destination.Length);
              ZwClose(Handle);
            }
          }
        }
      }
      else
      {
        v3 = -1073741801;
        v10 = WdLogNewEntry5_WdLowResource(v6);
        *(_QWORD *)(v10 + 24) = -1073741801LL;
        WdLogEvent5_WdLowResource(v10);
      }
    }
    else
    {
      v3 = -1072431089;
    }
    if ( Destination.Buffer )
      ExFreePoolWithTag(Destination.Buffer, 0);
    return (unsigned int)v3;
  }
  return result;
}
