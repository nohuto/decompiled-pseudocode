/*
 * XREFs of PopConfigureHeteroProcessors @ 0x1405B0F14
 * Callers:
 *     PopInitializeHeteroProcessors @ 0x1405B0EA0 (PopInitializeHeteroProcessors.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140047FE0 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     ZwClose @ 0x14017F1D0 (ZwClose.c)
 *     ZwOpenKey @ 0x14017F230 (ZwOpenKey.c)
 *     ZwQueryValueKey @ 0x14017F2D0 (ZwQueryValueKey.c)
 *     ZwEnumerateKey @ 0x14017F630 (ZwEnumerateKey.c)
 *     memset @ 0x140195A80 (memset.c)
 *     RtlUnicodeStringToInteger @ 0x140522AA0 (RtlUnicodeStringToInteger.c)
 */

char __fastcall PopConfigureHeteroProcessors(__int64 a1)
{
  char v2; // r15
  wchar_t **v3; // rbx
  __int64 v4; // rdi
  ULONG v6; // r14d
  HANDLE v7; // rcx
  NTSTATUS v8; // ebx
  unsigned __int16 v9; // si
  __int64 v10; // rcx
  ULONG ResultLength; // [rsp+30h] [rbp-79h] BYREF
  HANDLE KeyHandle; // [rsp+38h] [rbp-71h] BYREF
  HANDLE Handle; // [rsp+40h] [rbp-69h] BYREF
  ULONG Value; // [rsp+48h] [rbp-61h] BYREF
  UNICODE_STRING String; // [rsp+50h] [rbp-59h] BYREF
  UNICODE_STRING DestinationString; // [rsp+60h] [rbp-49h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+70h] [rbp-39h] BYREF
  UNICODE_STRING ValueName; // [rsp+A0h] [rbp-9h] BYREF
  int KeyValueInformation; // [rsp+B0h] [rbp+7h] BYREF
  int v20; // [rsp+B4h] [rbp+Bh]
  __int64 v21; // [rsp+B8h] [rbp+Fh]
  _BYTE KeyInformation[12]; // [rsp+C0h] [rbp+17h] BYREF
  ULONG v23; // [rsp+CCh] [rbp+23h]
  char v24; // [rsp+D0h] [rbp+27h] BYREF

  *(_DWORD *)(a1 + 4) = 0;
  *(_DWORD *)a1 = 1310721;
  memset((void *)(a1 + 8), 0, 0xA0uLL);
  RtlInitUnicodeString(
    &DestinationString,
    L"\\Registry\\MACHINE\\SYSTEM\\CurrentControlSet\\Control\\Session Manager\\Kernel\\KGroups");
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.ObjectName = &DestinationString;
  ObjectAttributes.Length = 48;
  ObjectAttributes.Attributes = 576;
  v2 = 0;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  if ( ZwOpenKey(&KeyHandle, 8u, &ObjectAttributes) >= 0 )
  {
    String.MaximumLength = 4;
    v6 = 0;
    String.Buffer = (wchar_t *)&v24;
    RtlInitUnicodeString(&ValueName, L"SmallProcessorMask");
    v7 = KeyHandle;
    ObjectAttributes.RootDirectory = KeyHandle;
    while ( 1 )
    {
      v8 = ZwEnumerateKey(v7, v6, KeyBasicInformation, KeyInformation, 0x18u, &ResultLength);
      if ( v8 < 0 )
        goto LABEL_27;
      ResultLength = v23;
      if ( v23 <= 4 )
      {
        String.Length = v23;
        v8 = RtlUnicodeStringToInteger(&String, 0xAu, &Value);
        if ( v8 < 0 )
          goto LABEL_30;
        v9 = Value;
        if ( Value < *(unsigned __int16 *)(a1 + 2) )
          break;
      }
LABEL_28:
      if ( v8 < 0 )
      {
LABEL_30:
        ZwClose(KeyHandle);
        goto LABEL_2;
      }
      v7 = KeyHandle;
    }
    DestinationString = String;
    v8 = ZwOpenKey(&Handle, 1u, &ObjectAttributes);
    if ( v8 < 0 )
    {
LABEL_27:
      ++v6;
      goto LABEL_28;
    }
    v8 = ZwQueryValueKey(
           Handle,
           &ValueName,
           KeyValuePartialInformationAlign64,
           &KeyValueInformation,
           0x10u,
           &ResultLength);
    if ( v8 >= 0 && (KeyValueInformation == 4 || KeyValueInformation == 11) )
    {
      v2 = 1;
      if ( v20 == 4 )
      {
        v10 = (unsigned int)v21;
        v21 = (unsigned int)v21;
LABEL_23:
        if ( *(_WORD *)a1 <= v9 )
          *(_WORD *)a1 = v9 + 1;
        *(_QWORD *)(a1 + 8LL * v9 + 8) |= v10;
        goto LABEL_26;
      }
      if ( v20 == 8 )
      {
        v10 = v21;
        goto LABEL_23;
      }
    }
LABEL_26:
    ZwClose(Handle);
    goto LABEL_27;
  }
LABEL_2:
  ObjectAttributes.RootDirectory = 0LL;
  RtlInitUnicodeString(&DestinationString, L"\\Registry\\MACHINE\\SYSTEM\\CurrentControlSet\\Control");
  if ( ZwOpenKey(&KeyHandle, 8u, &ObjectAttributes) >= 0 )
  {
    v3 = &off_140322238;
    ObjectAttributes.RootDirectory = KeyHandle;
    v4 = 7LL;
    do
    {
      RtlInitUnicodeString(&DestinationString, *(v3 - 1));
      if ( ZwOpenKey(&Handle, 1u, &ObjectAttributes) >= 0 )
      {
        RtlInitUnicodeString(&ValueName, *v3);
        if ( ZwQueryValueKey(
               Handle,
               &ValueName,
               KeyValuePartialInformationAlign64,
               &KeyValueInformation,
               0x10u,
               &ResultLength) >= 0
          && KeyValueInformation == 4 )
        {
          *(_DWORD *)v3[1] = v21;
        }
        ZwClose(Handle);
      }
      v3 += 3;
      --v4;
    }
    while ( v4 );
    ZwClose(KeyHandle);
  }
  return v2;
}
