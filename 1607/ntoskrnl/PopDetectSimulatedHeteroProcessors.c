/*
 * XREFs of PopDetectSimulatedHeteroProcessors @ 0x14056AE44
 * Callers:
 *     PopInitializeHeteroProcessors @ 0x14056AAC4 (PopInitializeHeteroProcessors.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14002D7E0 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     ZwClose @ 0x14015A3D0 (ZwClose.c)
 *     ZwOpenKey @ 0x14015A430 (ZwOpenKey.c)
 *     ZwQueryValueKey @ 0x14015A4D0 (ZwQueryValueKey.c)
 *     ZwEnumerateKey @ 0x14015A830 (ZwEnumerateKey.c)
 *     memset @ 0x140171AC0 (memset.c)
 *     RtlUnicodeStringToInteger @ 0x1404A31F0 (RtlUnicodeStringToInteger.c)
 */

char __fastcall PopDetectSimulatedHeteroProcessors(__int64 a1)
{
  char v2; // r15
  ULONG v4; // r14d
  HANDLE v5; // rcx
  NTSTATUS v6; // ebx
  unsigned __int16 v7; // si
  __int64 v8; // rcx
  ULONG ResultLength; // [rsp+38h] [rbp-79h] BYREF
  ULONG Value; // [rsp+3Ch] [rbp-75h] BYREF
  HANDLE KeyHandle; // [rsp+40h] [rbp-71h] BYREF
  HANDLE Handle; // [rsp+48h] [rbp-69h] BYREF
  UNICODE_STRING String; // [rsp+58h] [rbp-59h] BYREF
  UNICODE_STRING DestinationString; // [rsp+68h] [rbp-49h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+78h] [rbp-39h] BYREF
  UNICODE_STRING ValueName; // [rsp+A8h] [rbp-9h] BYREF
  int KeyValueInformation; // [rsp+B8h] [rbp+7h] BYREF
  int v18; // [rsp+BCh] [rbp+Bh]
  __int64 v19; // [rsp+C0h] [rbp+Fh]
  _BYTE KeyInformation[12]; // [rsp+C8h] [rbp+17h] BYREF
  ULONG v21; // [rsp+D4h] [rbp+23h]
  char v22; // [rsp+D8h] [rbp+27h] BYREF

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
    v4 = 0;
    String.Buffer = (wchar_t *)&v22;
    String.MaximumLength = 4;
    RtlInitUnicodeString(&ValueName, L"SmallProcessorMask");
    v5 = KeyHandle;
    ObjectAttributes.RootDirectory = KeyHandle;
    while ( 1 )
    {
      v6 = ZwEnumerateKey(v5, v4, KeyBasicInformation, KeyInformation, 0x18u, &ResultLength);
      if ( v6 < 0 )
        goto LABEL_20;
      ResultLength = v21;
      if ( v21 <= 4 )
      {
        String.Length = v21;
        v6 = RtlUnicodeStringToInteger(&String, 0xAu, &Value);
        if ( v6 < 0 )
          goto LABEL_23;
        v7 = Value;
        if ( Value < *(unsigned __int16 *)(a1 + 2) )
          break;
      }
LABEL_21:
      if ( v6 < 0 )
      {
LABEL_23:
        ZwClose(KeyHandle);
        return v2;
      }
      v5 = KeyHandle;
    }
    DestinationString = String;
    v6 = ZwOpenKey(&Handle, 1u, &ObjectAttributes);
    if ( v6 < 0 )
    {
LABEL_20:
      ++v4;
      goto LABEL_21;
    }
    v6 = ZwQueryValueKey(
           Handle,
           &ValueName,
           KeyValuePartialInformationAlign64,
           &KeyValueInformation,
           0x10u,
           &ResultLength);
    if ( v6 >= 0 && (KeyValueInformation == 4 || KeyValueInformation == 11) )
    {
      v2 = 1;
      if ( v18 == 4 )
      {
        v8 = (unsigned int)v19;
        v19 = (unsigned int)v19;
LABEL_16:
        if ( *(_WORD *)a1 <= v7 )
          *(_WORD *)a1 = v7 + 1;
        *(_QWORD *)(a1 + 8LL * v7 + 8) |= v8;
        goto LABEL_19;
      }
      if ( v18 == 8 )
      {
        v8 = v19;
        goto LABEL_16;
      }
    }
LABEL_19:
    ZwClose(Handle);
    goto LABEL_20;
  }
  return v2;
}
