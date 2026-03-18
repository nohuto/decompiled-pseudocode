/*
 * XREFs of DpiAcpiExposeInfo @ 0x1C00CF980
 * Callers:
 *     DpiFdoEnumChildDevices @ 0x1C00D0530 (DpiFdoEnumChildDevices.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0011390 (__security_check_cookie.c)
 *     memset @ 0x1C0012400 (memset.c)
 *     DpiAcpiPrepareAcpiChildNameList @ 0x1C00D0A30 (DpiAcpiPrepareAcpiChildNameList.c)
 */

__int64 __fastcall DpiAcpiExposeInfo(__int64 a1)
{
  __int64 v1; // rsi
  __int64 result; // rax
  NTSTATUS v3; // ebx
  _DWORD *v4; // rax
  CHAR *PoolWithTag; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // rax
  unsigned int v11; // r14d
  __int64 v12; // rdi
  _QWORD *v13; // rax
  struct _STRING Destination; // [rsp+40h] [rbp-79h] BYREF
  HANDLE Handle; // [rsp+50h] [rbp-69h] BYREF
  void *KeyHandle; // [rsp+58h] [rbp-61h] BYREF
  struct _STRING DestinationString; // [rsp+60h] [rbp-59h] BYREF
  STRING Source; // [rsp+70h] [rbp-49h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+80h] [rbp-39h] BYREF
  int v20; // [rsp+B0h] [rbp-9h] BYREF
  _OWORD *v21; // [rsp+B8h] [rbp-1h]
  _OWORD v22[2]; // [rsp+C0h] [rbp+7h] BYREF
  int v23; // [rsp+E0h] [rbp+27h]
  wchar_t v24; // [rsp+E4h] [rbp+2Bh]

  v1 = *(_QWORD *)(a1 + 64);
  *(_DWORD *)&Source.Length = 65537;
  Source.Buffer = (PCHAR)&byte_1C00ED620;
  *(_DWORD *)&Destination.Length = 0;
  Destination.Buffer = 0LL;
  result = DpiAcpiPrepareAcpiChildNameList(v1);
  v3 = result;
  if ( (int)result >= 0 )
  {
    v4 = *(_DWORD **)(v1 + 1952);
    if ( *v4 == 1198089537 && v4[1] )
    {
      Destination.MaximumLength = 4096;
      PoolWithTag = (CHAR *)ExAllocatePoolWithTag(PagedPool, 0x1000uLL, 0x74727044u);
      Destination.Buffer = PoolWithTag;
      if ( PoolWithTag )
      {
        memset(PoolWithTag, 0, Destination.MaximumLength);
        v10 = *(_QWORD *)(v1 + 1952);
        v11 = 1;
        v12 = v10 + 8;
        if ( *(_DWORD *)(v10 + 4) > 1u )
        {
          do
          {
            v12 += *(unsigned int *)(v12 + 4) + 8LL;
            if ( (*(_BYTE *)v12 & 1) == 0 )
            {
              RtlInitAnsiString(&DestinationString, (PCSZ)(v12 + 8));
              RtlAppendStringToString(&Destination, &DestinationString);
              RtlAppendStringToString(&Destination, &Source);
            }
            ++v11;
          }
          while ( v11 < *(_DWORD *)(*(_QWORD *)(v1 + 1952) + 4LL) );
        }
        if ( !Destination.Buffer )
          return (unsigned int)v3;
        if ( Destination.Length )
        {
          v23 = *(_DWORD *)L"FO";
          v24 = aDisplayAcpiInf[18];
          v20 = 2490404;
          v21 = v22;
          v22[0] = *(_OWORD *)L"_DISPLAY_ACPI_INFO";
          *(_DWORD *)&DestinationString.Length = 0;
          DestinationString.Buffer = 0LL;
          KeyHandle = 0LL;
          v22[1] = *(_OWORD *)L"_ACPI_INFO";
          Handle = 0LL;
          ObjectAttributes.Length = 48;
          ObjectAttributes.RootDirectory = 0LL;
          ObjectAttributes.Attributes = 576;
          ObjectAttributes.ObjectName = (PUNICODE_STRING)(v1 + 512);
          *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
          v3 = ZwOpenKey(&KeyHandle, 0x20006u, &ObjectAttributes);
          if ( v3 >= 0 )
          {
            ObjectAttributes.RootDirectory = KeyHandle;
            ObjectAttributes.ObjectName = (PUNICODE_STRING)&v20;
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
        v13 = (_QWORD *)WdLogNewEntry5_WdLowResource(v7, v6, v8, v9);
        v13[3] = DpiAcpiExposeInfo;
        v13[4] = ExAllocatePoolWithTag;
        v13[5] = -1073741801LL;
        WdLogEvent5_WdLowResource(v13);
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
